module := CPU
V_TOP	 := $(shell find ./vsrc -name "*$(module).v")
V_SOURCE := $(shell find ./vsrc -name "*.v")
C_SOURCE := $(shell find ./csrc -name "sim_$(module).cpp")
BUILD := build_$(module)

sim:$(V_TOP) $(V_SOURCE) $(C_SOURCE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --Wall --cc --exe --Mdir $(BUILD) --trace $^
	make -j -C $(BUILD) -f Vysyx_22041461_$(module).mk Vysyx_22041461_$(module)
	cd $(BUILD)&&./Vysyx_22041461_$(module)
	gtkwave ./$(BUILD)/wave.vcd

.PHONY: clean

clean:
	rm -rf ./$(BUILD)