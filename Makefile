RTL_DIR = rtl
TB_DIR = tb_sv

RTL_SRC = $(RTL_DIR)/cache.sv
TB_SRC = $(wildcard $(TB_DIR)/*.sv)
TB_TOP = tb_cache
SYNTH_VFLAGS = --binary --trace \
               -Wno-DECLFILENAME \
               -Wno-UNUSEDSIGNAL \
               -Wno-UNDRIVEN \
               -Wno-UNOPTFLAT \
               -Wno-VARHIDDEN \
               -Wno-CONSTRAINTIGN \
               -Wno-BLKSEQ \

VFLAGS = --binary --trace --coverage -Wno-CONSTRAINTIGN --assert
COVERAGE_TOOL = verilator_coverage

.PHONY: all clean synth simulate sim_synth coverage


all: simulate

build:
	verilator  $(VFLAGS) -I$(RTL_DIR) $(RTL_SRC) $(TB_SRC) --top-module $(TB_TOP)

simulate: build
	./obj_dir/V$(TB_TOP)

synth:
	mkdir -p netlist
	yosys -s synth.ys | tee synth.log

sim_synth: synth
	verilator $(SYNTH_VFLAGS) -I$(RTL_DIR) -I$(TB_DIR) \
		netlist/cache_synth_netlist.v $(TB_SRC) \
		--top-module $(TB_TOP) -o Vcache_synth
	./obj_dir/Vcache_synth

coverage: simulate
	@echo "--- GENERATING COVERAGE REPORT ---"
	$(COVERAGE_TOOL) --annotate-min 1 coverage.dat
	mkdir -p logs/annotated
	$(COVERAGE_TOOL) --annotate logs/annotated coverage.dat
	@echo "Annotated report saved in logs/annotated/"

clean:
	rm -rf obj_dir *.log *.pb *.jou *.vcd coverage.dat logs/ coverage.info coverage_html/
