# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsig_topology_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vsig_topology_top_vm_classes_0 \
  Vsig_topology_top_vm_classes_1 \
  Vsig_topology_top_vm_classes_2 \
  Vsig_topology_top_vm_classes_3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vsig_topology_top_vm_classes_Slow_0 \
  Vsig_topology_top_vm_classes_Slow_1 \
  Vsig_topology_top_vm_classes_Slow_2 \
  Vsig_topology_top_vm_classes_Slow_3 \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vsig_topology_top__Trace__0 \
  Vsig_topology_top__Trace__1 \
  Vsig_topology_top__Trace__2 \
  Vsig_topology_top__Trace__3 \
  Vsig_topology_top__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vsig_topology_top__Syms \
  Vsig_topology_top__Trace__0__Slow \
  Vsig_topology_top__TraceDecls__0__Slow \
  Vsig_topology_top__Trace__1__Slow \
  Vsig_topology_top__Trace__2__Slow \
  Vsig_topology_top__Trace__3__Slow \
  Vsig_topology_top__Trace__4__Slow \
  Vsig_topology_top__Trace__5__Slow \
  Vsig_topology_top__Trace__6__Slow \
  Vsig_topology_top__Trace__7__Slow \
  Vsig_topology_top__Trace__8__Slow \
  Vsig_topology_top__Trace__9__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
