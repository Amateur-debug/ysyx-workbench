# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_041461_TOP.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_041461_TOP \
	Vysyx_041461_TOP___024root \
	Vysyx_041461_TOP___024root__1 \
	Vysyx_041461_TOP___024root__2 \
	Vysyx_041461_TOP___024root__3 \
	Vysyx_041461_TOP___024root__4 \
	Vysyx_041461_TOP___024root__5 \
	Vysyx_041461_TOP___024root__6 \
	Vysyx_041461_TOP___024root__7 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__1 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__2 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__3 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__4 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__5 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__6 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__7 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__8 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__9 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__10 \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__11 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_041461_TOP__ConstPool_0 \
	Vysyx_041461_TOP___024root__Slow \
	Vysyx_041461_TOP___024root__1__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__1__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__2__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__3__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__4__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__5__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__6__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__7__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__8__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__9__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__10__Slow \
	Vysyx_041461_TOP_ysyx_041461_Walloc_33bits__11__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_041461_TOP__Dpi \
	Vysyx_041461_TOP__Trace \
	Vysyx_041461_TOP__Trace__1 \
	Vysyx_041461_TOP__Trace__2 \
	Vysyx_041461_TOP__Trace__3 \
	Vysyx_041461_TOP__Trace__4 \
	Vysyx_041461_TOP__Trace__5 \
	Vysyx_041461_TOP__Trace__6 \
	Vysyx_041461_TOP__Trace__7 \
	Vysyx_041461_TOP__Trace__8 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_041461_TOP__Syms \
	Vysyx_041461_TOP__Trace__Slow \
	Vysyx_041461_TOP__Trace__1__Slow \
	Vysyx_041461_TOP__Trace__2__Slow \
	Vysyx_041461_TOP__Trace__3__Slow \
	Vysyx_041461_TOP__Trace__4__Slow \
	Vysyx_041461_TOP__Trace__5__Slow \
	Vysyx_041461_TOP__Trace__6__Slow \
	Vysyx_041461_TOP__Trace__7__Slow \
	Vysyx_041461_TOP__Trace__8__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
