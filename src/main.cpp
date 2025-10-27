#include <systemc>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>

int sc_main(int argc, char** argv)
{
    spdlog::set_pattern("[%H:%M:%S UTC%z][%^%=8l%$][%n] %v");
    ::testing::InitGoogleTest(&argc, argv);
    int status = RUN_ALL_TESTS();
    return status;
}
