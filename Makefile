TOPLEVEL_LANG = verilog
VERILOG_SOURCES = cache.v
TOPLEVEL = cache
COCOTB_TEST_MODULES = test_cache

include $(shell cocotb-config --makefiles)/Makefile.sim
