#!/bin/env python3

import os
import secrets

from conan import ConanFile
from conan.tools.cmake import CMake, cmake_layout, CMakeDeps, CMakeToolchain
from conan.tools.build import can_run


class tlm_soc(ConanFile):
    name = "tlm_soc"
    version = "1.0"
    systemc_version = "3.0.1"
    cmake_version = "3.31.6"
    fmt_version = "12.0.0"
    spdlog_version = "1.16.0"
    gtest_version = "1.17.0"

    # Optional metadata
    license = ""
    author = ""
    url = ""
    description = ""
    topics = ("", "", "")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"

    all_tests = ["WriteTransactionWithNoSnoopTest", "ReadTransactionWithNoSnoopTest"]

    options = {
        "shared": [True, False],
        "fPIC": [True, False],
        "run_test" : ["all", "none", "ANY"],
        "seed": ["ANY"],
    }

    default_options = {
        "shared": False,
        "fPIC": True,
        "run_test": "none",
        "seed": 0,

        f"systemc/{systemc_version}:fPIC": True,
        f"systemc/{systemc_version}:shared": False,
        f"systemc/{systemc_version}:enable_pthreads": False,
        f"systemc/{systemc_version}:enable_assertions": True,
        f"systemc/{systemc_version}:disable_virtual_bind": True,
        f"systemc/{systemc_version}:disable_async_updates": False,
        f"systemc/{systemc_version}:disable_copyright_msg": True,
        f"systemc/{systemc_version}:enable_phase_callbacks": True,
        f"systemc/{systemc_version}:enable_phase_callbacks_tracing": False,
        f"systemc/{systemc_version}:enable_immediate_self_notifications": False,

        f"gtest/{gtest_version}:shared": False,
        f"gtest/{gtest_version}:build_gmock": True,
        f"gtest/{gtest_version}:hide_symbols": False,
        f"gtest/{gtest_version}:disable_pthreads": False,

        f"fmt/{fmt_version}:fPIC": True,
        f"fmt/{fmt_version}:shared": False,
        f"fmt/{fmt_version}:header_only": False,
        f"fmt/{fmt_version}:with_os_api": False,
        f"fmt/{fmt_version}:with_unicode": False,

        f"spdlog/{spdlog_version}:fPIC": True,
        f"spdlog/{spdlog_version}:shared": False,
        f"spdlog/{spdlog_version}:header_only": False,
        f"spdlog/{spdlog_version}:use_std_fmt": False,
        f"spdlog/{spdlog_version}:no_exceptions": True,
    }

    exports_sources = (
        "CMakeLists.txt",
        "src/*",
        "include/*",
        "noc_model/*",
        "conanfile.py",
        "README.md")


    def config_options(self):
        if self.settings.os == "Windows": #pylint: disable=no-member
            del self.options.fPIC


    def layout(self):
        cmake_layout(self)


    def generate(self):
        deps = CMakeDeps(self)
        deps.generate()

        tc = CMakeToolchain(self)
        tc.user_presets_path = False
        tc.generate()


    def requirements(self):
        self.requires(f"systemc/{self.systemc_version}")
        self.requires(f"gtest/{self.gtest_version}")
        self.requires(f"fmt/{self.fmt_version}")
        self.requires(f"spdlog/{self.spdlog_version}")


    def build_requirements(self):
        self.tool_requires(f"cmake/{self.cmake_version}") #pylint: disable=not-callable


    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

        if "none" == str(self.options.run_test).lower():
            return

        seed = secrets.randbits(31) if 0 == self.options.seed else self.options.seed
        if "all" == str(self.options.run_test).lower():
            for test_name in self.all_tests:
                self.run_test(test_name, seed)

            return

        tests = str(self.options.run_test).split(',')
        for test_name in tests:
            self.run_test(test_name.strip(), seed)


    def run_test(self, test_name, seed):
        if can_run(self):
            cmd = os.path.join(self.cpp.build.bindir, f"{test_name} --gtest_random_seed={seed}")
            self.run(cmd, env="conanrun")
