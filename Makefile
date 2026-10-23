RTL_DIR = rtl
TB_DIR = tb_sv

RTL_SRC = $(RTL_DIR)/cache.sv
TB_SRC = $(TB_DIR)/tb_*
TB_TOP = tb_cache
SNAPSHOT = $(TB_TOP)_snapshot

.PHONY: all clean

all: simulate

build:
	verilator --binary --trace  -I$(RTL_DIR) $(RTL_SRC) $(TB_SRC) --top-module $(TB_TOP)

simulate: build
	./obj_dir/V$(TB_TOP)

clean:
	rm -rf obj_dir *.log *.pb *.jou *.vcd
