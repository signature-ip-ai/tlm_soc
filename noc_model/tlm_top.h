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

#include <memory>
#include <systemc>
#include <tlm_utils/simple_target_socket.h>
#include <tlm_utils/simple_initiator_socket.h>

struct RnIfxAdapter;
struct SnIfxAdapter;
struct ProgIfxAdapter;
struct QpIfxAdapter;
struct ClkResetIfx;
struct Vsig_topology_top;
struct VerilatedVcdSc;

SC_MODULE(tlm_top)
{
public:
    SC_HAS_PROCESS(tlm_top);
    tlm_top(sc_core::sc_module_name name);
    ~tlm_top();

private:
    std::shared_ptr<RnIfxAdapter> cl0_p1_rn_ifx_adapter;
    std::shared_ptr<SnIfxAdapter> cl0_p3_sn_ifx_adapter;
    std::shared_ptr<ProgIfxAdapter> prog_ifx_adapter;
    std::shared_ptr<QpIfxAdapter> qp_ifx_adapter;
    std::shared_ptr<ClkResetIfx> clk_reset_ifx;
    std::shared_ptr<Vsig_topology_top> topology_ca_top;

public:
    tlm_utils::simple_target_socket<RnIfxAdapter>& cl0_p1_rn_target_socket;
    tlm_utils::simple_initiator_socket<SnIfxAdapter>& cl0_p3_sn_initiator_socket;

    void enable_trace();

private:
    VerilatedVcdSc* target_waveform_;
    bool trace_enabled_;
};
