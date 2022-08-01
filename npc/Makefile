V_SOURCE := $(wildcard ./vsrc/* .v)

all:
	@echo "Write this Makefile by your self."

sim:$(V_SOURCE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --Wall -cc -exe -build --Mdir build --trace $^ main.cpp 




include ../Makefile
