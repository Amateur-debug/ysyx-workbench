V_PATH := ./vsrc
C_PATH := ./csrc
IMG_PATH := /home/cxy/ysyx-workbench/am-kernels/tests/cpu-tests/build/
IMG =
module := CPU
module_name := $(addprefix ysyx_22041461_,$(module))
Vmodule_name := $(addprefix Vysyx_22041461_,$(module))

V_TOP := $(V_PATH)/$(module_name).v
V_SOURCE := $(shell find $(V_PATH) -name "*.v")
V_SOURCE += $(shell find $(V_PATH) -name "*.vh")
CC_SOURCE := $(shell find $(C_PATH) -name "*.cpp")
C_SOURCE := $(shell find $(C_PATH) -name "*.c")

BUILD := build

VFLAGS +=  --cc --exe --trace --Mdir $(BUILD)
VFLAGS += -LDFLAGS -lasan
VFLAGS += -LDFLAGS -lreadline
VFLAGS += -LDFLAGS -lriscv64-nemu-interpreter-so
VFLAGS += -LDFLAGS -lSDL2
VFLAGS += -CFLAGS -include
VFLAGS += -CFLAGS /home/cxy/ysyx-workbench/npc/include/difftest.h
VFLAGS += -CFLAGS -fPIC
VFLAGS += -CFLAGS -I
VFLAGS += -CFLAGS /home/cxy/ysyx-workbench/npc/include

ifdef IMG
VFLAGS += -CFLAGS -DIMG=$(IMG)
endif

run:$(V_TOP) $(V_SOURCE) $(C_SOURCE) $(CC_SOURCE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VFLAGS) $^
	make -j -C $(BUILD) -f $(Vmodule_name).mk
	-cd $(BUILD)&&./$(Vmodule_name)
	-gtkwave ./$(BUILD)/wave.vcd
	-make clean

.PHONY: clean run

clean:
	rm -rf ./$(BUILD)

