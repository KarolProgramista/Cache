RTL_DIR = rtl
TB_DIR = tb_sv

RTL_SRC = $(RTL_DIR)/cache.sv
TB_SRC = $(wildcard $(TB_DIR)/*.sv)
TB_TOP = tb_cache

VFLAGS = --binary --trace --coverage -Wno-CONSTRAINTIGN --assert

COVERAGE_TOOL = verilator_coverage

.PHONY: all clean coverage

all: simulate

build:
	verilator  $(VFLAGS) -I$(RTL_DIR) $(RTL_SRC) $(TB_SRC) --top-module $(TB_TOP)

simulate: build
	./obj_dir/V$(TB_TOP)

coverage: simulate
	@echo "--- GENERATING COVERAGE REPORT ---"
	$(COVERAGE_TOOL) --annotate-min 1 coverage.dat
	mkdir -p logs/annotated
	$(COVERAGE_TOOL) --annotate logs/annotated coverage.dat
	@echo "Annotated report saved in logs/annotated/"

clean:
	rm -rf obj_dir *.log *.pb *.jou *.vcd coverage.dat logs/ coverage.info coverage_html/
