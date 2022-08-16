#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_CPU.h"

#include "svdpi.h"
#include "Vysyx_22041461_CPU__Dpi.h"

#include "/home/cxy/ysyx-workbench/npc/include/init.h"
#include "/home/cxy/ysyx-workbench/npc/include/pmem.h"
#include "/home/cxy/ysyx-workbench/npc/include/common.h"

vluint64_t main_time = 0;  //initial 仿真时间
 
double sc_time_stamp()
{
    return main_time;
}

void ebreak(){
    main_time = 19;
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
    while (sc_time_stamp() < 100 && !Verilated::gotFinish()) { //控制仿真时间
        top->clk = !top->clk; 
        if (main_time > 1) {
            top->rst = 1;
        }
        top->eval();
	    printf("clk = %d, rst = %d, flag = %d\n", top->clk, top->rst, top->flag);
	    tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
    }


    top->final();
    tfp->close();
    delete top;
 
    return 0;
}
