# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vsig_topology_top.mk

default: libVsig_topology_top

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /tools/sw-tools/verilator/v5.038/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /tools/sw-tools/systemc/3.0.1/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /tools/sw-tools/systemc/3.0.1/lib64

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 1
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 0
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vsig_topology_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vsig_topology_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -std=c++17 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  .. \

### Default rules...
# Include list of all generated classes
include Vsig_topology_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Library rules (default lib mode)
libVsig_topology_top.a: $(VK_OBJS) $(VK_USER_OBJS) $(VM_HIER_LIBS)
libverilated.a: $(VK_GLOBAL_OBJS)
libVsig_topology_top: libVsig_topology_top.a libverilated.a $(VM_PREFIX)__ALL.a
# Verilated -*- Makefile -*-
