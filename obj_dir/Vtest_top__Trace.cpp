// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest_top* t = (Vtest_top*)userthis;
    Vtest_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtest_top::traceChgThis(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest_top::traceChgThis__2(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
        vcdp->chgBit(c+9,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
        vcdp->chgBus(c+17,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    }
}

void Vtest_top::traceChgThis__3(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
        vcdp->chgBus(c+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        vcdp->chgBus(c+41,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
        vcdp->chgBus(c+49,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0xfU)) : 0U)),5);
        vcdp->chgBus(c+57,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x14U))
                             : 0U)),5);
        vcdp->chgBit(c+65,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        vcdp->chgBit(c+73,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        vcdp->chgBit(c+81,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        vcdp->chgBus(c+89,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 7U)) : 0U)),5);
        vcdp->chgBit(c+97,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        vcdp->chgBit(c+105,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        vcdp->chgBus(c+113,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        vcdp->chgBus(c+114,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        vcdp->chgBus(c+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        vcdp->chgBus(c+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        vcdp->chgBus(c+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        vcdp->chgBus(c+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        vcdp->chgBus(c+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        vcdp->chgBus(c+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        vcdp->chgBus(c+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        vcdp->chgBus(c+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        vcdp->chgBus(c+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        vcdp->chgBus(c+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        vcdp->chgBus(c+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        vcdp->chgBus(c+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        vcdp->chgBus(c+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        vcdp->chgBus(c+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        vcdp->chgBus(c+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        vcdp->chgBus(c+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        vcdp->chgBus(c+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        vcdp->chgBus(c+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        vcdp->chgBus(c+133,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        vcdp->chgBus(c+134,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        vcdp->chgBus(c+135,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        vcdp->chgBus(c+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        vcdp->chgBus(c+137,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        vcdp->chgBus(c+138,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        vcdp->chgBus(c+139,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        vcdp->chgBus(c+140,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        vcdp->chgBus(c+141,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        vcdp->chgBus(c+142,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        vcdp->chgBus(c+143,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        vcdp->chgBus(c+144,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    }
}

void Vtest_top::traceChgThis__4(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                              ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                         == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                        & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                       ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                       : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                           ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                          [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                           : 0U)))),32);
        vcdp->chgBus(c+377,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                              : 0U)),32);
        vcdp->chgBus(c+385,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                  ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                             == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                            & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                           ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                           : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                               ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                              [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                               : 0U)))
                              : 0U)),32);
    }
}

void Vtest_top::traceChgThis__5(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        vcdp->chgBit(c+401,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        vcdp->chgBus(c+409,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        vcdp->chgBus(c+417,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        vcdp->chgBus(c+425,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        vcdp->chgBit(c+433,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        vcdp->chgBit(c+441,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        vcdp->chgBus(c+449,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        vcdp->chgBus(c+457,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        vcdp->chgBit(c+465,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        vcdp->chgBus(c+473,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        vcdp->chgBus(c+481,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        vcdp->chgBit(c+489,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        vcdp->chgBus(c+497,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        vcdp->chgBus(c+505,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        vcdp->chgBus(c+513,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        vcdp->chgBus(c+521,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
        vcdp->chgBus(c+529,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o),32);
    }
}

void Vtest_top::traceChgThis__6(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+537,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        vcdp->chgBit(c+545,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        vcdp->chgBus(c+553,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
        vcdp->chgBus(c+561,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        vcdp->chgBus(c+569,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        vcdp->chgBus(c+577,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        vcdp->chgBus(c+585,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        vcdp->chgBit(c+593,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        vcdp->chgBus(c+601,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        vcdp->chgBus(c+609,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        vcdp->chgBus(c+617,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        vcdp->chgBit(c+625,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        vcdp->chgBus(c+633,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        vcdp->chgBus(c+641,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        vcdp->chgBit(c+649,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        vcdp->chgBus(c+657,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        vcdp->chgBus(c+665,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        vcdp->chgBus(c+673,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+681,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 7U))),5);
        vcdp->chgBus(c+689,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+697,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+705,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+713,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        vcdp->chgBus(c+721,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+729,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+737,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    }
}

void Vtest_top::traceChgThis__7(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+745,(vlTOPp->rst_i));
        vcdp->chgBit(c+753,(vlTOPp->clk_i));
        vcdp->chgBus(c+761,(((IData)(vlTOPp->rst_i)
                              ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                        & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                       & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                       ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                       : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                            & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                           & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                              == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                           ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                           : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final)))),32);
        vcdp->chgBus(c+769,(((IData)(vlTOPp->rst_i)
                              ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                        & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                       & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                       ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                       : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                            & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                           & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                              == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                           ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                           : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final)))),32);
        vcdp->chgBit(c+777,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
    }
}
