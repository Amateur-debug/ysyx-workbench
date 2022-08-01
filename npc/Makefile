module := IFU
module_home := $(shell find ./ -name "$(module)")
V_SOURCE := $(shell find $(module_home)/ -name "*.v")
C_SOURCE := $(wildcard ./csrc/sim_$(module).cpp)
BUILD := build_$(module)

sim:$(V_SOURCE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --Wall --cc --exe --build --Mdir $(BUILD) --trace $^ $(C_SOURCE)
	cd $(BUILD)&&./Vtop
	gtkwave ./$(BUILD)/wave.vcd

.PHONY: clean

clean:
	rm -rf ./$(BUILD)