#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_CPU.h"

#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"

void ebreak(){
    extern vluint64_t main_time;
    main_time = 19;
}

static uint8_t pmem[134217728] = {
    0x01, 0xB4, 0x85, 0x93, 0x11, 0xB4, 0x85, 0x93, 0x01, 0xB4, 0x85, 0x93, 0x01, 0xB4, 0x85, 0x93   //x11 = x9 + 4075
};

static const uint32_t img[] = {
    0x01B48593, 
    0x11B48593, 
    0xF1B48593,
    0x01B48593       //x11 = x9 + 4075
};

void init_mem(){
    memcpy(pmem, img, sizeof(img));
}

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }

static inline uint32_t host_read(uint8_t *addr) {
    return *(uint32_t *)addr;
}

static uint32_t pmem_read(uint32_t addr) {
  uint32_t ret = host_read(guest_to_host(addr));
  return ret;
}
 
vluint64_t main_time = 0;  //initial 仿真时间
 
double sc_time_stamp()
{
    return main_time;
}

int main(int argc, char **argv){
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
 
    Vysyx_22041461_CPU *top = new Vysyx_22041461_CPU("CPU"); //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //打开vcd

    init_mem();
    top->clk = 1;
    top->rst = 0;
    top->pc  = 0x80000000;
    top->inst = pmem_read(top->pc);
    while (sc_time_stamp() < 20 && !Verilated::gotFinish()) { //控制仿真时间
        top->clk = !top->clk; 
        top->inst = pmem_read(top->pc);
        if (main_time > 1) {
            top->rst = 1;
        }
        top->eval();
	    printf("clk = %d, rst = %d, inst = %u, pc = %ld\n", top->clk, top->rst, top->inst, top->pc);
	    tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
    }


    top->final();
    tfp->close();
    delete top;
 
    return 0;
}
