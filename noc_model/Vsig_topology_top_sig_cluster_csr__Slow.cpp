// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cluster_csr.h"

void Vsig_topology_top_sig_cluster_csr___ctor_var_reset(Vsig_topology_top_sig_cluster_csr* vlSelf);

Vsig_topology_top_sig_cluster_csr::Vsig_topology_top_sig_cluster_csr(Vsig_topology_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsig_topology_top_sig_cluster_csr___ctor_var_reset(this);
}

void Vsig_topology_top_sig_cluster_csr::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsig_topology_top_sig_cluster_csr::~Vsig_topology_top_sig_cluster_csr() {
}
