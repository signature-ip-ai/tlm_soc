// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_PORT_TX_HANDSHAKE_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_PORT_TX_HANDSHAKE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cnoc_port_tx_handshake final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ send_gnt;
    CData/*0:0*/ vld_send;
    CData/*0:0*/ end_send;
    SData/*9:0*/ req_send;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cnoc_port_tx_handshake(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cnoc_port_tx_handshake();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cnoc_port_tx_handshake);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsig_topology_top_sig_cnoc_port_tx_handshake* obj);

#endif  // guard
