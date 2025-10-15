// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ROUTING_POLICY_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ROUTING_POLICY_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_routing_policy final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__icx_exist_i,3,0);
    VL_IN8(__PVT__tgt_x_i,3,0);
    VL_IN8(__PVT__tgt_y_i,3,0);
    VL_IN8(__PVT__my_x_i,3,0);
    VL_IN8(__PVT__my_y_i,3,0);
    VL_OUT8(__PVT__route_east_xfirst_o,0,0);
    VL_OUT8(__PVT__route_west_xfirst_o,0,0);
    VL_OUT8(__PVT__route_north_xfirst_o,0,0);
    VL_OUT8(__PVT__route_south_xfirst_o,0,0);
    VL_OUT8(__PVT__route_east_yfirst_o,0,0);
    VL_OUT8(__PVT__route_west_yfirst_o,0,0);
    VL_OUT8(__PVT__route_north_yfirst_o,0,0);
    VL_OUT8(__PVT__route_south_yfirst_o,0,0);
    CData/*0:0*/ __PVT__x_obstructed;
    CData/*0:0*/ __PVT__y_obstructed;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_routing_policy(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_routing_policy();
    VL_UNCOPYABLE(Vsig_topology_top_sig_routing_policy);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
