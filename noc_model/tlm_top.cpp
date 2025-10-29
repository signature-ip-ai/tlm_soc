/**
 * ######################################################################################
 *      Signature IP Corporation Confidential and Proprietary Information               #
 *      Copyright 2025 Signature IP Corporation                                         #
 *      All Rights Reserved.                                                            #
 *      This is UNPUBLISHED PROPRIETARY SOURCE CODE OF Signature IP Corporation         #
 *      The copyright notice above does not evidence any actual or intended publication #
 *      of such source code.                                                            #
 * ######################################################################################
 *
**/

#include "tlm_top.h"

#include "RnIfxAdapter.h"
#include "SnIfxAdapter.h"
#include "ProgIfxAdapter.h"
#include "QpIfxAdapter.h"
#include "ClkResetIfx.h"
#include "Vsig_topology_top.h"
#include "verilated_vcd_sc.h"

tlm_top::tlm_top(sc_core::sc_module_name name)
    : sc_core::sc_module(name)
    , cl0_p1_rn_ifx_adapter(std::make_shared<RnIfxAdapter>("cl0_p1_rn_ifx_adapter"))
    , cl0_p3_sn_ifx_adapter(std::make_shared<SnIfxAdapter>("cl0_p3_sn_ifx_adapter"))
    , prog_ifx_adapter(std::make_shared<ProgIfxAdapter>("prog_ifx_adapter"))
    , qp_ifx_adapter(std::make_shared<QpIfxAdapter>("qp_ifx_adapter"))
    , clk_reset_ifx(std::make_shared<ClkResetIfx>("clk_reset_ifx"))
    , topology_ca_top(std::make_shared<Vsig_topology_top>("Vsig_topology_top"))
    , cl0_p1_rn_target_socket(cl0_p1_rn_ifx_adapter->target_socket)
    , cl0_p3_sn_initiator_socket(cl0_p3_sn_ifx_adapter->initiator_socket)
    , target_waveform_(new VerilatedVcdSc)
    , trace_enabled_(false)
{
    topology_ca_top->cl0_ic_clk(clk_reset_ifx->main_clock_out);
    topology_ca_top->cl0_rstb_ic_clk(clk_reset_ifx->rstb_out);
    topology_ca_top->cl0_cc_intfrx_clk(clk_reset_ifx->main_clock_out);
    topology_ca_top->cl0_cc_rstb_intfrx_clk(clk_reset_ifx->rstb_out);

    // cl0_p1 RN interface
    cl0_p1_rn_ifx_adapter->intfrx_clk_in(clk_reset_ifx->main_clock_out);
    cl0_p1_rn_ifx_adapter->rstb_intfrx_clk_in(clk_reset_ifx->rstb_out);
    topology_ca_top->cl0_p1_intfrx_clk(cl0_p1_rn_ifx_adapter->intfrx_clk_out);
    topology_ca_top->cl0_p1_rstb_intfrx_clk(cl0_p1_rn_ifx_adapter->rstb_intfrx_clk_out);
    topology_ca_top->cl0_p1_TX_LINKACTIVEREQ(cl0_p1_rn_ifx_adapter->RX_LINKACTIVEREQ_in);
    topology_ca_top->cl0_p1_TX_LINKACTIVEACK(cl0_p1_rn_ifx_adapter->RX_LINKACTIVEACK_out);
    topology_ca_top->cl0_p1_RX_REQFLITPEND(cl0_p1_rn_ifx_adapter->TX_REQFLITPEND_out);
    topology_ca_top->cl0_p1_RX_REQFLITV(cl0_p1_rn_ifx_adapter->TX_REQFLITV_out);
    topology_ca_top->cl0_p1_RX_REQLCRDV(cl0_p1_rn_ifx_adapter->TX_REQLCRDV_in);
    topology_ca_top->cl0_p1_RX_RSPFLITPEND(cl0_p1_rn_ifx_adapter->TX_RSPFLITPEND_out);
    topology_ca_top->cl0_p1_RX_RSPFLITV(cl0_p1_rn_ifx_adapter->TX_RSPFLITV_out);
    topology_ca_top->cl0_p1_RX_RSPLCRDV(cl0_p1_rn_ifx_adapter->TX_RSPLCRDV_in);
    topology_ca_top->cl0_p1_RX_DATFLITPEND(cl0_p1_rn_ifx_adapter->TX_DATFLITPEND_out);
    topology_ca_top->cl0_p1_RX_DATFLITV(cl0_p1_rn_ifx_adapter->TX_DATFLITV_out);
    topology_ca_top->cl0_p1_RX_DATLCRDV(cl0_p1_rn_ifx_adapter->TX_DATLCRDV_in);
    topology_ca_top->cl0_p1_RX_LINKACTIVEREQ(cl0_p1_rn_ifx_adapter->TX_LINKACTIVEREQ_out);
    topology_ca_top->cl0_p1_RX_LINKACTIVEACK(cl0_p1_rn_ifx_adapter->TX_LINKACTIVEACK_in);
    topology_ca_top->cl0_p1_TX_SNPFLITPEND(cl0_p1_rn_ifx_adapter->RX_SNPFLITPEND_in);
    topology_ca_top->cl0_p1_TX_SNPFLITV(cl0_p1_rn_ifx_adapter->RX_SNPFLITV_in);
    topology_ca_top->cl0_p1_TX_SNPLCRDV(cl0_p1_rn_ifx_adapter->RX_SNPLCRDV_out);
    topology_ca_top->cl0_p1_TX_RSPFLITPEND(cl0_p1_rn_ifx_adapter->RX_RSPFLITPEND_in);
    topology_ca_top->cl0_p1_TX_RSPFLITV(cl0_p1_rn_ifx_adapter->RX_RSPFLITV_in);
    topology_ca_top->cl0_p1_TX_RSPLCRDV(cl0_p1_rn_ifx_adapter->RX_RSPLCRDV_out);
    topology_ca_top->cl0_p1_TX_DATFLITPEND(cl0_p1_rn_ifx_adapter->RX_DATFLITPEND_in);
    topology_ca_top->cl0_p1_TX_DATFLITV(cl0_p1_rn_ifx_adapter->RX_DATFLITV_in);
    topology_ca_top->cl0_p1_TX_DATLCRDV(cl0_p1_rn_ifx_adapter->RX_DATLCRDV_out);
    topology_ca_top->cl0_p1_TXSACTIVE(cl0_p1_rn_ifx_adapter->RXSACTIVE_in);
    topology_ca_top->cl0_p1_RXSACTIVE(cl0_p1_rn_ifx_adapter->TXSACTIVE_out);
    topology_ca_top->cl0_p1_SYSCOREQ(cl0_p1_rn_ifx_adapter->SYSCOREQ_out);
    topology_ca_top->cl0_p1_SYSCOACK(cl0_p1_rn_ifx_adapter->SYSCOACK_in);
    topology_ca_top->cl0_p1_RX_REQFLIT(cl0_p1_rn_ifx_adapter->TX_REQFLIT_out);
    topology_ca_top->cl0_p1_RX_RSPFLIT(cl0_p1_rn_ifx_adapter->TX_RSPFLIT_out);
    topology_ca_top->cl0_p1_RX_DATFLIT(cl0_p1_rn_ifx_adapter->TX_DATFLIT_out);
    topology_ca_top->cl0_p1_TX_SNPFLIT(cl0_p1_rn_ifx_adapter->RX_SNPFLIT_in);
    topology_ca_top->cl0_p1_TX_RSPFLIT(cl0_p1_rn_ifx_adapter->RX_RSPFLIT_in);
    topology_ca_top->cl0_p1_TX_DATFLIT(cl0_p1_rn_ifx_adapter->RX_DATFLIT_in);

    // cl0_p3 SN interface
    cl0_p3_sn_ifx_adapter->intfrx_clk_in(clk_reset_ifx->main_clock_out);
    cl0_p3_sn_ifx_adapter->rstb_intfrx_clk_in(clk_reset_ifx->rstb_out);
    topology_ca_top->cl0_p3_intfrx_clk(cl0_p3_sn_ifx_adapter->intfrx_clk_out);
    topology_ca_top->cl0_p3_rstb_intfrx_clk(cl0_p3_sn_ifx_adapter->rstb_intfrx_clk_out);
    topology_ca_top->cl0_p3_RX_LINKACTIVEREQ(cl0_p3_sn_ifx_adapter->TX_LINKACTIVEREQ_out);
    topology_ca_top->cl0_p3_RX_LINKACTIVEACK(cl0_p3_sn_ifx_adapter->TX_LINKACTIVEACK_in);
    topology_ca_top->cl0_p3_RX_RSPFLITPEND(cl0_p3_sn_ifx_adapter->TX_RSPFLITPEND_out);
    topology_ca_top->cl0_p3_RX_RSPFLITV(cl0_p3_sn_ifx_adapter->TX_RSPFLITV_out);
    topology_ca_top->cl0_p3_RX_RSPLCRDV(cl0_p3_sn_ifx_adapter->TX_RSPLCRDV_in);
    topology_ca_top->cl0_p3_RX_DATFLITPEND(cl0_p3_sn_ifx_adapter->TX_DATFLITPEND_out);
    topology_ca_top->cl0_p3_RX_DATFLITV(cl0_p3_sn_ifx_adapter->TX_DATFLITV_out);
    topology_ca_top->cl0_p3_RX_DATLCRDV(cl0_p3_sn_ifx_adapter->TX_DATLCRDV_in);
    topology_ca_top->cl0_p3_TX_LINKACTIVEREQ(cl0_p3_sn_ifx_adapter->RX_LINKACTIVEREQ_in);
    topology_ca_top->cl0_p3_TX_LINKACTIVEACK(cl0_p3_sn_ifx_adapter->RX_LINKACTIVEACK_out);
    topology_ca_top->cl0_p3_TX_REQFLITPEND(cl0_p3_sn_ifx_adapter->RX_REQFLITPEND_in);
    topology_ca_top->cl0_p3_TX_REQFLITV(cl0_p3_sn_ifx_adapter->RX_REQFLITV_in);
    topology_ca_top->cl0_p3_TX_REQLCRDV(cl0_p3_sn_ifx_adapter->RX_REQLCRDV_out);
    topology_ca_top->cl0_p3_TX_DATFLITPEND(cl0_p3_sn_ifx_adapter->RX_DATFLITPEND_in);
    topology_ca_top->cl0_p3_TX_DATFLITV(cl0_p3_sn_ifx_adapter->RX_DATFLITV_in);
    topology_ca_top->cl0_p3_TX_DATLCRDV(cl0_p3_sn_ifx_adapter->RX_DATLCRDV_out);
    topology_ca_top->cl0_p3_TXSACTIVE(cl0_p3_sn_ifx_adapter->RXSACTIVE_in);
    topology_ca_top->cl0_p3_RXSACTIVE(cl0_p3_sn_ifx_adapter->TXSACTIVE_out);
    topology_ca_top->cl0_p3_RX_RSPFLIT(cl0_p3_sn_ifx_adapter->TX_RSPFLIT_out);
    topology_ca_top->cl0_p3_RX_DATFLIT(cl0_p3_sn_ifx_adapter->TX_DATFLIT_out);
    topology_ca_top->cl0_p3_TX_REQFLIT(cl0_p3_sn_ifx_adapter->RX_REQFLIT_in);
    topology_ca_top->cl0_p3_TX_DATFLIT(cl0_p3_sn_ifx_adapter->RX_DATFLIT_in);

    prog_ifx_adapter->PCLK_prog_in(clk_reset_ifx->main_clock_out);
    prog_ifx_adapter->PRESETn_prog_in(clk_reset_ifx->rstb_out);
    topology_ca_top->PCLK_prog(prog_ifx_adapter->PCLK_prog_out);
    topology_ca_top->PRESETn_prog(prog_ifx_adapter->PRESETn_prog_out);
    topology_ca_top->PSEL_prog(prog_ifx_adapter->PSEL_prog_out);
    topology_ca_top->PENABLE_prog(prog_ifx_adapter->PENABLE_prog_out);
    topology_ca_top->PWRITE_prog(prog_ifx_adapter->PWRITE_prog_out);
    topology_ca_top->PSTRB_prog(prog_ifx_adapter->PSTRB_prog_out);
    topology_ca_top->PREADY_prog(prog_ifx_adapter->PREADY_prog_in);
    topology_ca_top->PSLVERR_prog(prog_ifx_adapter->PSLVERR_prog_in);
    topology_ca_top->PADDR_prog(prog_ifx_adapter->PADDR_prog_out);
    topology_ca_top->PWDATA_prog(prog_ifx_adapter->PWDATA_prog_out);
    topology_ca_top->PRDATA_prog(prog_ifx_adapter->PRDATA_prog_in);

    qp_ifx_adapter->qp_clk_in(clk_reset_ifx->main_clock_out);
    qp_ifx_adapter->qp_rstb_in(clk_reset_ifx->rstb_out);
    topology_ca_top->qp_clk(qp_ifx_adapter->qp_clk_out);
    topology_ca_top->qp_rstb(qp_ifx_adapter->qp_rstb_out);
    topology_ca_top->qreqn(qp_ifx_adapter->qreqn_out);
    topology_ca_top->qacceptn(qp_ifx_adapter->qacceptn_in);
    topology_ca_top->qdeny(qp_ifx_adapter->qdeny_in);
    topology_ca_top->qactive(qp_ifx_adapter->qactive_in);
    topology_ca_top->qin_quiescence(qp_ifx_adapter->qin_quiescence_in);
    topology_ca_top->pstate(qp_ifx_adapter->pstate_out);
    topology_ca_top->preq(qp_ifx_adapter->preq_out);
    topology_ca_top->paccept(qp_ifx_adapter->paccept_in);
    topology_ca_top->pdeny(qp_ifx_adapter->pdeny_in);
    topology_ca_top->pactive(qp_ifx_adapter->pactive_in);
}

tlm_top::~tlm_top()
{
    if (trace_enabled_)
    {
        target_waveform_->close();
    }

    if (target_waveform_)
    {
        delete target_waveform_;
    }
}

void tlm_top::enable_trace()
{
    Verilated::traceEverOn(true);
    topology_ca_top->trace(target_waveform_, 99);
    target_waveform_->open("topology_ca_top.vcd");
    trace_enabled_ = true;
}
