RTL_DIR = rtl
TB_DIR = tb_sv

RTL_SRC = $(RTL_DIR)/cache.sv
TB_SRC = $(wildcard $(TB_DIR)/*.sv)
TB_TOP = tb_cache

.PHONY: all clean

all: simulate

build:
	verilator --binary --trace -Wno-CONSTRAINTIGN  -I$(RTL_DIR) $(RTL_SRC) $(TB_SRC) --top-module $(TB_TOP)

simulate: build
	./obj_dir/V$(TB_TOP)

clean:
	rm -rf obj_dir *.log *.pb *.jou *.vcd
