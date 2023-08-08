// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1278,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1281,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1283,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1284,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1285,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1278,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1281,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1283,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1284,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1285,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("pipelined ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1278,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1281,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1283,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1284,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1285,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"PL_IF",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1298,"PL_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1299,"PL_EX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"PL_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1301,"PL_WB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+6,"id_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"ex_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"mem_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"wb_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+10+i*1,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+14+i*1,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+19+i*1,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+24,"pc_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+25+i*1,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+27+i*1,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+30+i*1,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBus(c+34,"ex_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"mem_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"wb_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+37+i*1,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+39+i*1,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+41+i*1,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBus(c+43,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+45+i*1,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+48+i*1,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+52+i*1,"is_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1293+i*1,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+4), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 1,0);
    }
    tracep->declBus(c+60,"pc_IF_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,"pc_WB_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+64+i*1,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBit(c+66,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+67+i*1,"is_rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+43,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"A_ADD", "A_SUB", "A_SLT", "A_SLTU", "A_XOR", 
                                "A_OR", "A_AND", "A_SLL", 
                                "A_SRL", "A_SRA", "A_RS2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(1, "alu.alu_op_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+70,"alu_op",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,"temp_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"shift_amt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+73,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+74,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+75,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("brcomp2 ");
    tracep->declBus(c+43,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+78,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+79,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+43,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+43,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+91,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+92,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+93,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+96,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+98,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+100,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+105,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+110,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+115,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+120,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+125,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+127,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+130,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+132,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+137,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+142,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+147,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+152,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+153,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+154,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+157,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+159,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+164,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+169,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+174,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+179,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+180,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+181,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+184,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+186,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+191,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+196,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+201,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+206,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+207,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+208,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+211,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+213,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+214,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+215,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+218,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+225,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+230,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+235,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+240,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+241,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+242,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+247,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+252,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+257,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+262,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+267,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+268,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+269,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+272,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+274,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+279,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+284,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+289,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+294,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+295,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+296,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+299,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+300,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+301,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+306,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+311,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+316,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+84,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+321,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+324,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+325,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+326,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+327,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+328,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+331,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+332,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+333,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+334,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+335,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+338,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+339,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+340,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+345,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+350,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+355,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+360,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+361,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+362,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+365,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+366,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+367,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+372,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+377,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+382,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+387,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+388,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+389,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+392,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+393,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+394,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+399,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+404,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+409,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+414,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+415,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+416,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+419,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+420,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+421,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+426,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+431,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+436,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+441,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+442,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+443,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+446,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+447,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+448,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+449,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+450,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+453,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+454,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+455,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+460,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+465,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+470,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+475,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+476,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+477,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+480,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+481,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+482,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+487,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+492,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+497,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+502,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+503,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+504,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+507,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+508,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+509,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+514,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+519,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+524,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+529,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+530,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+531,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+534,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+535,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+536,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+541,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+546,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+551,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+43,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+78,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+557,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+91,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+92,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+559,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+562,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+563,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+98,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+564,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+567,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+568,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+105,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+110,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+115,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+120,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+125,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+569,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+572,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+573,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+132,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+137,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+142,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+147,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+152,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+153,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+574,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+577,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+578,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+159,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+164,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+169,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+174,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+179,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+180,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+579,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+582,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+583,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+186,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+191,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+196,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+201,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+206,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+207,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+584,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+587,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+588,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+213,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+214,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+589,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+592,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+593,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+225,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+230,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+235,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+240,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+241,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+594,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+597,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+247,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+252,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+257,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+262,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+267,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+268,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+599,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+602,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+603,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+274,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+279,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+284,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+289,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+294,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+295,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+604,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+607,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+608,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+301,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+306,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+311,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+316,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+609,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("brcomp1 ");
    tracep->declBus(c+610,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+611,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+612,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+613,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+615,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+616,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+617,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+618,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+619,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+611,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+612,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+617,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+621,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+622,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+623,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+624,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+611,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+612,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+626,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+629,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+630,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+631,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+632,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+633,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+636,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+637,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+638,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+639,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+640,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+643,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+644,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+645,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+650,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+655,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+660,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+664,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+665,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+666,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+667,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+670,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+671,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+672,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+677,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+682,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+687,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+692,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+693,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+694,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+697,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+698,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+699,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+704,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+709,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+714,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+719,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+720,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+721,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+724,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+725,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+726,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+731,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+736,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+741,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+746,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+747,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+748,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+751,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+752,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+753,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+754,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+755,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+758,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+759,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+760,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+765,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+770,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+775,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+782,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+785,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+786,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+787,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+792,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+797,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+802,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+809,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+812,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+813,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+814,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+819,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+824,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+829,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+836,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+839,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+840,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+841,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+846,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+851,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+856,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+624,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+861,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+864,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+865,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+866,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+867,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+868,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+871,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+872,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+873,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+874,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+875,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+877,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+878,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+879,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+880,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+885,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+890,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+895,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+900,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+901,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+902,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+905,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+906,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+907,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+910,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+911,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+912,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+917,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+922,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+927,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+928,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+929,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+932,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+933,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+934,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+937,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+938,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+939,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+944,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+947,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+949,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+954,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+955,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+956,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+959,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+960,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+961,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+962,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+965,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+966,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+971,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+976,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+981,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+982,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+983,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+986,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+987,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+988,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+989,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+990,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+992,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+993,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+994,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+995,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+996,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+999,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1000,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1005,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1008,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1010,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1013,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1014,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+1015,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1016,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1017,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1020,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1021,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1022,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1025,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1026,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1027,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1030,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1031,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1032,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1037,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+1042,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1043,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1044,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1047,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1048,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1049,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1050,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1052,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1053,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1054,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1055,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1056,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1057,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1059,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1064,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1067,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+1069,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1070,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1071,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1072,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1073,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1074,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1075,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1076,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1077,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1079,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1080,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1081,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1082,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1083,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1084,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1085,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1086,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1087,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1091,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1092,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1093,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+611,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+612,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+616,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1096,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1097,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1098,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+631,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+632,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1099,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1101,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1102,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1103,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+638,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+639,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1104,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1105,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1106,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1107,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1108,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+645,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+650,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+655,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+660,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+664,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+665,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+666,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1109,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1110,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1111,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1112,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1113,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+672,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+677,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+682,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+687,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+692,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+693,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1114,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1115,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1116,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1117,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1118,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+699,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+704,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+709,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+714,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+719,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+720,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1119,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1120,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1121,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1122,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1123,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+726,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+731,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+736,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+741,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+746,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+747,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1124,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1125,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1126,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1127,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1128,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+753,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+754,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1129,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1130,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1131,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1132,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1133,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+760,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+765,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+770,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+775,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1134,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1135,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1136,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1137,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1138,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+787,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+792,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+797,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+802,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1139,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1140,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1141,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1142,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1143,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+814,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+819,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+824,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+829,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1144,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1145,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1147,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1148,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+841,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+846,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+851,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+856,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("ctr_unit1 ");
    tracep->declBus(c+1149,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1152,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1153,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1155,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1156,"is_rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1157,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1158,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1159,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1160,"func3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_reg1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1161,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1149,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1162,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1163,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1164,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1165,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1166,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1167,"op_a_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1168,"op_b_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1169,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1170,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1171,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1172,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1173,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1174,"is_rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1175,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1176,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1177,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1178,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1179,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1180,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1181,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1184,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1185,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1187,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1188,"is_rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_detect1 ");
    tracep->declBus(c+1149,"id_instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+610,"ex_instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1189,"ex_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"mem_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"wb_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1174,"id_is_rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1192,"ex_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1193,"mem_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1194,"wb_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1195,"id_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1196,"id_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+24,"pc_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"id_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"ex_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"mem_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"wb_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"id_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"ex_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"mem_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"wb_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"hazard_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1202,"hazard_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1203,"hazard_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1204,"id_is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1205,"ex_is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_reg1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1206,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1207,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1208,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1209,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1210,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen1 ");
    tracep->declBus(c+610,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+63,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_memory1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1208,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1211,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1212,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1213,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1278,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1214,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1295,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1281,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1283,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1284,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1285,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1215,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1216,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_reg1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+610,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1219,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+612,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1189,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+34,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1220,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1221,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1224,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1225,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1226,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1227,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1229,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1231,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1292,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1195,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1196,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1194,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+5,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1232,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1233,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1234+i*1,"memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_reg1 ");
    tracep->declBit(c+1291,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1267,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1268,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1190,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1212,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1296,"ld_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1270,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1271,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1272,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1273,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1274,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1276,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1277,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__wb_data[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__wb_data
                            [0U]),32);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__pipelined__DOT__id_reset_n));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__pipelined__DOT__ex_reset_n));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__pipelined__DOT__mem_reset_n));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__pipelined__DOT__wb_reset_n));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__pipelined__DOT__enable[0]));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__pipelined__DOT__enable[1]));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__pipelined__DOT__enable[2]));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__pipelined__DOT__enable[3]));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__pipelined__DOT__instr[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__pipelined__DOT__instr[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__pipelined__DOT__instr[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__pipelined__DOT__instr[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__pipelined__DOT__instr[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__pipelined__DOT__pc[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__pipelined__DOT__pc[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__pc[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__pc[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__pc[4]),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__pipelined__DOT__pc_enable));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__rs2_data[2]),32);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__pipelined__DOT__rd_wren[0]));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__pipelined__DOT__rd_wren[1]));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__pipelined__DOT__rd_wren[2]));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__pipelined__DOT__rd_wren[3]));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__ex_alu_data),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__pipelined__DOT__mem_alu_data),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__pipelined__DOT__wb_alu_data),32);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__pipelined__DOT__alu_op[0]),4);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__pipelined__DOT__alu_op[1]),4);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[0]));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[1]));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[0]));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[1]));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__pipelined__DOT__mem_op[0]),3);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__pipelined__DOT__mem_op[1]),3);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__pipelined__DOT__mem_op[2]),3);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__pipelined__DOT__mem_wren[0]));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__pipelined__DOT__mem_wren[1]));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__pipelined__DOT__mem_wren[2]));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__pipelined__DOT__mem_wren[3]));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__pipelined__DOT__is_load[0]));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__pipelined__DOT__is_load[1]));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__pipelined__DOT__is_load[2]));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__pipelined__DOT__is_load[3]));
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__pipelined__DOT__wb_sel[0]),2);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__pipelined__DOT__wb_sel[1]),2);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__pipelined__DOT__wb_sel[2]),2);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__pipelined__DOT__wb_sel[3]),2);
    bufp->fullIData(oldp+60,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                              [0U])),32);
    bufp->fullIData(oldp+61,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                              [4U])),32);
    bufp->fullIData(oldp+62,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                               ? ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                   ? vlSelf->top__DOT__pipelined__DOT__ex_alu_data
                                   : ((IData)(4U) + 
                                      vlSelf->top__DOT__pipelined__DOT__pc
                                      [0U])) : ((IData)(4U) 
                                                + vlSelf->top__DOT__pipelined__DOT__pc
                                                [0U]))),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__pipelined__DOT__imm),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[0]));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[1]));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__pipelined__DOT__br_sel));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__pipelined__DOT__is_rs2[0]));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__pipelined__DOT__is_rs2[1]));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__alu_op
                             [1U]),4);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op),4);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift),32);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt),5);
    bufp->fullBit(oldp+73,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less));
    bufp->fullBit(oldp+75,(((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                             ? (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))
                             : (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s))));
    bufp->fullBit(oldp+76,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
                                     | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                         >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                                   & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                      >> 1U))))))));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s));
    bufp->fullBit(oldp+78,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o));
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+84,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))),32);
    bufp->fullIData(oldp+85,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))),32);
    bufp->fullBit(oldp+86,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+88,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                     | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+91,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_a)),16);
    bufp->fullSData(oldp+92,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_b)),16);
    bufp->fullBit(oldp+93,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+95,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                     | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+98,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_a)),4);
    bufp->fullCData(oldp+99,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_b)),4);
    bufp->fullBit(oldp+100,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+102,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+105,((1U & vlSelf->top__DOT__pipelined__DOT__operand_a)));
    bufp->fullBit(oldp+106,((1U & vlSelf->top__DOT__pipelined__DOT__operand_b)));
    bufp->fullBit(oldp+107,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      ^ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+109,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__operand_a) 
                                   & vlSelf->top__DOT__pipelined__DOT__operand_b))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 1U))));
    bufp->fullBit(oldp+112,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 1U)))));
    bufp->fullBit(oldp+113,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+114,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 1U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 1U)))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 2U))));
    bufp->fullBit(oldp+117,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 2U)))));
    bufp->fullBit(oldp+118,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+119,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 2U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 2U)))));
    bufp->fullBit(oldp+120,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 3U))));
    bufp->fullBit(oldp+122,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 3U)))));
    bufp->fullBit(oldp+123,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+124,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 3U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 3U)))));
    bufp->fullCData(oldp+125,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U))),4);
    bufp->fullCData(oldp+126,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 4U))),4);
    bufp->fullBit(oldp+127,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+129,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+132,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 4U))));
    bufp->fullBit(oldp+134,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 4U)))));
    bufp->fullBit(oldp+135,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+136,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 4U)))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 5U))));
    bufp->fullBit(oldp+139,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 5U)))));
    bufp->fullBit(oldp+140,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+141,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 5U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 5U)))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 6U))));
    bufp->fullBit(oldp+144,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 6U)))));
    bufp->fullBit(oldp+145,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+146,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 6U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 6U)))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+148,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 7U))));
    bufp->fullBit(oldp+149,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 7U)))));
    bufp->fullBit(oldp+150,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+151,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 7U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 7U)))));
    bufp->fullCData(oldp+152,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U))),4);
    bufp->fullCData(oldp+153,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 8U))),4);
    bufp->fullBit(oldp+154,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+156,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+159,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 8U))));
    bufp->fullBit(oldp+161,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 8U)))));
    bufp->fullBit(oldp+162,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+163,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 8U)))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 9U))));
    bufp->fullBit(oldp+166,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 9U)))));
    bufp->fullBit(oldp+167,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+168,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 9U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 9U)))));
    bufp->fullBit(oldp+169,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+171,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+172,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+173,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+174,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+175,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+176,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+177,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+178,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+179,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+180,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+181,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+183,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+186,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+187,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+188,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+189,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+190,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+191,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+192,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+193,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+194,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+195,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+197,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+198,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+199,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+200,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+203,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+204,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+205,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+206,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+207,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+208,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+210,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+213,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+214,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+215,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+217,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+220,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+222,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+223,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+224,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+225,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+227,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+228,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+229,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+230,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+231,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+232,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+233,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+234,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+235,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+237,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+238,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+239,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+240,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+241,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+242,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+244,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+245,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+247,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+248,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+249,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+250,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+251,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+253,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+254,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+255,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+256,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+259,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+260,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+261,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+263,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+264,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+265,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+266,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+267,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+268,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+269,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+271,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+274,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+276,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+277,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+278,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+279,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+281,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+282,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+283,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+286,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+287,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+288,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+290,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+291,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+292,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+293,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+294,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+295,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+296,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+297,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+298,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+300,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+301,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+303,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+304,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+305,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+306,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+307,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+308,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+309,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+310,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+311,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+313,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+314,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+315,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+316,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+317,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+318,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+319,(((vlSelf->top__DOT__pipelined__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+320,(((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                 >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+321,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+323,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+324,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+325,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+326,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),16);
    bufp->fullSData(oldp+327,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),16);
    bufp->fullBit(oldp+328,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+330,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+331,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+332,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+333,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),4);
    bufp->fullCData(oldp+334,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),4);
    bufp->fullBit(oldp+335,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+337,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+340,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))));
    bufp->fullBit(oldp+341,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+342,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
    bufp->fullBit(oldp+343,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
    bufp->fullBit(oldp+344,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
    bufp->fullBit(oldp+345,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 1U))));
    bufp->fullBit(oldp+346,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 1U))));
    bufp->fullBit(oldp+347,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+348,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 1U) & (~ (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 1U)))))));
    bufp->fullBit(oldp+349,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+350,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 2U))));
    bufp->fullBit(oldp+351,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 2U))));
    bufp->fullBit(oldp+352,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+353,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 2U) & (~ (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+354,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+355,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 3U))));
    bufp->fullBit(oldp+356,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 3U))));
    bufp->fullBit(oldp+357,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+358,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 3U) & (~ (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 3U)))))));
    bufp->fullBit(oldp+359,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 3U)))));
    bufp->fullCData(oldp+360,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+361,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+362,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+363,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+364,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+365,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+366,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+367,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 4U))));
    bufp->fullBit(oldp+368,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 4U))));
    bufp->fullBit(oldp+369,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+370,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 4U) & (~ (0xfffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 4U)))))));
    bufp->fullBit(oldp+371,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+372,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 5U))));
    bufp->fullBit(oldp+373,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 5U))));
    bufp->fullBit(oldp+374,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+375,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 5U) & (~ (0x7ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 5U)))))));
    bufp->fullBit(oldp+376,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+377,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 6U))));
    bufp->fullBit(oldp+378,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 6U))));
    bufp->fullBit(oldp+379,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+380,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 6U) & (~ (0x3ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 6U)))))));
    bufp->fullBit(oldp+381,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+382,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 7U))));
    bufp->fullBit(oldp+383,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 7U))));
    bufp->fullBit(oldp+384,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+385,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 7U) & (~ (0x1ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+386,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 7U)))));
    bufp->fullCData(oldp+387,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+388,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+389,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+390,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+391,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+392,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+393,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+394,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 8U))));
    bufp->fullBit(oldp+395,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 8U))));
    bufp->fullBit(oldp+396,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+397,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 8U) & (~ (0xffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 8U)))))));
    bufp->fullBit(oldp+398,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+399,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 9U))));
    bufp->fullBit(oldp+400,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 9U))));
    bufp->fullBit(oldp+401,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+402,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 9U) & (~ (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 9U)))))));
    bufp->fullBit(oldp+403,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+404,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+405,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+406,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+407,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xaU) & (~ (0x3fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+408,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+409,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+410,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+411,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+412,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xbU) & (~ (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+413,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+414,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+415,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+416,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+418,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+419,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+420,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+421,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+422,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+423,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+424,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xcU) & (~ (0xfU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xcU)))))));
    bufp->fullBit(oldp+425,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+426,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+427,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+428,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+429,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xdU) & (~ (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+430,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+431,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+432,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+433,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+434,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xeU) & (~ (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xeU)))))));
    bufp->fullBit(oldp+435,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+436,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+437,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+438,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+439,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xfU) & (~ (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+440,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xfU)))));
    bufp->fullSData(oldp+441,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+442,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+443,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+444,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+445,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+446,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+447,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+448,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+449,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+450,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+452,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+453,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+454,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+455,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+456,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+457,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+458,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+459,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+460,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+461,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+462,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+463,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+464,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+465,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+466,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+467,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+468,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+469,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+470,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+471,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+472,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+473,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+474,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+475,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+476,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+477,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+478,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+479,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+480,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+481,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+482,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+483,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+484,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+485,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+486,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+487,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+488,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+489,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+490,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+491,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+492,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+493,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+494,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+495,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+496,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+497,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+498,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+499,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+500,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+501,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+502,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+503,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+504,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+505,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+506,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+507,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+508,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+509,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+510,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+511,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+512,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+513,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+514,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+515,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+516,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+517,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+518,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+519,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+520,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+521,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+522,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+523,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+524,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+525,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+526,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+527,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+528,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+529,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+530,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+531,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+532,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+533,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+534,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+535,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+536,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+537,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+538,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+539,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+540,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+541,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+542,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+543,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+544,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+545,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+546,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+547,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+548,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+549,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+550,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+551,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+552,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+553,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+554,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+555,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+556,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                    >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))));
    bufp->fullCData(oldp+557,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+558,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+559,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+560,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+561,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+562,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+563,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+564,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+566,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+567,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+568,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+569,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+570,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+571,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+572,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+573,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+574,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+575,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+576,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+577,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+578,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+579,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+581,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+582,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+583,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+584,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+585,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+586,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+587,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+588,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+589,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+590,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+591,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+592,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+593,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+594,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+595,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+596,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+597,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+598,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+599,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+600,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+601,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+602,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+603,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+604,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+605,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+606,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+607,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+608,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullIData(oldp+609,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+610,(vlSelf->top__DOT__pipelined__DOT__instr
                              [2U]),32);
    bufp->fullIData(oldp+611,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                              [1U]),32);
    bufp->fullIData(oldp+612,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                              [1U]),32);
    bufp->fullBit(oldp+613,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                            [1U]));
    bufp->fullBit(oldp+614,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
                                      | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                          >> 1U) | 
                                         ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                          & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+615,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1fU) ? 
                                   ((~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                        [1U] >> 0x1fU)) 
                                    | (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t) 
                                          >> 1U))) : 
                                   ((~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                        [1U] >> 0x1fU)) 
                                    & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t))))));
    bufp->fullBit(oldp+616,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+617,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1fU) ? 
                                   ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                     [1U] >> 0x1fU) 
                                    & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t) 
                                       >> 1U)) : ((~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t))))));
    bufp->fullBit(oldp+618,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less));
    bufp->fullBit(oldp+619,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal));
    bufp->fullBit(oldp+620,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1fU) ? 
                                   ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                     [1U] >> 0x1fU) 
                                    & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t) 
                                          >> 1U))) : 
                                   ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                     [1U] >> 0x1fU) 
                                    | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t))))));
    bufp->fullCData(oldp+621,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+622,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+623,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+624,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U]))),32);
    bufp->fullIData(oldp+625,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))),32);
    bufp->fullBit(oldp+626,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+627,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+628,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+629,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+630,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+631,((0xffffU & vlSelf->top__DOT__pipelined__DOT__rs1_data
                               [1U])),16);
    bufp->fullSData(oldp+632,((0xffffU & vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [1U])),16);
    bufp->fullBit(oldp+633,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+634,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+635,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+636,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+637,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+638,((0xfU & vlSelf->top__DOT__pipelined__DOT__rs1_data
                               [1U])),4);
    bufp->fullCData(oldp+639,((0xfU & vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [1U])),4);
    bufp->fullBit(oldp+640,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+641,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+642,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+643,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+644,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+645,((1U & vlSelf->top__DOT__pipelined__DOT__rs1_data
                             [1U])));
    bufp->fullBit(oldp+646,((1U & vlSelf->top__DOT__pipelined__DOT__rs2_data
                             [1U])));
    bufp->fullBit(oldp+647,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])))));
    bufp->fullBit(oldp+648,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] & (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])))));
    bufp->fullBit(oldp+649,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U]) & vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U]))));
    bufp->fullBit(oldp+650,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 1U))));
    bufp->fullBit(oldp+651,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 1U))));
    bufp->fullBit(oldp+652,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 1U)))));
    bufp->fullBit(oldp+653,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 1U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 1U))))));
    bufp->fullBit(oldp+654,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 1U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 1U)))));
    bufp->fullBit(oldp+655,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 2U))));
    bufp->fullBit(oldp+656,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 2U))));
    bufp->fullBit(oldp+657,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 2U)))));
    bufp->fullBit(oldp+658,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 2U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 2U))))));
    bufp->fullBit(oldp+659,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 2U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 2U)))));
    bufp->fullBit(oldp+660,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 3U))));
    bufp->fullBit(oldp+661,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 3U))));
    bufp->fullBit(oldp+662,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 3U)))));
    bufp->fullBit(oldp+663,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 3U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 3U))))));
    bufp->fullBit(oldp+664,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 3U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 3U)))));
    bufp->fullCData(oldp+665,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 4U))),4);
    bufp->fullCData(oldp+666,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 4U))),4);
    bufp->fullBit(oldp+667,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+668,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+669,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+670,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+671,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+672,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 4U))));
    bufp->fullBit(oldp+673,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 4U))));
    bufp->fullBit(oldp+674,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 4U)))));
    bufp->fullBit(oldp+675,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 4U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 4U))))));
    bufp->fullBit(oldp+676,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 4U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 4U)))));
    bufp->fullBit(oldp+677,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 5U))));
    bufp->fullBit(oldp+678,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 5U))));
    bufp->fullBit(oldp+679,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 5U)))));
    bufp->fullBit(oldp+680,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 5U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 5U))))));
    bufp->fullBit(oldp+681,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 5U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 5U)))));
    bufp->fullBit(oldp+682,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 6U))));
    bufp->fullBit(oldp+683,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 6U))));
    bufp->fullBit(oldp+684,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 6U)))));
    bufp->fullBit(oldp+685,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 6U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 6U))))));
    bufp->fullBit(oldp+686,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 6U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 6U)))));
    bufp->fullBit(oldp+687,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 7U))));
    bufp->fullBit(oldp+688,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 7U))));
    bufp->fullBit(oldp+689,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 7U)))));
    bufp->fullBit(oldp+690,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 7U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 7U))))));
    bufp->fullBit(oldp+691,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 7U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 7U)))));
    bufp->fullCData(oldp+692,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 8U))),4);
    bufp->fullCData(oldp+693,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 8U))),4);
    bufp->fullBit(oldp+694,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+695,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+696,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+697,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+698,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+699,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 8U))));
    bufp->fullBit(oldp+700,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 8U))));
    bufp->fullBit(oldp+701,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 8U)))));
    bufp->fullBit(oldp+702,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 8U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 8U))))));
    bufp->fullBit(oldp+703,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 8U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 8U)))));
    bufp->fullBit(oldp+704,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 9U))));
    bufp->fullBit(oldp+705,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 9U))));
    bufp->fullBit(oldp+706,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 9U)))));
    bufp->fullBit(oldp+707,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 9U) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U] 
                                                    >> 9U))))));
    bufp->fullBit(oldp+708,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 9U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 9U)))));
    bufp->fullBit(oldp+709,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xaU))));
    bufp->fullBit(oldp+710,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xaU))));
    bufp->fullBit(oldp+711,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xaU)))));
    bufp->fullBit(oldp+712,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xaU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xaU))))));
    bufp->fullBit(oldp+713,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xaU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xaU)))));
    bufp->fullBit(oldp+714,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xbU))));
    bufp->fullBit(oldp+715,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xbU))));
    bufp->fullBit(oldp+716,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xbU)))));
    bufp->fullBit(oldp+717,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xbU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xbU))))));
    bufp->fullBit(oldp+718,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xbU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xbU)))));
    bufp->fullCData(oldp+719,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xcU))),4);
    bufp->fullCData(oldp+720,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xcU))),4);
    bufp->fullBit(oldp+721,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+722,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+723,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+724,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+725,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+726,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xcU))));
    bufp->fullBit(oldp+727,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xcU))));
    bufp->fullBit(oldp+728,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xcU)))));
    bufp->fullBit(oldp+729,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xcU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xcU))))));
    bufp->fullBit(oldp+730,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xcU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xcU)))));
    bufp->fullBit(oldp+731,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xdU))));
    bufp->fullBit(oldp+732,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xdU))));
    bufp->fullBit(oldp+733,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xdU)))));
    bufp->fullBit(oldp+734,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xdU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xdU))))));
    bufp->fullBit(oldp+735,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xdU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xdU)))));
    bufp->fullBit(oldp+736,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xeU))));
    bufp->fullBit(oldp+737,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xeU))));
    bufp->fullBit(oldp+738,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xeU)))));
    bufp->fullBit(oldp+739,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xeU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xeU))))));
    bufp->fullBit(oldp+740,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xeU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xeU)))));
    bufp->fullBit(oldp+741,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0xfU))));
    bufp->fullBit(oldp+742,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0xfU))));
    bufp->fullBit(oldp+743,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0xfU)))));
    bufp->fullBit(oldp+744,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0xfU) & 
                                   (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0xfU))))));
    bufp->fullBit(oldp+745,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xfU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xfU)))));
    bufp->fullSData(oldp+746,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                               [1U] >> 0x10U)),16);
    bufp->fullSData(oldp+747,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [1U] >> 0x10U)),16);
    bufp->fullBit(oldp+748,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+749,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+750,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+751,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+752,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+753,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x10U))),4);
    bufp->fullCData(oldp+754,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0x10U))),4);
    bufp->fullBit(oldp+755,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+756,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+757,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+758,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+759,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+760,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x10U))));
    bufp->fullBit(oldp+761,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x10U))));
    bufp->fullBit(oldp+762,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x10U)))));
    bufp->fullBit(oldp+763,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x10U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x10U))))));
    bufp->fullBit(oldp+764,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x10U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x10U)))));
    bufp->fullBit(oldp+765,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x11U))));
    bufp->fullBit(oldp+766,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x11U))));
    bufp->fullBit(oldp+767,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x11U)))));
    bufp->fullBit(oldp+768,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x11U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x11U))))));
    bufp->fullBit(oldp+769,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x11U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x11U)))));
    bufp->fullBit(oldp+770,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x12U))));
    bufp->fullBit(oldp+771,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x12U))));
    bufp->fullBit(oldp+772,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x12U)))));
    bufp->fullBit(oldp+773,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x12U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x12U))))));
    bufp->fullBit(oldp+774,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x12U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x12U)))));
    bufp->fullBit(oldp+775,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x13U))));
    bufp->fullBit(oldp+776,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x13U))));
    bufp->fullBit(oldp+777,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x13U)))));
    bufp->fullBit(oldp+778,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x13U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x13U))))));
    bufp->fullBit(oldp+779,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x13U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x13U)))));
    bufp->fullCData(oldp+780,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x14U))),4);
    bufp->fullCData(oldp+781,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0x14U))),4);
    bufp->fullBit(oldp+782,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+783,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+784,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+785,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+786,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+787,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x14U))));
    bufp->fullBit(oldp+788,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x14U))));
    bufp->fullBit(oldp+789,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x14U)))));
    bufp->fullBit(oldp+790,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x14U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x14U))))));
    bufp->fullBit(oldp+791,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x14U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x14U)))));
    bufp->fullBit(oldp+792,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x15U))));
    bufp->fullBit(oldp+793,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x15U))));
    bufp->fullBit(oldp+794,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x15U)))));
    bufp->fullBit(oldp+795,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x15U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x15U))))));
    bufp->fullBit(oldp+796,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x15U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x15U)))));
    bufp->fullBit(oldp+797,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x16U))));
    bufp->fullBit(oldp+798,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x16U))));
    bufp->fullBit(oldp+799,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x16U)))));
    bufp->fullBit(oldp+800,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x16U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x16U))))));
    bufp->fullBit(oldp+801,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x16U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x16U)))));
    bufp->fullBit(oldp+802,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x17U))));
    bufp->fullBit(oldp+803,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x17U))));
    bufp->fullBit(oldp+804,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x17U)))));
    bufp->fullBit(oldp+805,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x17U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x17U))))));
    bufp->fullBit(oldp+806,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x17U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x17U)))));
    bufp->fullCData(oldp+807,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x18U))),4);
    bufp->fullCData(oldp+808,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U] >> 0x18U))),4);
    bufp->fullBit(oldp+809,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+810,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+811,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+812,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+813,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+814,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x18U))));
    bufp->fullBit(oldp+815,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x18U))));
    bufp->fullBit(oldp+816,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x18U)))));
    bufp->fullBit(oldp+817,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x18U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x18U))))));
    bufp->fullBit(oldp+818,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x18U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x18U)))));
    bufp->fullBit(oldp+819,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x19U))));
    bufp->fullBit(oldp+820,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x19U))));
    bufp->fullBit(oldp+821,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x19U)))));
    bufp->fullBit(oldp+822,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x19U) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x19U))))));
    bufp->fullBit(oldp+823,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x19U)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x19U)))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x1aU))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x1aU))));
    bufp->fullBit(oldp+826,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1aU)))));
    bufp->fullBit(oldp+827,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1aU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1aU))))));
    bufp->fullBit(oldp+828,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1aU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1aU)))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x1bU))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x1bU))));
    bufp->fullBit(oldp+831,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1bU)))));
    bufp->fullBit(oldp+832,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1bU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1bU))))));
    bufp->fullBit(oldp+833,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1bU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1bU)))));
    bufp->fullCData(oldp+834,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                               [1U] >> 0x1cU)),4);
    bufp->fullCData(oldp+835,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [1U] >> 0x1cU)),4);
    bufp->fullBit(oldp+836,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+837,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+838,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+839,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+840,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+841,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x1cU))));
    bufp->fullBit(oldp+842,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x1cU))));
    bufp->fullBit(oldp+843,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1cU)))));
    bufp->fullBit(oldp+844,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1cU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1cU))))));
    bufp->fullBit(oldp+845,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1cU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+846,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x1dU))));
    bufp->fullBit(oldp+847,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x1dU))));
    bufp->fullBit(oldp+848,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1dU)))));
    bufp->fullBit(oldp+849,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1dU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1dU))))));
    bufp->fullBit(oldp+850,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1dU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+851,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                   [1U] >> 0x1eU))));
    bufp->fullBit(oldp+852,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                   [1U] >> 0x1eU))));
    bufp->fullBit(oldp+853,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1eU)))));
    bufp->fullBit(oldp+854,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1eU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1eU))))));
    bufp->fullBit(oldp+855,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1eU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+856,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                             [1U] >> 0x1fU)));
    bufp->fullBit(oldp+857,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                             [1U] >> 0x1fU)));
    bufp->fullBit(oldp+858,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U]) >> 0x1fU)))));
    bufp->fullBit(oldp+859,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                    [1U] >> 0x1fU) 
                                   & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1fU))))));
    bufp->fullBit(oldp+860,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1fU)) 
                                   & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+861,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+862,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+863,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+864,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+865,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+866,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                             [1U])))),16);
    bufp->fullSData(oldp+867,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])))),16);
    bufp->fullBit(oldp+868,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+869,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+870,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+871,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+872,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+873,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])))),4);
    bufp->fullCData(oldp+874,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])))),4);
    bufp->fullBit(oldp+875,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+876,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+877,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+878,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+879,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+880,((1U & ((IData)(1U) + (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])))));
    bufp->fullBit(oldp+881,((1U & ((IData)(1U) + (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                  [1U])))));
    bufp->fullBit(oldp+882,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) ^ 
                                      ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])))))));
    bufp->fullBit(oldp+883,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U])))))));
    bufp->fullBit(oldp+884,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U]))) & 
                                   ((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U]))))));
    bufp->fullBit(oldp+885,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 1U))));
    bufp->fullBit(oldp+886,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 1U))));
    bufp->fullBit(oldp+887,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+888,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 1U) 
                                   & (~ (7U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+889,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 1U)))));
    bufp->fullBit(oldp+890,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 2U))));
    bufp->fullBit(oldp+891,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 2U))));
    bufp->fullBit(oldp+892,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+893,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 2U) 
                                   & (~ (3U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+894,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 2U)))));
    bufp->fullBit(oldp+895,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 3U))));
    bufp->fullBit(oldp+896,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 3U))));
    bufp->fullBit(oldp+897,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+898,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 3U) 
                                   & (~ (1U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+899,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 3U)))));
    bufp->fullCData(oldp+900,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 4U))),4);
    bufp->fullCData(oldp+901,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 4U))),4);
    bufp->fullBit(oldp+902,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+903,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+904,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+905,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+906,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+907,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 4U))));
    bufp->fullBit(oldp+908,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 4U))));
    bufp->fullBit(oldp+909,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+910,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 4U) 
                                   & (~ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+911,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 4U)))));
    bufp->fullBit(oldp+912,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 5U))));
    bufp->fullBit(oldp+913,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 5U))));
    bufp->fullBit(oldp+914,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+915,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 5U) 
                                   & (~ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+916,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 5U)))));
    bufp->fullBit(oldp+917,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 6U))));
    bufp->fullBit(oldp+918,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 6U))));
    bufp->fullBit(oldp+919,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+920,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 6U) 
                                   & (~ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+921,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 6U)))));
    bufp->fullBit(oldp+922,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 7U))));
    bufp->fullBit(oldp+923,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 7U))));
    bufp->fullBit(oldp+924,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+925,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 7U) 
                                   & (~ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                     [1U])) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+926,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 7U)))));
    bufp->fullCData(oldp+927,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 8U))),4);
    bufp->fullCData(oldp+928,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 8U))),4);
    bufp->fullBit(oldp+929,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+930,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+931,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+932,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+933,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+934,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 8U))));
    bufp->fullBit(oldp+935,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 8U))));
    bufp->fullBit(oldp+936,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+937,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 8U) 
                                   & (~ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+938,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 8U)))));
    bufp->fullBit(oldp+939,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 9U))));
    bufp->fullBit(oldp+940,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 9U))));
    bufp->fullBit(oldp+941,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+942,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 9U) 
                                   & (~ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+943,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 9U)))));
    bufp->fullBit(oldp+944,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+945,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+946,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+947,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xaU) 
                                   & (~ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+948,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xaU)))));
    bufp->fullBit(oldp+949,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+950,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+951,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+952,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xbU) 
                                   & (~ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+953,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xbU)))));
    bufp->fullCData(oldp+954,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xcU))),4);
    bufp->fullCData(oldp+955,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0xcU))),4);
    bufp->fullBit(oldp+956,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+957,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+958,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+959,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+960,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+961,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+962,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+963,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+964,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xcU) 
                                   & (~ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+965,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xcU)))));
    bufp->fullBit(oldp+966,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+967,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+968,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+969,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xdU) 
                                   & (~ (7U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+970,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xdU)))));
    bufp->fullBit(oldp+971,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+972,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+973,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+974,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xeU) 
                                   & (~ (3U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+975,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xeU)))));
    bufp->fullBit(oldp+976,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+977,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+978,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+979,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0xfU) 
                                   & (~ (1U & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+980,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xfU)))));
    bufp->fullSData(oldp+981,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+982,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+983,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+984,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+985,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+986,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+987,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+988,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x10U))),4);
    bufp->fullCData(oldp+989,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x10U))),4);
    bufp->fullBit(oldp+990,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+991,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+992,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+993,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+994,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+995,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+996,((1U & (((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+997,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) ^ 
                                       ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U]))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+998,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x10U) 
                                   & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0x10U))))));
    bufp->fullBit(oldp+999,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x10U)) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0x10U)))));
    bufp->fullBit(oldp+1000,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x11U))));
    bufp->fullBit(oldp+1001,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x11U))));
    bufp->fullBit(oldp+1002,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x11U)))));
    bufp->fullBit(oldp+1003,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x11U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x11U))))));
    bufp->fullBit(oldp+1004,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x11U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x11U)))));
    bufp->fullBit(oldp+1005,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x12U))));
    bufp->fullBit(oldp+1006,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x12U))));
    bufp->fullBit(oldp+1007,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x12U)))));
    bufp->fullBit(oldp+1008,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x12U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x12U))))));
    bufp->fullBit(oldp+1009,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x12U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x12U)))));
    bufp->fullBit(oldp+1010,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x13U))));
    bufp->fullBit(oldp+1011,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x13U))));
    bufp->fullBit(oldp+1012,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x13U)))));
    bufp->fullBit(oldp+1013,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x13U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x13U))))));
    bufp->fullBit(oldp+1014,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x13U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x13U)))));
    bufp->fullCData(oldp+1015,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1016,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U])) 
                                        >> 0x14U))),4);
    bufp->fullBit(oldp+1017,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1018,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1019,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1020,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1021,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1022,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x14U))));
    bufp->fullBit(oldp+1023,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x14U))));
    bufp->fullBit(oldp+1024,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+1025,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x14U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x14U))))));
    bufp->fullBit(oldp+1026,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x14U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x14U)))));
    bufp->fullBit(oldp+1027,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x15U))));
    bufp->fullBit(oldp+1028,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x15U))));
    bufp->fullBit(oldp+1029,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x15U)))));
    bufp->fullBit(oldp+1030,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x15U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x15U))))));
    bufp->fullBit(oldp+1031,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x15U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x15U)))));
    bufp->fullBit(oldp+1032,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x16U))));
    bufp->fullBit(oldp+1033,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x16U))));
    bufp->fullBit(oldp+1034,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x16U)))));
    bufp->fullBit(oldp+1035,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x16U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x16U))))));
    bufp->fullBit(oldp+1036,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x16U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x16U)))));
    bufp->fullBit(oldp+1037,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x17U))));
    bufp->fullBit(oldp+1038,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x17U))));
    bufp->fullBit(oldp+1039,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+1040,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x17U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x17U))))));
    bufp->fullBit(oldp+1041,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x17U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x17U)))));
    bufp->fullCData(oldp+1042,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x18U))),4);
    bufp->fullCData(oldp+1043,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U])) 
                                        >> 0x18U))),4);
    bufp->fullBit(oldp+1044,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1045,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1046,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1047,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1048,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1049,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x18U))));
    bufp->fullBit(oldp+1050,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x18U))));
    bufp->fullBit(oldp+1051,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x18U)))));
    bufp->fullBit(oldp+1052,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x18U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x18U))))));
    bufp->fullBit(oldp+1053,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x18U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x18U)))));
    bufp->fullBit(oldp+1054,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x19U))));
    bufp->fullBit(oldp+1055,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x19U))));
    bufp->fullBit(oldp+1056,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+1057,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x19U) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x19U))))));
    bufp->fullBit(oldp+1058,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x19U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x19U)))));
    bufp->fullBit(oldp+1059,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x1aU))));
    bufp->fullBit(oldp+1060,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x1aU))));
    bufp->fullBit(oldp+1061,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1aU)))));
    bufp->fullBit(oldp+1062,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1aU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1aU))))));
    bufp->fullBit(oldp+1063,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1aU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1aU)))));
    bufp->fullBit(oldp+1064,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x1bU))));
    bufp->fullBit(oldp+1065,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x1bU))));
    bufp->fullBit(oldp+1066,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1bU)))));
    bufp->fullBit(oldp+1067,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1bU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1bU))))));
    bufp->fullBit(oldp+1068,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1bU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1bU)))));
    bufp->fullCData(oldp+1069,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                [1U])) 
                                >> 0x1cU)),4);
    bufp->fullCData(oldp+1070,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                [1U])) 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1071,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1072,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1073,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1074,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1075,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1076,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x1cU))));
    bufp->fullBit(oldp+1077,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x1cU))));
    bufp->fullBit(oldp+1078,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1cU)))));
    bufp->fullBit(oldp+1079,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1cU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1cU))))));
    bufp->fullBit(oldp+1080,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1cU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1cU)))));
    bufp->fullBit(oldp+1081,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x1dU))));
    bufp->fullBit(oldp+1082,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x1dU))));
    bufp->fullBit(oldp+1083,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1dU)))));
    bufp->fullBit(oldp+1084,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1dU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1dU))))));
    bufp->fullBit(oldp+1085,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1dU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1dU)))));
    bufp->fullBit(oldp+1086,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U])) >> 0x1eU))));
    bufp->fullBit(oldp+1087,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U])) >> 0x1eU))));
    bufp->fullBit(oldp+1088,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1089,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1eU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1eU))))));
    bufp->fullBit(oldp+1090,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1eU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1eU)))));
    bufp->fullBit(oldp+1091,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1092,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1093,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U]))) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1094,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])) >> 0x1fU) 
                                    & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1fU))))));
    bufp->fullBit(oldp+1095,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1fU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1fU)))));
    bufp->fullBit(oldp+1096,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                     >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                  >> 1U))))));
    bufp->fullCData(oldp+1097,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+1098,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+1099,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+1100,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+1101,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+1102,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+1103,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+1104,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1105,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1106,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1107,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1108,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1109,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1110,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1111,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1112,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1113,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1114,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1115,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1116,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1117,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1118,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1119,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1120,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1121,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1122,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1123,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1124,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+1125,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+1126,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+1127,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+1128,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+1129,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1130,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1131,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1132,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1133,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1134,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1135,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1136,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1137,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1138,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1139,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1140,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1141,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1142,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1143,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1144,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1145,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1146,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1147,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1148,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullIData(oldp+1149,(vlSelf->top__DOT__pipelined__DOT__instr
                               [1U]),32);
    bufp->fullBit(oldp+1150,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o));
    bufp->fullBit(oldp+1151,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o));
    bufp->fullBit(oldp+1152,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o));
    bufp->fullBit(oldp+1153,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o));
    bufp->fullBit(oldp+1154,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o));
    bufp->fullBit(oldp+1155,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o));
    bufp->fullBit(oldp+1156,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o));
    bufp->fullCData(oldp+1157,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o),4);
    bufp->fullCData(oldp+1158,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o),3);
    bufp->fullCData(oldp+1159,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
    bufp->fullCData(oldp+1160,((7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                      [1U] >> 0xcU))),3);
    bufp->fullBit(oldp+1161,(vlSelf->top__DOT__pipelined__DOT__enable
                             [1U]));
    bufp->fullIData(oldp+1162,(vlSelf->top__DOT__pipelined__DOT__pc
                               [1U]),32);
    bufp->fullIData(oldp+1163,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                               [0U]),32);
    bufp->fullIData(oldp+1164,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [0U]),32);
    bufp->fullBit(oldp+1165,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                             [0U]));
    bufp->fullCData(oldp+1166,(vlSelf->top__DOT__pipelined__DOT__alu_op
                               [0U]),4);
    bufp->fullBit(oldp+1167,(vlSelf->top__DOT__pipelined__DOT__op_a_sel
                             [0U]));
    bufp->fullBit(oldp+1168,(vlSelf->top__DOT__pipelined__DOT__op_b_sel
                             [0U]));
    bufp->fullBit(oldp+1169,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                             [0U]));
    bufp->fullCData(oldp+1170,(vlSelf->top__DOT__pipelined__DOT__mem_op
                               [0U]),3);
    bufp->fullBit(oldp+1171,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                             [0U]));
    bufp->fullBit(oldp+1172,(vlSelf->top__DOT__pipelined__DOT__is_load
                             [0U]));
    bufp->fullCData(oldp+1173,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                               [0U]),2);
    bufp->fullBit(oldp+1174,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                             [0U]));
    bufp->fullIData(oldp+1175,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o),32);
    bufp->fullIData(oldp+1176,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o),32);
    bufp->fullIData(oldp+1177,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o),32);
    bufp->fullIData(oldp+1178,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+1179,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o));
    bufp->fullCData(oldp+1180,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o),4);
    bufp->fullBit(oldp+1181,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o));
    bufp->fullBit(oldp+1182,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o));
    bufp->fullBit(oldp+1183,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o));
    bufp->fullCData(oldp+1184,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o),3);
    bufp->fullBit(oldp+1185,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o));
    bufp->fullBit(oldp+1186,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o));
    bufp->fullCData(oldp+1187,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o),2);
    bufp->fullBit(oldp+1188,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o));
    bufp->fullBit(oldp+1189,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                             [1U]));
    bufp->fullBit(oldp+1190,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                             [2U]));
    bufp->fullBit(oldp+1191,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                             [3U]));
    bufp->fullCData(oldp+1192,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [2U] >> 7U))),5);
    bufp->fullCData(oldp+1193,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [3U] >> 7U))),5);
    bufp->fullCData(oldp+1194,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [4U] >> 7U))),5);
    bufp->fullCData(oldp+1195,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [1U] >> 0xfU))),5);
    bufp->fullCData(oldp+1196,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [1U] >> 0x14U))),5);
    bufp->fullBit(oldp+1197,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o));
    bufp->fullBit(oldp+1198,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o));
    bufp->fullBit(oldp+1199,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o));
    bufp->fullBit(oldp+1200,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o));
    bufp->fullBit(oldp+1201,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                               [3U] & (0U != (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [4U] 
                                                 >> 7U)))) 
                              & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [4U] >> 7U)) 
                                  == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [1U] 
                                               >> 0xfU))) 
                                 | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [4U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0x14U))) 
                                    & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                    [0U])))));
    bufp->fullBit(oldp+1202,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                               [2U] & (0U != (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [3U] 
                                                 >> 7U)))) 
                              & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [3U] >> 7U)) 
                                  == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [1U] 
                                               >> 0xfU))) 
                                 | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [3U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0x14U))) 
                                    & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                    [0U])))));
    bufp->fullBit(oldp+1203,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                               [1U] & (0U != (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [2U] 
                                                 >> 7U)))) 
                              & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [2U] >> 7U)) 
                                  == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [1U] 
                                               >> 0xfU))) 
                                 | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [2U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0x14U))) 
                                    & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                    [0U])))));
    bufp->fullBit(oldp+1204,((((0x1bU == (0x1fU & (
                                                   vlSelf->top__DOT__pipelined__DOT__instr
                                                   [1U] 
                                                   >> 2U))) 
                               | (0x19U == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 2U)))) 
                              | (0x18U == (0x1fU & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 2U))))));
    bufp->fullBit(oldp+1205,((((0x1bU == (0x1fU & (
                                                   vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U] 
                                                   >> 2U))) 
                               | (0x19U == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [2U] >> 2U)))) 
                              | (0x18U == (0x1fU & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr
                                            [2U] >> 2U))))));
    bufp->fullBit(oldp+1206,(vlSelf->top__DOT__pipelined__DOT__enable
                             [0U]));
    bufp->fullIData(oldp+1207,(vlSelf->top__DOT__pipelined__DOT__instr
                               [0U]),32);
    bufp->fullIData(oldp+1208,(vlSelf->top__DOT__pipelined__DOT__pc
                               [0U]),32);
    bufp->fullIData(oldp+1209,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o),32);
    bufp->fullIData(oldp+1210,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o),32);
    bufp->fullIData(oldp+1211,(vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory
                               [(0xfffU & (vlSelf->top__DOT__pipelined__DOT__pc
                                           [0U] >> 2U))]),32);
    bufp->fullBit(oldp+1212,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                             [2U]));
    bufp->fullIData(oldp+1213,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                               [2U]),32);
    bufp->fullCData(oldp+1214,(vlSelf->top__DOT__pipelined__DOT__mem_op
                               [2U]),3);
    bufp->fullIData(oldp+1215,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1),32);
    bufp->fullIData(oldp+1216,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2),32);
    bufp->fullCData(oldp+1217,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask),4);
    bufp->fullBit(oldp+1218,(vlSelf->top__DOT__pipelined__DOT__enable
                             [2U]));
    bufp->fullIData(oldp+1219,(vlSelf->top__DOT__pipelined__DOT__pc
                               [2U]),32);
    bufp->fullCData(oldp+1220,(vlSelf->top__DOT__pipelined__DOT__mem_op
                               [1U]),3);
    bufp->fullBit(oldp+1221,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                             [1U]));
    bufp->fullBit(oldp+1222,(vlSelf->top__DOT__pipelined__DOT__is_load
                             [1U]));
    bufp->fullCData(oldp+1223,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                               [1U]),2);
    bufp->fullIData(oldp+1224,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o),32);
    bufp->fullIData(oldp+1225,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o),32);
    bufp->fullIData(oldp+1226,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+1227,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o));
    bufp->fullCData(oldp+1228,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o),3);
    bufp->fullBit(oldp+1229,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o));
    bufp->fullBit(oldp+1230,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o));
    bufp->fullCData(oldp+1231,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+1232,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                          [1U] >> 0xfU))]),32);
    bufp->fullIData(oldp+1233,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                          [1U] >> 0x14U))]),32);
    bufp->fullIData(oldp+1234,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[0]),32);
    bufp->fullIData(oldp+1235,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[1]),32);
    bufp->fullIData(oldp+1236,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[2]),32);
    bufp->fullIData(oldp+1237,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[3]),32);
    bufp->fullIData(oldp+1238,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[4]),32);
    bufp->fullIData(oldp+1239,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[5]),32);
    bufp->fullIData(oldp+1240,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[6]),32);
    bufp->fullIData(oldp+1241,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[7]),32);
    bufp->fullIData(oldp+1242,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[8]),32);
    bufp->fullIData(oldp+1243,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[9]),32);
    bufp->fullIData(oldp+1244,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[10]),32);
    bufp->fullIData(oldp+1245,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[11]),32);
    bufp->fullIData(oldp+1246,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[12]),32);
    bufp->fullIData(oldp+1247,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[13]),32);
    bufp->fullIData(oldp+1248,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[14]),32);
    bufp->fullIData(oldp+1249,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[15]),32);
    bufp->fullIData(oldp+1250,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[16]),32);
    bufp->fullIData(oldp+1251,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[17]),32);
    bufp->fullIData(oldp+1252,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[18]),32);
    bufp->fullIData(oldp+1253,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[19]),32);
    bufp->fullIData(oldp+1254,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[20]),32);
    bufp->fullIData(oldp+1255,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[21]),32);
    bufp->fullIData(oldp+1256,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[22]),32);
    bufp->fullIData(oldp+1257,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[23]),32);
    bufp->fullIData(oldp+1258,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[24]),32);
    bufp->fullIData(oldp+1259,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[25]),32);
    bufp->fullIData(oldp+1260,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[26]),32);
    bufp->fullIData(oldp+1261,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[27]),32);
    bufp->fullIData(oldp+1262,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[28]),32);
    bufp->fullIData(oldp+1263,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[29]),32);
    bufp->fullIData(oldp+1264,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[30]),32);
    bufp->fullIData(oldp+1265,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[31]),32);
    bufp->fullBit(oldp+1266,(vlSelf->top__DOT__pipelined__DOT__enable
                             [3U]));
    bufp->fullIData(oldp+1267,(vlSelf->top__DOT__pipelined__DOT__instr
                               [3U]),32);
    bufp->fullIData(oldp+1268,(vlSelf->top__DOT__pipelined__DOT__pc
                               [3U]),32);
    bufp->fullBit(oldp+1269,(vlSelf->top__DOT__pipelined__DOT__is_load
                             [2U]));
    bufp->fullCData(oldp+1270,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                               [2U]),2);
    bufp->fullIData(oldp+1271,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o),32);
    bufp->fullIData(oldp+1272,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o),32);
    bufp->fullBit(oldp+1273,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o));
    bufp->fullBit(oldp+1274,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o));
    bufp->fullBit(oldp+1275,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o));
    bufp->fullIData(oldp+1276,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o),32);
    bufp->fullCData(oldp+1277,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+1278,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+1279,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+1280,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+1281,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+1282,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+1283,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+1284,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+1285,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+1286,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+1287,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+1288,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+1289,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+1290,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+1291,(vlSelf->clk_i));
    bufp->fullBit(oldp+1292,(vlSelf->rst_ni));
    bufp->fullIData(oldp+1293,(vlSelf->top__DOT__pipelined__DOT__ld_data[0]),32);
    bufp->fullIData(oldp+1294,(vlSelf->top__DOT__pipelined__DOT__ld_data[1]),32);
    bufp->fullIData(oldp+1295,(((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__mem_op
                                           [2U] >> 2U)) 
                                       & (~ vlSelf->top__DOT__pipelined__DOT__mem_wren
                                          [2U]))) ? 
                                ((0U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                  [2U]) ? ((((0x80U 
                                              & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                              ? 0xffffffU
                                              : 0U) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                  : ((1U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                      [2U]) ? ((((0x8000U 
                                                  & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                                  ? 0xffffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                      : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                 : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->fullIData(oldp+1296,(vlSelf->top__DOT__pipelined__DOT__ld_data
                               [0U]),32);
    bufp->fullIData(oldp+1297,(0U),32);
    bufp->fullIData(oldp+1298,(1U),32);
    bufp->fullIData(oldp+1299,(2U),32);
    bufp->fullIData(oldp+1300,(3U),32);
    bufp->fullIData(oldp+1301,(4U),32);
}
