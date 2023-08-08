// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pipelined__DOT__wb_data[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__wb_data
                               [0U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__pipelined__DOT__id_reset_n));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__pipelined__DOT__ex_reset_n));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__pipelined__DOT__mem_reset_n));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__pipelined__DOT__wb_reset_n));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__pipelined__DOT__enable[0]));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__pipelined__DOT__enable[1]));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__pipelined__DOT__enable[2]));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__pipelined__DOT__enable[3]));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__pipelined__DOT__instr[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__pipelined__DOT__instr[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__pipelined__DOT__instr[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__pipelined__DOT__instr[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__pipelined__DOT__instr[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__pipelined__DOT__pc[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__pipelined__DOT__pc[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__pipelined__DOT__pc[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__pc[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__pc[4]),32);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__pipelined__DOT__pc_enable));
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__pipelined__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__rs2_data[2]),32);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__pipelined__DOT__rd_wren[0]));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__pipelined__DOT__rd_wren[1]));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__pipelined__DOT__rd_wren[2]));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__pipelined__DOT__rd_wren[3]));
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__pipelined__DOT__ex_alu_data),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__mem_alu_data),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__pipelined__DOT__wb_alu_data),32);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__pipelined__DOT__alu_op[0]),4);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__pipelined__DOT__alu_op[1]),4);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[0]));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[1]));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[0]));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[1]));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__pipelined__DOT__mem_op[0]),3);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__pipelined__DOT__mem_op[1]),3);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__pipelined__DOT__mem_op[2]),3);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__pipelined__DOT__mem_wren[0]));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__pipelined__DOT__mem_wren[1]));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__pipelined__DOT__mem_wren[2]));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__pipelined__DOT__mem_wren[3]));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__pipelined__DOT__is_load[0]));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__pipelined__DOT__is_load[1]));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__pipelined__DOT__is_load[2]));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__pipelined__DOT__is_load[3]));
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__pipelined__DOT__wb_sel[0]),2);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__pipelined__DOT__wb_sel[1]),2);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__pipelined__DOT__wb_sel[2]),2);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__pipelined__DOT__wb_sel[3]),2);
        bufp->chgIData(oldp+59,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                                 [0U])),32);
        bufp->chgIData(oldp+60,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                                 [4U])),32);
        bufp->chgIData(oldp+61,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                  ? ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                      ? vlSelf->top__DOT__pipelined__DOT__ex_alu_data
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__pipelined__DOT__pc
                                         [0U])) : ((IData)(4U) 
                                                   + 
                                                   vlSelf->top__DOT__pipelined__DOT__pc
                                                   [0U]))),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__pipelined__DOT__imm),32);
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[0]));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[1]));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__pipelined__DOT__br_sel));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__pipelined__DOT__is_rs2[0]));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__pipelined__DOT__is_rs2[1]));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__pipelined__DOT__alu_op
                                [1U]),4);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op),4);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift),32);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt),5);
        bufp->chgBit(oldp+72,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less));
        bufp->chgBit(oldp+74,(((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                                ? (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))
                                : (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s))));
        bufp->chgBit(oldp+75,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
                                        | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                            >> 1U) 
                                           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))))));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s));
        bufp->chgBit(oldp+77,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o));
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+83,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))),32);
        bufp->chgIData(oldp+84,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))),32);
        bufp->chgBit(oldp+85,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+87,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                        | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+90,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_a)),16);
        bufp->chgSData(oldp+91,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_b)),16);
        bufp->chgBit(oldp+92,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+94,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                        | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+97,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_a)),4);
        bufp->chgCData(oldp+98,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_b)),4);
        bufp->chgBit(oldp+99,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+101,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+104,((1U & vlSelf->top__DOT__pipelined__DOT__operand_a)));
        bufp->chgBit(oldp+105,((1U & vlSelf->top__DOT__pipelined__DOT__operand_b)));
        bufp->chgBit(oldp+106,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+107,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+108,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__operand_a) 
                                      & vlSelf->top__DOT__pipelined__DOT__operand_b))));
        bufp->chgBit(oldp+109,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 1U))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 1U))));
        bufp->chgBit(oldp+111,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 1U)))));
        bufp->chgBit(oldp+112,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+113,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 1U)))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 2U))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 2U))));
        bufp->chgBit(oldp+116,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 2U)))));
        bufp->chgBit(oldp+117,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+118,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 2U)))));
        bufp->chgBit(oldp+119,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 3U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 3U))));
        bufp->chgBit(oldp+121,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 3U)))));
        bufp->chgBit(oldp+122,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+123,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 3U)))));
        bufp->chgCData(oldp+124,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 4U))),4);
        bufp->chgCData(oldp+125,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+126,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+128,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+131,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 4U))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 4U))));
        bufp->chgBit(oldp+133,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 4U)))));
        bufp->chgBit(oldp+134,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+135,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 4U)))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 5U))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 5U))));
        bufp->chgBit(oldp+138,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 5U)))));
        bufp->chgBit(oldp+139,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+140,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 5U)))));
        bufp->chgBit(oldp+141,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 6U))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 6U))));
        bufp->chgBit(oldp+143,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 6U)))));
        bufp->chgBit(oldp+144,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+145,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 6U)))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 7U))));
        bufp->chgBit(oldp+147,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 7U))));
        bufp->chgBit(oldp+148,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 7U)))));
        bufp->chgBit(oldp+149,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+150,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 7U)))));
        bufp->chgCData(oldp+151,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 8U))),4);
        bufp->chgCData(oldp+152,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+153,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+155,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+158,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 8U))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 8U))));
        bufp->chgBit(oldp+160,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 8U)))));
        bufp->chgBit(oldp+161,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+162,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 8U)))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 9U))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 9U))));
        bufp->chgBit(oldp+165,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 9U)))));
        bufp->chgBit(oldp+166,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgBit(oldp+167,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 9U)))));
        bufp->chgBit(oldp+168,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+169,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+170,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+171,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+172,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+173,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+174,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+175,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+176,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+177,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+178,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+179,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+180,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+182,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+183,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+185,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+186,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+187,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+188,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+189,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+192,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+193,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+194,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+195,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+196,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+197,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+198,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+199,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+200,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+201,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+202,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+203,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+204,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+205,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+206,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+207,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+209,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+211,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+212,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+213,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+214,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+216,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+217,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+219,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+220,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+221,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+222,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+223,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+226,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+227,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+228,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+229,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+231,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+232,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+233,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+234,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+236,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+237,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+238,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+239,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+240,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+241,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+242,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+243,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+244,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+245,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+246,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+248,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+249,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+250,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+253,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+254,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+255,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+258,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+259,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+260,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+261,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+263,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+264,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+265,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+266,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+267,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+268,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+269,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+270,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+271,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+272,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+273,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+274,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+275,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+276,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+277,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+278,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+280,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+281,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+282,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+283,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+285,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+286,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+287,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+290,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+291,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+292,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+293,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+294,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+295,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+296,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+297,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+299,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+300,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+302,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+303,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+304,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+305,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+306,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+307,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+308,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+309,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+311,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+312,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+313,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+314,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+315,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+316,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+317,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+318,(((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+319,(((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+320,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+321,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+322,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+323,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+324,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+325,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),16);
        bufp->chgSData(oldp+326,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),16);
        bufp->chgBit(oldp+327,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+328,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+329,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+330,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+331,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+332,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),4);
        bufp->chgCData(oldp+333,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),4);
        bufp->chgBit(oldp+334,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+335,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+336,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+337,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+338,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+339,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))));
        bufp->chgBit(oldp+340,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+341,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
        bufp->chgBit(oldp+342,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
        bufp->chgBit(oldp+343,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
        bufp->chgBit(oldp+344,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 1U))));
        bufp->chgBit(oldp+345,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 1U))));
        bufp->chgBit(oldp+346,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+347,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 1U) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+348,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+349,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 2U))));
        bufp->chgBit(oldp+350,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 2U))));
        bufp->chgBit(oldp+351,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+352,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 2U) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+353,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+354,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 3U))));
        bufp->chgBit(oldp+355,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 3U))));
        bufp->chgBit(oldp+356,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+357,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 3U) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+358,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 3U)))));
        bufp->chgCData(oldp+359,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+360,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+361,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+362,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+363,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+364,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+365,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+366,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 4U))));
        bufp->chgBit(oldp+367,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 4U))));
        bufp->chgBit(oldp+368,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+369,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 4U) & (~ 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+370,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+371,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 5U))));
        bufp->chgBit(oldp+372,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 5U))));
        bufp->chgBit(oldp+373,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+374,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 5U) & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+375,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+376,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 6U))));
        bufp->chgBit(oldp+377,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 6U))));
        bufp->chgBit(oldp+378,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+379,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 6U) & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+380,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+381,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 7U))));
        bufp->chgBit(oldp+382,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 7U))));
        bufp->chgBit(oldp+383,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+384,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 7U) & (~ 
                                                 (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+385,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 7U)))));
        bufp->chgCData(oldp+386,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+387,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+388,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+389,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+390,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+391,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+392,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+393,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 8U))));
        bufp->chgBit(oldp+394,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 8U))));
        bufp->chgBit(oldp+395,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+396,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 8U) & (~ 
                                                 (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+397,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+398,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 9U))));
        bufp->chgBit(oldp+399,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 9U))));
        bufp->chgBit(oldp+400,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+401,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 9U) & (~ 
                                                 (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+402,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+403,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+404,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+405,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+406,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xaU) & (~ 
                                                   (0x3fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+407,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+408,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+409,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+410,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+411,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xbU) & (~ 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+412,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+413,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+414,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+415,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+416,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+417,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+418,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+419,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+420,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+421,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+422,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+423,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xcU) & (~ 
                                                   (0xfU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+424,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+425,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+426,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+427,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+428,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xdU) & (~ 
                                                   (7U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+429,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+430,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+431,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+432,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+433,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xeU) & (~ 
                                                   (3U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+434,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+435,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+436,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+437,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+438,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xfU) & (~ 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+439,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+440,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+441,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+442,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+443,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+444,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+445,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+446,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+447,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+448,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+449,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+450,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+451,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+452,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+453,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+454,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+455,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+456,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+457,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+458,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+459,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+460,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+461,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+462,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+463,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+464,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+465,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+466,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+467,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+468,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+469,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+470,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+471,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+472,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+473,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+474,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+475,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+476,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+477,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+478,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+479,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+480,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+481,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+482,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+483,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+484,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+485,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+486,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+487,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+488,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+489,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+490,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+491,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+492,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+493,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+494,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+495,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+496,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+497,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+498,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+499,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+500,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+501,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+502,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+503,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+504,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+505,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+506,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+507,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+508,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+509,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+510,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+511,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+512,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+513,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+514,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+515,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+516,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+517,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+518,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+519,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+520,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+521,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+522,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+523,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+524,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+525,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+526,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+527,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+528,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+529,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+530,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+531,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+532,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+533,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+534,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+535,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+536,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+537,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+538,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+539,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+540,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+541,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+542,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+543,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+544,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+545,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+546,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+547,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+548,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+549,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+550,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+551,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+552,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+553,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+554,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+555,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                       >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                                 & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                    >> 1U))))));
        bufp->chgCData(oldp+556,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+557,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+558,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+559,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+560,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+561,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+562,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+563,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+564,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+565,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+566,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+567,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+568,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+569,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+570,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+571,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+572,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+573,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+574,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+575,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+576,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+577,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+578,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+579,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+580,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+581,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+582,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+583,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+584,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+585,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+586,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+587,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+588,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+589,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+590,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+591,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+592,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+593,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+594,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+595,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+596,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+597,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+598,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+599,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+600,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+601,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+602,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+603,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+604,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+605,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+606,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+607,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgIData(oldp+608,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+609,(vlSelf->top__DOT__pipelined__DOT__instr
                                 [2U]),32);
        bufp->chgIData(oldp+610,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                                 [1U]),32);
        bufp->chgIData(oldp+611,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                                 [1U]),32);
        bufp->chgBit(oldp+612,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                               [1U]));
        bufp->chgBit(oldp+613,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
                                         | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                  >> 1U))))))));
        bufp->chgBit(oldp+614,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1fU)
                                       ? ((~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U] 
                                              >> 0x1fU)) 
                                          | (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t) 
                                                >> 1U)))
                                       : ((~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U] 
                                              >> 0x1fU)) 
                                          & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t))))));
        bufp->chgBit(oldp+615,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+616,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1fU)
                                       ? ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U] >> 0x1fU) 
                                          & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t) 
                                             >> 1U))
                                       : ((~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U] 
                                              >> 0x1fU)) 
                                          & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t))))));
        bufp->chgBit(oldp+617,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less));
        bufp->chgBit(oldp+618,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal));
        bufp->chgBit(oldp+619,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1fU)
                                       ? ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U] >> 0x1fU) 
                                          & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t) 
                                                >> 1U)))
                                       : ((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U] >> 0x1fU) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t))))));
        bufp->chgCData(oldp+620,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+621,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+622,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+623,(((IData)(1U) + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U]))),32);
        bufp->chgIData(oldp+624,(((IData)(1U) + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))),32);
        bufp->chgBit(oldp+625,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+626,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+627,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+628,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+629,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+630,((0xffffU & vlSelf->top__DOT__pipelined__DOT__rs1_data
                                  [1U])),16);
        bufp->chgSData(oldp+631,((0xffffU & vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [1U])),16);
        bufp->chgBit(oldp+632,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+633,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+634,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+635,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+636,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+637,((0xfU & vlSelf->top__DOT__pipelined__DOT__rs1_data
                                  [1U])),4);
        bufp->chgCData(oldp+638,((0xfU & vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [1U])),4);
        bufp->chgBit(oldp+639,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+640,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+641,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+642,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+643,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+644,((1U & vlSelf->top__DOT__pipelined__DOT__rs1_data
                                [1U])));
        bufp->chgBit(oldp+645,((1U & vlSelf->top__DOT__pipelined__DOT__rs2_data
                                [1U])));
        bufp->chgBit(oldp+646,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                         [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U])))));
        bufp->chgBit(oldp+647,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] & (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])))));
        bufp->chgBit(oldp+648,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U]) & vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U]))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+651,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 1U)))));
        bufp->chgBit(oldp+652,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 1U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 1U))))));
        bufp->chgBit(oldp+653,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 1U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 1U)))));
        bufp->chgBit(oldp+654,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+655,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+656,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 2U)))));
        bufp->chgBit(oldp+657,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 2U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 2U))))));
        bufp->chgBit(oldp+658,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 2U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 2U)))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+660,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+661,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 3U)))));
        bufp->chgBit(oldp+662,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 3U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 3U))))));
        bufp->chgBit(oldp+663,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 3U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 3U)))));
        bufp->chgCData(oldp+664,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 4U))),4);
        bufp->chgCData(oldp+665,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 4U))),4);
        bufp->chgBit(oldp+666,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+667,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+668,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+669,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+670,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+671,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+672,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+673,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 4U)))));
        bufp->chgBit(oldp+674,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 4U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 4U))))));
        bufp->chgBit(oldp+675,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 4U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 4U)))));
        bufp->chgBit(oldp+676,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 5U))));
        bufp->chgBit(oldp+677,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 5U))));
        bufp->chgBit(oldp+678,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 5U)))));
        bufp->chgBit(oldp+679,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 5U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 5U))))));
        bufp->chgBit(oldp+680,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 5U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 5U)))));
        bufp->chgBit(oldp+681,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 6U))));
        bufp->chgBit(oldp+682,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 6U))));
        bufp->chgBit(oldp+683,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 6U)))));
        bufp->chgBit(oldp+684,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 6U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 6U))))));
        bufp->chgBit(oldp+685,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 6U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 6U)))));
        bufp->chgBit(oldp+686,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 7U))));
        bufp->chgBit(oldp+687,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 7U))));
        bufp->chgBit(oldp+688,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 7U)))));
        bufp->chgBit(oldp+689,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 7U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 7U))))));
        bufp->chgBit(oldp+690,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 7U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 7U)))));
        bufp->chgCData(oldp+691,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 8U))),4);
        bufp->chgCData(oldp+692,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 8U))),4);
        bufp->chgBit(oldp+693,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+694,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+695,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+696,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+697,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+698,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 8U))));
        bufp->chgBit(oldp+699,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 8U))));
        bufp->chgBit(oldp+700,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 8U)))));
        bufp->chgBit(oldp+701,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 8U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 8U))))));
        bufp->chgBit(oldp+702,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 8U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 8U)))));
        bufp->chgBit(oldp+703,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 9U))));
        bufp->chgBit(oldp+704,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 9U))));
        bufp->chgBit(oldp+705,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 9U)))));
        bufp->chgBit(oldp+706,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 9U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 9U))))));
        bufp->chgBit(oldp+707,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 9U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 9U)))));
        bufp->chgBit(oldp+708,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xaU))));
        bufp->chgBit(oldp+709,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xaU))));
        bufp->chgBit(oldp+710,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xaU)))));
        bufp->chgBit(oldp+711,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xaU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xaU))))));
        bufp->chgBit(oldp+712,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xaU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xaU)))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xbU))));
        bufp->chgBit(oldp+714,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xbU))));
        bufp->chgBit(oldp+715,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xbU)))));
        bufp->chgBit(oldp+716,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xbU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xbU))))));
        bufp->chgBit(oldp+717,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xbU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xbU)))));
        bufp->chgCData(oldp+718,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xcU))),4);
        bufp->chgCData(oldp+719,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 0xcU))),4);
        bufp->chgBit(oldp+720,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+721,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+722,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+723,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+724,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+725,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xcU))));
        bufp->chgBit(oldp+726,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xcU))));
        bufp->chgBit(oldp+727,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xcU)))));
        bufp->chgBit(oldp+728,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xcU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xcU))))));
        bufp->chgBit(oldp+729,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xcU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xcU)))));
        bufp->chgBit(oldp+730,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xdU))));
        bufp->chgBit(oldp+731,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xdU))));
        bufp->chgBit(oldp+732,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xdU)))));
        bufp->chgBit(oldp+733,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xdU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xdU))))));
        bufp->chgBit(oldp+734,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xdU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xdU)))));
        bufp->chgBit(oldp+735,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xeU))));
        bufp->chgBit(oldp+736,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xeU))));
        bufp->chgBit(oldp+737,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xeU)))));
        bufp->chgBit(oldp+738,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xeU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xeU))))));
        bufp->chgBit(oldp+739,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xeU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xeU)))));
        bufp->chgBit(oldp+740,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0xfU))));
        bufp->chgBit(oldp+741,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0xfU))));
        bufp->chgBit(oldp+742,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0xfU)))));
        bufp->chgBit(oldp+743,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0xfU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0xfU))))));
        bufp->chgBit(oldp+744,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0xfU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0xfU)))));
        bufp->chgSData(oldp+745,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                  [1U] >> 0x10U)),16);
        bufp->chgSData(oldp+746,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [1U] >> 0x10U)),16);
        bufp->chgBit(oldp+747,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+748,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+749,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+750,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+751,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+752,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x10U))),4);
        bufp->chgCData(oldp+753,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 0x10U))),4);
        bufp->chgBit(oldp+754,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+755,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+756,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+757,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+758,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+759,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x10U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x10U))));
        bufp->chgBit(oldp+761,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x10U)))));
        bufp->chgBit(oldp+762,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x10U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x10U))))));
        bufp->chgBit(oldp+763,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x10U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x10U)))));
        bufp->chgBit(oldp+764,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x11U))));
        bufp->chgBit(oldp+765,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x11U))));
        bufp->chgBit(oldp+766,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x11U)))));
        bufp->chgBit(oldp+767,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x11U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x11U))))));
        bufp->chgBit(oldp+768,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x11U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x11U)))));
        bufp->chgBit(oldp+769,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x12U))));
        bufp->chgBit(oldp+770,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x12U))));
        bufp->chgBit(oldp+771,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x12U)))));
        bufp->chgBit(oldp+772,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x12U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x12U))))));
        bufp->chgBit(oldp+773,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x12U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x12U)))));
        bufp->chgBit(oldp+774,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x13U))));
        bufp->chgBit(oldp+775,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x13U))));
        bufp->chgBit(oldp+776,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x13U)))));
        bufp->chgBit(oldp+777,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x13U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x13U))))));
        bufp->chgBit(oldp+778,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x13U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x13U)))));
        bufp->chgCData(oldp+779,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x14U))),4);
        bufp->chgCData(oldp+780,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 0x14U))),4);
        bufp->chgBit(oldp+781,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+782,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+783,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+784,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+785,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+786,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x14U))));
        bufp->chgBit(oldp+787,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x14U))));
        bufp->chgBit(oldp+788,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x14U)))));
        bufp->chgBit(oldp+789,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x14U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x14U))))));
        bufp->chgBit(oldp+790,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x14U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x14U)))));
        bufp->chgBit(oldp+791,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x15U))));
        bufp->chgBit(oldp+792,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x15U))));
        bufp->chgBit(oldp+793,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x15U)))));
        bufp->chgBit(oldp+794,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x15U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x15U))))));
        bufp->chgBit(oldp+795,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x15U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x15U)))));
        bufp->chgBit(oldp+796,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x16U))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x16U))));
        bufp->chgBit(oldp+798,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x16U)))));
        bufp->chgBit(oldp+799,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x16U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x16U))))));
        bufp->chgBit(oldp+800,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x16U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x16U)))));
        bufp->chgBit(oldp+801,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x17U))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x17U))));
        bufp->chgBit(oldp+803,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x17U)))));
        bufp->chgBit(oldp+804,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x17U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x17U))))));
        bufp->chgBit(oldp+805,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x17U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x17U)))));
        bufp->chgCData(oldp+806,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x18U))),4);
        bufp->chgCData(oldp+807,((0xfU & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U] >> 0x18U))),4);
        bufp->chgBit(oldp+808,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+809,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+810,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+811,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+812,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+813,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x18U))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x18U))));
        bufp->chgBit(oldp+815,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x18U)))));
        bufp->chgBit(oldp+816,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x18U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x18U))))));
        bufp->chgBit(oldp+817,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x18U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x18U)))));
        bufp->chgBit(oldp+818,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x19U))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x19U))));
        bufp->chgBit(oldp+820,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x19U)))));
        bufp->chgBit(oldp+821,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x19U) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x19U))))));
        bufp->chgBit(oldp+822,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x19U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x19U)))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x1aU))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1aU))));
        bufp->chgBit(oldp+825,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1aU)))));
        bufp->chgBit(oldp+826,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1aU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1aU))))));
        bufp->chgBit(oldp+827,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1aU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1aU)))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x1bU))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1bU))));
        bufp->chgBit(oldp+830,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1bU)))));
        bufp->chgBit(oldp+831,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1bU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1bU))))));
        bufp->chgBit(oldp+832,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1bU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1bU)))));
        bufp->chgCData(oldp+833,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                  [1U] >> 0x1cU)),4);
        bufp->chgCData(oldp+834,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [1U] >> 0x1cU)),4);
        bufp->chgBit(oldp+835,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+836,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+837,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+838,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+839,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+840,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x1cU))));
        bufp->chgBit(oldp+841,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1cU))));
        bufp->chgBit(oldp+842,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1cU)))));
        bufp->chgBit(oldp+843,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1cU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1cU))))));
        bufp->chgBit(oldp+844,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1cU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1cU)))));
        bufp->chgBit(oldp+845,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x1dU))));
        bufp->chgBit(oldp+846,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1dU))));
        bufp->chgBit(oldp+847,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1dU)))));
        bufp->chgBit(oldp+848,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1dU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1dU))))));
        bufp->chgBit(oldp+849,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1dU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1dU)))));
        bufp->chgBit(oldp+850,((1U & (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                      [1U] >> 0x1eU))));
        bufp->chgBit(oldp+851,((1U & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                      [1U] >> 0x1eU))));
        bufp->chgBit(oldp+852,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1eU)))));
        bufp->chgBit(oldp+853,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1eU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1eU))))));
        bufp->chgBit(oldp+854,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1eU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1eU)))));
        bufp->chgBit(oldp+855,((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                [1U] >> 0x1fU)));
        bufp->chgBit(oldp+856,((vlSelf->top__DOT__pipelined__DOT__rs2_data
                                [1U] >> 0x1fU)));
        bufp->chgBit(oldp+857,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] ^ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U]) >> 0x1fU)))));
        bufp->chgBit(oldp+858,((1U & ((vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U] >> 0x1fU) 
                                      & (~ (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U] >> 0x1fU))))));
        bufp->chgBit(oldp+859,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U] >> 0x1fU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__rs2_data
                                         [1U] >> 0x1fU)))));
        bufp->chgBit(oldp+860,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+861,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+862,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+863,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+864,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+865,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                [1U])))),16);
        bufp->chgSData(oldp+866,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                [1U])))),16);
        bufp->chgBit(oldp+867,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+868,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+869,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+870,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+871,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+872,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                             [1U])))),4);
        bufp->chgCData(oldp+873,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])))),4);
        bufp->chgBit(oldp+874,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+875,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+876,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+877,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+878,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+879,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                       [1U])))));
        bufp->chgBit(oldp+880,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                       [1U])))));
        bufp->chgBit(oldp+881,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                             [1U])) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])))))));
        bufp->chgBit(oldp+882,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) & 
                                      (~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])))))));
        bufp->chgBit(oldp+883,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                             [1U]))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                            [1U]))))));
        bufp->chgBit(oldp+884,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 1U))));
        bufp->chgBit(oldp+885,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 1U))));
        bufp->chgBit(oldp+886,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+887,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 1U) 
                                      & (~ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+888,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 1U)))));
        bufp->chgBit(oldp+889,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 2U))));
        bufp->chgBit(oldp+890,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 2U))));
        bufp->chgBit(oldp+891,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+892,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 2U) 
                                      & (~ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+893,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 2U)))));
        bufp->chgBit(oldp+894,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 3U))));
        bufp->chgBit(oldp+895,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 3U))));
        bufp->chgBit(oldp+896,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+897,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 3U) 
                                      & (~ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+898,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 3U)))));
        bufp->chgCData(oldp+899,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+900,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+901,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+902,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+903,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+904,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+905,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+906,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 4U))));
        bufp->chgBit(oldp+907,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 4U))));
        bufp->chgBit(oldp+908,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+909,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 4U) 
                                      & (~ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+910,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 4U)))));
        bufp->chgBit(oldp+911,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 5U))));
        bufp->chgBit(oldp+912,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 5U))));
        bufp->chgBit(oldp+913,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+914,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 5U) 
                                      & (~ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+915,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 5U)))));
        bufp->chgBit(oldp+916,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 6U))));
        bufp->chgBit(oldp+917,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 6U))));
        bufp->chgBit(oldp+918,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+919,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 6U) 
                                      & (~ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+920,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 6U)))));
        bufp->chgBit(oldp+921,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 7U))));
        bufp->chgBit(oldp+922,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 7U))));
        bufp->chgBit(oldp+923,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+924,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 7U) 
                                      & (~ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+925,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 7U)))));
        bufp->chgCData(oldp+926,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+927,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+928,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+929,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+930,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+931,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+932,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+933,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 8U))));
        bufp->chgBit(oldp+934,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 8U))));
        bufp->chgBit(oldp+935,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+936,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 8U) 
                                      & (~ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+937,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 8U)))));
        bufp->chgBit(oldp+938,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 9U))));
        bufp->chgBit(oldp+939,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 9U))));
        bufp->chgBit(oldp+940,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+941,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 9U) 
                                      & (~ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+942,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 9U)))));
        bufp->chgBit(oldp+943,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xaU))));
        bufp->chgBit(oldp+944,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xaU))));
        bufp->chgBit(oldp+945,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+946,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xaU) 
                                      & (~ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+947,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+948,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xbU))));
        bufp->chgBit(oldp+949,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xbU))));
        bufp->chgBit(oldp+950,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+951,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xbU) 
                                      & (~ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+952,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                     [1U])) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+953,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+954,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+955,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+956,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+957,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+958,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+959,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+960,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xcU))));
        bufp->chgBit(oldp+961,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xcU))));
        bufp->chgBit(oldp+962,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                    [1U])) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+963,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xcU) 
                                      & (~ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+964,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                    [1U])) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+965,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xdU))));
        bufp->chgBit(oldp+966,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xdU))));
        bufp->chgBit(oldp+967,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+968,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xdU) 
                                      & (~ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+969,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+970,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xeU))));
        bufp->chgBit(oldp+971,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xeU))));
        bufp->chgBit(oldp+972,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+973,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xeU) 
                                      & (~ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+974,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+975,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0xfU))));
        bufp->chgBit(oldp+976,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0xfU))));
        bufp->chgBit(oldp+977,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+978,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0xfU) 
                                      & (~ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                    [1U])) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+979,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+980,((((IData)(1U) + (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                  [1U])) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+981,((((IData)(1U) + (~ 
                                                  vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                  [1U])) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+982,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+983,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+984,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+985,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+986,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+987,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+988,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+989,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+990,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+991,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+992,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+993,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+994,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0x10U))));
        bufp->chgBit(oldp+995,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                          [1U])) >> 0x10U))));
        bufp->chgBit(oldp+996,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                [1U]))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+997,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x10U) 
                                      & (~ (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                [1U])) 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+998,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                              [1U])) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                             [1U])) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+999,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                          [1U])) >> 0x11U))));
        bufp->chgBit(oldp+1000,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x11U))));
        bufp->chgBit(oldp+1001,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1002,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x11U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x11U))))));
        bufp->chgBit(oldp+1003,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x11U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1004,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x12U))));
        bufp->chgBit(oldp+1005,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x12U))));
        bufp->chgBit(oldp+1006,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1007,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x12U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x12U))))));
        bufp->chgBit(oldp+1008,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x12U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1009,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x13U))));
        bufp->chgBit(oldp+1010,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x13U))));
        bufp->chgBit(oldp+1011,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1012,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x13U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x13U))))));
        bufp->chgBit(oldp+1013,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x13U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x13U)))));
        bufp->chgCData(oldp+1014,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1015,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x14U))),4);
        bufp->chgBit(oldp+1016,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1017,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1018,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1019,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1020,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1021,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x14U))));
        bufp->chgBit(oldp+1022,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x14U))));
        bufp->chgBit(oldp+1023,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1024,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x14U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x14U))))));
        bufp->chgBit(oldp+1025,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x14U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1026,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x15U))));
        bufp->chgBit(oldp+1027,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x15U))));
        bufp->chgBit(oldp+1028,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1029,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x15U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x15U))))));
        bufp->chgBit(oldp+1030,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x15U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1031,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x16U))));
        bufp->chgBit(oldp+1032,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x16U))));
        bufp->chgBit(oldp+1033,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1034,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x16U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x16U))))));
        bufp->chgBit(oldp+1035,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x16U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1036,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x17U))));
        bufp->chgBit(oldp+1037,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x17U))));
        bufp->chgBit(oldp+1038,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1039,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x17U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1040,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x17U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x17U)))));
        bufp->chgCData(oldp+1041,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1042,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x18U))),4);
        bufp->chgBit(oldp+1043,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1044,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1045,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1046,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1047,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1048,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x18U))));
        bufp->chgBit(oldp+1049,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x18U))));
        bufp->chgBit(oldp+1050,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1051,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x18U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1052,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x18U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1053,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x19U))));
        bufp->chgBit(oldp+1054,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x19U))));
        bufp->chgBit(oldp+1055,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1056,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x19U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1057,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x19U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1058,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x1aU))));
        bufp->chgBit(oldp+1059,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1aU))));
        bufp->chgBit(oldp+1060,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1061,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1aU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1062,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1aU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1063,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x1bU))));
        bufp->chgBit(oldp+1064,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1bU))));
        bufp->chgBit(oldp+1065,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1066,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1bU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1067,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1bU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1bU)))));
        bufp->chgCData(oldp+1068,((((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                   [1U])) 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1069,((((IData)(1U) + (~ 
                                                   vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                   [1U])) 
                                   >> 0x1cU)),4);
        bufp->chgBit(oldp+1070,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1071,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1072,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1073,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1074,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1075,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x1cU))));
        bufp->chgBit(oldp+1076,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1cU))));
        bufp->chgBit(oldp+1077,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1078,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1cU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1079,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1cU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1080,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x1dU))));
        bufp->chgBit(oldp+1081,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1dU))));
        bufp->chgBit(oldp+1082,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1083,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1dU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+1084,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1dU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1085,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                           [1U])) >> 0x1eU))));
        bufp->chgBit(oldp+1086,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                           [1U])) >> 0x1eU))));
        bufp->chgBit(oldp+1087,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1088,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1eU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1eU))))));
        bufp->chgBit(oldp+1089,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1eU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1090,((((IData)(1U) + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs1_data
                                                 [1U])) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1091,((((IData)(1U) + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U])) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1092,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           ^ ((IData)(1U) 
                                              + (~ 
                                                 vlSelf->top__DOT__pipelined__DOT__rs2_data
                                                 [1U]))) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1093,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                            [1U])) 
                                        >> 0x1fU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                               [1U])) 
                                           >> 0x1fU))))));
        bufp->chgBit(oldp+1094,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__rs1_data
                                               [1U])) 
                                           >> 0x1fU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__rs2_data
                                              [1U])) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1095,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                        >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                                  & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                     >> 1U))))));
        bufp->chgCData(oldp+1096,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+1097,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+1098,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+1099,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+1100,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+1101,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+1102,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+1103,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1104,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1105,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1106,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1107,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1108,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1109,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1110,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1111,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1112,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1113,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1114,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1115,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1116,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1117,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1118,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1119,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1120,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1121,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1122,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1123,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+1124,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+1125,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+1126,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+1127,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+1128,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1129,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1130,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1131,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1132,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1133,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1134,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1135,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1136,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1137,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1138,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1139,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1140,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1141,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1142,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1143,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1144,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1145,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1146,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1147,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgIData(oldp+1148,(vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U]),32);
        bufp->chgBit(oldp+1149,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o));
        bufp->chgBit(oldp+1150,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o));
        bufp->chgBit(oldp+1151,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o));
        bufp->chgBit(oldp+1152,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o));
        bufp->chgBit(oldp+1153,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o));
        bufp->chgBit(oldp+1154,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o));
        bufp->chgBit(oldp+1155,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o));
        bufp->chgCData(oldp+1156,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o),4);
        bufp->chgCData(oldp+1157,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o),3);
        bufp->chgCData(oldp+1158,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
        bufp->chgCData(oldp+1159,((7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [1U] >> 0xcU))),3);
        bufp->chgBit(oldp+1160,(vlSelf->top__DOT__pipelined__DOT__enable
                                [1U]));
        bufp->chgIData(oldp+1161,(vlSelf->top__DOT__pipelined__DOT__pc
                                  [1U]),32);
        bufp->chgIData(oldp+1162,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                                  [0U]),32);
        bufp->chgIData(oldp+1163,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [0U]),32);
        bufp->chgBit(oldp+1164,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                                [0U]));
        bufp->chgCData(oldp+1165,(vlSelf->top__DOT__pipelined__DOT__alu_op
                                  [0U]),4);
        bufp->chgBit(oldp+1166,(vlSelf->top__DOT__pipelined__DOT__op_a_sel
                                [0U]));
        bufp->chgBit(oldp+1167,(vlSelf->top__DOT__pipelined__DOT__op_b_sel
                                [0U]));
        bufp->chgBit(oldp+1168,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                                [0U]));
        bufp->chgCData(oldp+1169,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                  [0U]),3);
        bufp->chgBit(oldp+1170,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                                [0U]));
        bufp->chgBit(oldp+1171,(vlSelf->top__DOT__pipelined__DOT__is_load
                                [0U]));
        bufp->chgCData(oldp+1172,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                  [0U]),2);
        bufp->chgBit(oldp+1173,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                                [0U]));
        bufp->chgIData(oldp+1174,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o),32);
        bufp->chgIData(oldp+1175,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o),32);
        bufp->chgIData(oldp+1176,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o),32);
        bufp->chgIData(oldp+1177,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+1178,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o));
        bufp->chgCData(oldp+1179,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o),4);
        bufp->chgBit(oldp+1180,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o));
        bufp->chgBit(oldp+1181,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o));
        bufp->chgBit(oldp+1182,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o));
        bufp->chgCData(oldp+1183,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o),3);
        bufp->chgBit(oldp+1184,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o));
        bufp->chgBit(oldp+1185,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o));
        bufp->chgCData(oldp+1186,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o),2);
        bufp->chgBit(oldp+1187,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o));
        bufp->chgBit(oldp+1188,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                                [1U]));
        bufp->chgBit(oldp+1189,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                                [2U]));
        bufp->chgBit(oldp+1190,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                                [3U]));
        bufp->chgCData(oldp+1191,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [2U] >> 7U))),5);
        bufp->chgCData(oldp+1192,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [3U] >> 7U))),5);
        bufp->chgCData(oldp+1193,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [4U] >> 7U))),5);
        bufp->chgCData(oldp+1194,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 0xfU))),5);
        bufp->chgCData(oldp+1195,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 0x14U))),5);
        bufp->chgBit(oldp+1196,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o));
        bufp->chgBit(oldp+1197,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o));
        bufp->chgBit(oldp+1198,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o));
        bufp->chgBit(oldp+1199,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o));
        bufp->chgBit(oldp+1200,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                  [3U] & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [4U] 
                                                    >> 7U)))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [4U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [4U] 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0x14U))) 
                                       & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                       [0U])))));
        bufp->chgBit(oldp+1201,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                  [2U] & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [3U] 
                                                    >> 7U)))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [3U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [3U] 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0x14U))) 
                                       & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                       [0U])))));
        bufp->chgBit(oldp+1202,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                  [1U] & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 7U)))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [2U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0x14U))) 
                                       & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                       [0U])))));
        bufp->chgBit(oldp+1203,((((0x1bU == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [1U] 
                                                >> 2U))) 
                                  | (0x19U == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 2U)))) 
                                 | (0x18U == (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [1U] 
                                                 >> 2U))))));
        bufp->chgBit(oldp+1204,((((0x1bU == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [2U] 
                                                >> 2U))) 
                                  | (0x19U == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 2U)))) 
                                 | (0x18U == (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [2U] 
                                                 >> 2U))))));
        bufp->chgBit(oldp+1205,(vlSelf->top__DOT__pipelined__DOT__enable
                                [0U]));
        bufp->chgIData(oldp+1206,(vlSelf->top__DOT__pipelined__DOT__instr
                                  [0U]),32);
        bufp->chgIData(oldp+1207,(vlSelf->top__DOT__pipelined__DOT__pc
                                  [0U]),32);
        bufp->chgIData(oldp+1208,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o),32);
        bufp->chgIData(oldp+1209,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o),32);
        bufp->chgIData(oldp+1210,(vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory
                                  [(0xfffU & (vlSelf->top__DOT__pipelined__DOT__pc
                                              [0U] 
                                              >> 2U))]),32);
        bufp->chgBit(oldp+1211,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                                [2U]));
        bufp->chgIData(oldp+1212,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                                  [2U]),32);
        bufp->chgCData(oldp+1213,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                  [2U]),3);
        bufp->chgIData(oldp+1214,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1),32);
        bufp->chgIData(oldp+1215,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2),32);
        bufp->chgCData(oldp+1216,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask),4);
        bufp->chgBit(oldp+1217,(vlSelf->top__DOT__pipelined__DOT__enable
                                [2U]));
        bufp->chgIData(oldp+1218,(vlSelf->top__DOT__pipelined__DOT__pc
                                  [2U]),32);
        bufp->chgCData(oldp+1219,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                  [1U]),3);
        bufp->chgBit(oldp+1220,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                                [1U]));
        bufp->chgBit(oldp+1221,(vlSelf->top__DOT__pipelined__DOT__is_load
                                [1U]));
        bufp->chgCData(oldp+1222,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                  [1U]),2);
        bufp->chgIData(oldp+1223,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o),32);
        bufp->chgIData(oldp+1224,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o),32);
        bufp->chgIData(oldp+1225,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+1226,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o));
        bufp->chgCData(oldp+1227,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o),3);
        bufp->chgBit(oldp+1228,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o));
        bufp->chgBit(oldp+1229,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o));
        bufp->chgCData(oldp+1230,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o),2);
        bufp->chgIData(oldp+1231,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                                  [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0xfU))]),32);
        bufp->chgIData(oldp+1232,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                                  [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0x14U))]),32);
        bufp->chgIData(oldp+1233,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[0]),32);
        bufp->chgIData(oldp+1234,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[1]),32);
        bufp->chgIData(oldp+1235,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[2]),32);
        bufp->chgIData(oldp+1236,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[3]),32);
        bufp->chgIData(oldp+1237,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[4]),32);
        bufp->chgIData(oldp+1238,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[5]),32);
        bufp->chgIData(oldp+1239,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[6]),32);
        bufp->chgIData(oldp+1240,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[7]),32);
        bufp->chgIData(oldp+1241,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[8]),32);
        bufp->chgIData(oldp+1242,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[9]),32);
        bufp->chgIData(oldp+1243,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[10]),32);
        bufp->chgIData(oldp+1244,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[11]),32);
        bufp->chgIData(oldp+1245,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[12]),32);
        bufp->chgIData(oldp+1246,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[13]),32);
        bufp->chgIData(oldp+1247,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[14]),32);
        bufp->chgIData(oldp+1248,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[15]),32);
        bufp->chgIData(oldp+1249,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[16]),32);
        bufp->chgIData(oldp+1250,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[17]),32);
        bufp->chgIData(oldp+1251,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[18]),32);
        bufp->chgIData(oldp+1252,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[19]),32);
        bufp->chgIData(oldp+1253,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[20]),32);
        bufp->chgIData(oldp+1254,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[21]),32);
        bufp->chgIData(oldp+1255,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[22]),32);
        bufp->chgIData(oldp+1256,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[23]),32);
        bufp->chgIData(oldp+1257,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[24]),32);
        bufp->chgIData(oldp+1258,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[25]),32);
        bufp->chgIData(oldp+1259,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[26]),32);
        bufp->chgIData(oldp+1260,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[27]),32);
        bufp->chgIData(oldp+1261,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[28]),32);
        bufp->chgIData(oldp+1262,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[29]),32);
        bufp->chgIData(oldp+1263,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[30]),32);
        bufp->chgIData(oldp+1264,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[31]),32);
        bufp->chgBit(oldp+1265,(vlSelf->top__DOT__pipelined__DOT__enable
                                [3U]));
        bufp->chgIData(oldp+1266,(vlSelf->top__DOT__pipelined__DOT__instr
                                  [3U]),32);
        bufp->chgIData(oldp+1267,(vlSelf->top__DOT__pipelined__DOT__pc
                                  [3U]),32);
        bufp->chgBit(oldp+1268,(vlSelf->top__DOT__pipelined__DOT__is_load
                                [2U]));
        bufp->chgCData(oldp+1269,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                  [2U]),2);
        bufp->chgIData(oldp+1270,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o),32);
        bufp->chgIData(oldp+1271,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o),32);
        bufp->chgBit(oldp+1272,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o));
        bufp->chgBit(oldp+1273,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o));
        bufp->chgBit(oldp+1274,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o));
        bufp->chgIData(oldp+1275,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o),32);
        bufp->chgCData(oldp+1276,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    }
    bufp->chgIData(oldp+1277,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+1278,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+1279,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+1280,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+1281,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+1282,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+1283,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+1284,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+1285,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+1286,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+1287,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+1288,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+1289,(vlSelf->pc_debug_o),32);
    bufp->chgBit(oldp+1290,(vlSelf->clk_i));
    bufp->chgBit(oldp+1291,(vlSelf->rst_ni));
    bufp->chgIData(oldp+1292,(vlSelf->top__DOT__pipelined__DOT__ld_data[0]),32);
    bufp->chgIData(oldp+1293,(vlSelf->top__DOT__pipelined__DOT__ld_data[1]),32);
    bufp->chgIData(oldp+1294,(((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__mem_op
                                          [2U] >> 2U)) 
                                      & (~ vlSelf->top__DOT__pipelined__DOT__mem_wren
                                         [2U]))) ? 
                               ((0U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                 [2U]) ? ((((0x80U 
                                             & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
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
    bufp->chgIData(oldp+1295,(vlSelf->top__DOT__pipelined__DOT__ld_data
                              [0U]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
