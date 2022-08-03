#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vysyx_22041461_ADDER.h"

vluint64_t main_time = 0;  //initial 仿真时间
 
double sc_time_stamp()
{
    return main_time;
}
 
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
 
    Vysyx_22041461_ADDER *top = new Vysyx_22041461_ADDER("ADDER"); //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //打开vcd
 
    while (sc_time_stamp() < 20 && !Verilated::gotFinish()) { //控制仿真时间
        uint64_t in1 = (uint64_t)rand() * (uint64_t)rand();
	    uint64_t in2 = (uint64_t)rand() * (uint64_t)rand();
	    top->in1 = in1;
	    top->in2 = in2;
	    top->eval();
	    printf("in1 = %lu, in2 = %lu, sum = %lu, flag = %d\n", in1, in2, top->sum, top->flag);
	    tfp->dump(main_time); //dump wave
        main_time++; //推动仿真时间
        assert(top->sum == top->in1 + top->in2);
    }
    top->final();
    tfp->close();
    delete top;
 
    return 0;
}
