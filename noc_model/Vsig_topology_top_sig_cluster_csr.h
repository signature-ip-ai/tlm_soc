// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CLUSTER_CSR_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CLUSTER_CSR_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_ro_reg;
class Vsig_topology_top_rw_reg;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cluster_csr final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_rw_reg* __PVT__rw_proc_port_reg_0;
    Vsig_topology_top_ro_reg* __PVT__ro_proc_port_reg_1;
    Vsig_topology_top_rw_reg* __PVT__rw_coherency_ctlr_reg_0;
    Vsig_topology_top_rw_reg* __PVT__rw_coherency_ctlr_reg_1;
    Vsig_topology_top_ro_reg* __PVT__ro_node_port_timeout_status_reg_2;
    Vsig_topology_top_rw_reg* __PVT__rw_node_port_timeout_control_reg_3;
    Vsig_topology_top_rw_reg* __PVT__rw_qos_override_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_strobe,3,0);
    VL_IN8(__PVT__i_wr_en,0,0);
    VL_IN8(__PVT__i_rd_en,0,0);
    VL_IN8(__PVT__i_proc_port_reg_1_rx_is_inactive,0,0);
    VL_IN8(__PVT__i_proc_port_reg_1_tx_is_inactive,0,0);
    VL_IN8(__PVT__i_node_port_timeout_interrupt_vec,3,0);
    VL_IN8(__PVT__i_node_port_timeout_recovery_successful_vec,3,0);
    VL_OUT8(__PVT__o_node_port_timeout_clear_timeout_interrupt_vec,3,0);
    VL_OUT8(__PVT__o_node_port_timeout_clear_recovery_interrupt_vec,3,0);
    VL_OUT8(__PVT__o_qos_override_en_p0,0,0);
    VL_OUT8(__PVT__o_qos_override_val_p0,3,0);
    VL_OUT8(__PVT__o_qos_override_en_p1,0,0);
    VL_OUT8(__PVT__o_qos_override_val_p1,3,0);
    VL_OUT8(__PVT__o_qos_override_en_p2,0,0);
    VL_OUT8(__PVT__o_qos_override_val_p2,3,0);
    VL_OUT8(__PVT__o_qos_override_en_p3,0,0);
    VL_OUT8(__PVT__o_qos_override_val_p3,3,0);
    CData/*4:0*/ __PVT__wr_en_reg;
    CData/*4:0*/ __PVT__wr_en_reg_nxt;
    CData/*0:0*/ __Vcellinp__rw_proc_port_reg_0__i_wr_reg_en;
    CData/*0:0*/ __Vcellinp__rw_coherency_ctlr_reg_0__i_wr_reg_en;
    CData/*0:0*/ __Vcellinp__rw_coherency_ctlr_reg_1__i_wr_reg_en;
    CData/*0:0*/ __Vcellinp__rw_node_port_timeout_control_reg_3__i_wr_reg_en;
    CData/*0:0*/ __Vcellinp__rw_qos_override_reg__i_wr_reg_en;
    CData/*4:0*/ __Vdly__wr_en_reg;
    VL_IN(__PVT__i_addr,31,0);
    VL_IN(__PVT__i_wr_data,31,0);
    VL_OUT(__PVT__o_proc_port_reg_0_max_credits,31,0);
    VL_OUT(__PVT__o_coherency_ctlr_reg_0_inactive_threshold,31,0);
    VL_OUT(__PVT__o_coherency_ctlr_reg_1_b2b_resp_wait,31,0);
    VL_OUT(__PVT__o_rd_data,31,0);
    IData/*31:0*/ __PVT__o_rd_data_nxt;
    IData/*31:0*/ __PVT__o_rd_data_proc_port_reg_0;
    IData/*31:0*/ __PVT__o_rd_data_proc_port_reg_1;
    IData/*31:0*/ __PVT__o_rd_data_proc_port_timeout_status_reg_2;
    IData/*31:0*/ __PVT__i_rd_data_proc_port_reg_1;
    IData/*31:0*/ __PVT__i_rd_data_proc_port_timeout_status_reg_2;
    IData/*31:0*/ __PVT__o_rd_data_coherency_ctlr_reg_0;
    IData/*31:0*/ __PVT__o_rd_data_coherency_ctlr_reg_1;
    IData/*31:0*/ __PVT__o_rd_data_qos_override_reg;
    IData/*31:0*/ __PVT__o_rd_data_node_port_timeout_control_reg_3;
    IData/*31:0*/ __Vdly__o_rd_data;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cluster_csr(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cluster_csr();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cluster_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
