// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsig_topology_top__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vsig_topology_top::Vsig_topology_top(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vsig_topology_top__Syms(contextp(), name(), this)}
    , cl0_ic_clk{vlSymsp->TOP.cl0_ic_clk}
    , cl0_rstb_ic_clk{vlSymsp->TOP.cl0_rstb_ic_clk}
    , cl0_cc_intfrx_clk{vlSymsp->TOP.cl0_cc_intfrx_clk}
    , cl0_cc_rstb_intfrx_clk{vlSymsp->TOP.cl0_cc_rstb_intfrx_clk}
    , cl0_p1_intfrx_clk{vlSymsp->TOP.cl0_p1_intfrx_clk}
    , cl0_p1_rstb_intfrx_clk{vlSymsp->TOP.cl0_p1_rstb_intfrx_clk}
    , cl0_p1_TX_LINKACTIVEREQ{vlSymsp->TOP.cl0_p1_TX_LINKACTIVEREQ}
    , cl0_p1_TX_LINKACTIVEACK{vlSymsp->TOP.cl0_p1_TX_LINKACTIVEACK}
    , cl0_p1_RX_REQFLITPEND{vlSymsp->TOP.cl0_p1_RX_REQFLITPEND}
    , cl0_p1_RX_REQFLITV{vlSymsp->TOP.cl0_p1_RX_REQFLITV}
    , cl0_p1_RX_REQLCRDV{vlSymsp->TOP.cl0_p1_RX_REQLCRDV}
    , cl0_p1_RX_RSPFLITPEND{vlSymsp->TOP.cl0_p1_RX_RSPFLITPEND}
    , cl0_p1_RX_RSPFLITV{vlSymsp->TOP.cl0_p1_RX_RSPFLITV}
    , cl0_p1_RX_RSPLCRDV{vlSymsp->TOP.cl0_p1_RX_RSPLCRDV}
    , cl0_p1_RX_DATFLITPEND{vlSymsp->TOP.cl0_p1_RX_DATFLITPEND}
    , cl0_p1_RX_DATFLITV{vlSymsp->TOP.cl0_p1_RX_DATFLITV}
    , cl0_p1_RX_DATLCRDV{vlSymsp->TOP.cl0_p1_RX_DATLCRDV}
    , cl0_p1_RX_LINKACTIVEREQ{vlSymsp->TOP.cl0_p1_RX_LINKACTIVEREQ}
    , cl0_p1_RX_LINKACTIVEACK{vlSymsp->TOP.cl0_p1_RX_LINKACTIVEACK}
    , cl0_p1_TX_SNPFLITPEND{vlSymsp->TOP.cl0_p1_TX_SNPFLITPEND}
    , cl0_p1_TX_SNPFLITV{vlSymsp->TOP.cl0_p1_TX_SNPFLITV}
    , cl0_p1_TX_SNPLCRDV{vlSymsp->TOP.cl0_p1_TX_SNPLCRDV}
    , cl0_p1_TX_RSPFLITPEND{vlSymsp->TOP.cl0_p1_TX_RSPFLITPEND}
    , cl0_p1_TX_RSPFLITV{vlSymsp->TOP.cl0_p1_TX_RSPFLITV}
    , cl0_p1_TX_RSPLCRDV{vlSymsp->TOP.cl0_p1_TX_RSPLCRDV}
    , cl0_p1_TX_DATFLITPEND{vlSymsp->TOP.cl0_p1_TX_DATFLITPEND}
    , cl0_p1_TX_DATFLITV{vlSymsp->TOP.cl0_p1_TX_DATFLITV}
    , cl0_p1_TX_DATLCRDV{vlSymsp->TOP.cl0_p1_TX_DATLCRDV}
    , cl0_p1_TXSACTIVE{vlSymsp->TOP.cl0_p1_TXSACTIVE}
    , cl0_p1_RXSACTIVE{vlSymsp->TOP.cl0_p1_RXSACTIVE}
    , cl0_p1_SYSCOREQ{vlSymsp->TOP.cl0_p1_SYSCOREQ}
    , cl0_p1_SYSCOACK{vlSymsp->TOP.cl0_p1_SYSCOACK}
    , cl0_p3_intfrx_clk{vlSymsp->TOP.cl0_p3_intfrx_clk}
    , cl0_p3_rstb_intfrx_clk{vlSymsp->TOP.cl0_p3_rstb_intfrx_clk}
    , cl0_p3_RX_LINKACTIVEREQ{vlSymsp->TOP.cl0_p3_RX_LINKACTIVEREQ}
    , cl0_p3_RX_LINKACTIVEACK{vlSymsp->TOP.cl0_p3_RX_LINKACTIVEACK}
    , cl0_p3_RX_RSPFLITPEND{vlSymsp->TOP.cl0_p3_RX_RSPFLITPEND}
    , cl0_p3_RX_RSPFLITV{vlSymsp->TOP.cl0_p3_RX_RSPFLITV}
    , cl0_p3_RX_RSPLCRDV{vlSymsp->TOP.cl0_p3_RX_RSPLCRDV}
    , cl0_p3_RX_DATFLITPEND{vlSymsp->TOP.cl0_p3_RX_DATFLITPEND}
    , cl0_p3_RX_DATFLITV{vlSymsp->TOP.cl0_p3_RX_DATFLITV}
    , cl0_p3_RX_DATLCRDV{vlSymsp->TOP.cl0_p3_RX_DATLCRDV}
    , cl0_p3_TX_LINKACTIVEREQ{vlSymsp->TOP.cl0_p3_TX_LINKACTIVEREQ}
    , cl0_p3_TX_LINKACTIVEACK{vlSymsp->TOP.cl0_p3_TX_LINKACTIVEACK}
    , cl0_p3_TX_REQFLITPEND{vlSymsp->TOP.cl0_p3_TX_REQFLITPEND}
    , cl0_p3_TX_REQFLITV{vlSymsp->TOP.cl0_p3_TX_REQFLITV}
    , cl0_p3_TX_REQLCRDV{vlSymsp->TOP.cl0_p3_TX_REQLCRDV}
    , cl0_p3_TX_DATFLITPEND{vlSymsp->TOP.cl0_p3_TX_DATFLITPEND}
    , cl0_p3_TX_DATFLITV{vlSymsp->TOP.cl0_p3_TX_DATFLITV}
    , cl0_p3_TX_DATLCRDV{vlSymsp->TOP.cl0_p3_TX_DATLCRDV}
    , cl0_p3_TXSACTIVE{vlSymsp->TOP.cl0_p3_TXSACTIVE}
    , cl0_p3_RXSACTIVE{vlSymsp->TOP.cl0_p3_RXSACTIVE}
    , PCLK_prog{vlSymsp->TOP.PCLK_prog}
    , PRESETn_prog{vlSymsp->TOP.PRESETn_prog}
    , PSEL_prog{vlSymsp->TOP.PSEL_prog}
    , PENABLE_prog{vlSymsp->TOP.PENABLE_prog}
    , PWRITE_prog{vlSymsp->TOP.PWRITE_prog}
    , PSTRB_prog{vlSymsp->TOP.PSTRB_prog}
    , PREADY_prog{vlSymsp->TOP.PREADY_prog}
    , PSLVERR_prog{vlSymsp->TOP.PSLVERR_prog}
    , qp_clk{vlSymsp->TOP.qp_clk}
    , qp_rstb{vlSymsp->TOP.qp_rstb}
    , qreqn{vlSymsp->TOP.qreqn}
    , qacceptn{vlSymsp->TOP.qacceptn}
    , qdeny{vlSymsp->TOP.qdeny}
    , qactive{vlSymsp->TOP.qactive}
    , qin_quiescence{vlSymsp->TOP.qin_quiescence}
    , pstate{vlSymsp->TOP.pstate}
    , preq{vlSymsp->TOP.preq}
    , paccept{vlSymsp->TOP.paccept}
    , pdeny{vlSymsp->TOP.pdeny}
    , pactive{vlSymsp->TOP.pactive}
    , PADDR_prog{vlSymsp->TOP.PADDR_prog}
    , PWDATA_prog{vlSymsp->TOP.PWDATA_prog}
    , PRDATA_prog{vlSymsp->TOP.PRDATA_prog}
    , cl0_p1_RX_REQFLIT{vlSymsp->TOP.cl0_p1_RX_REQFLIT}
    , cl0_p1_RX_RSPFLIT{vlSymsp->TOP.cl0_p1_RX_RSPFLIT}
    , cl0_p1_RX_DATFLIT{vlSymsp->TOP.cl0_p1_RX_DATFLIT}
    , cl0_p1_TX_SNPFLIT{vlSymsp->TOP.cl0_p1_TX_SNPFLIT}
    , cl0_p1_TX_RSPFLIT{vlSymsp->TOP.cl0_p1_TX_RSPFLIT}
    , cl0_p1_TX_DATFLIT{vlSymsp->TOP.cl0_p1_TX_DATFLIT}
    , cl0_p3_RX_RSPFLIT{vlSymsp->TOP.cl0_p3_RX_RSPFLIT}
    , cl0_p3_RX_DATFLIT{vlSymsp->TOP.cl0_p3_RX_DATFLIT}
    , cl0_p3_TX_REQFLIT{vlSymsp->TOP.cl0_p3_TX_REQFLIT}
    , cl0_p3_TX_DATFLIT{vlSymsp->TOP.cl0_p3_TX_DATFLIT}
    , __PVT__sig_topology_top{vlSymsp->TOP.__PVT__sig_topology_top}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__sig_cnoc_csr_top_config_pkg{vlSymsp->TOP.__PVT__sig_cnoc_csr_top_config_pkg}
    , __PVT__sig_cnoc_pkg{vlSymsp->TOP.__PVT__sig_cnoc_pkg}
    , __PVT__sig_chi_pkg{vlSymsp->TOP.__PVT__sig_chi_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << cl0_ic_clk;
    sensitive << cl0_rstb_ic_clk;
    sensitive << cl0_cc_intfrx_clk;
    sensitive << cl0_cc_rstb_intfrx_clk;
    sensitive << cl0_p1_intfrx_clk;
    sensitive << cl0_p1_rstb_intfrx_clk;
    sensitive << cl0_p1_TX_LINKACTIVEACK;
    sensitive << cl0_p1_RX_REQFLITPEND;
    sensitive << cl0_p1_RX_REQFLITV;
    sensitive << cl0_p1_RX_RSPFLITPEND;
    sensitive << cl0_p1_RX_RSPFLITV;
    sensitive << cl0_p1_RX_DATFLITPEND;
    sensitive << cl0_p1_RX_DATFLITV;
    sensitive << cl0_p1_RX_LINKACTIVEREQ;
    sensitive << cl0_p1_TX_SNPLCRDV;
    sensitive << cl0_p1_TX_RSPLCRDV;
    sensitive << cl0_p1_TX_DATLCRDV;
    sensitive << cl0_p1_RXSACTIVE;
    sensitive << cl0_p1_SYSCOREQ;
    sensitive << cl0_p3_intfrx_clk;
    sensitive << cl0_p3_rstb_intfrx_clk;
    sensitive << cl0_p3_RX_LINKACTIVEREQ;
    sensitive << cl0_p3_RX_RSPFLITPEND;
    sensitive << cl0_p3_RX_RSPFLITV;
    sensitive << cl0_p3_RX_DATFLITPEND;
    sensitive << cl0_p3_RX_DATFLITV;
    sensitive << cl0_p3_TX_LINKACTIVEACK;
    sensitive << cl0_p3_TX_REQLCRDV;
    sensitive << cl0_p3_TX_DATLCRDV;
    sensitive << cl0_p3_RXSACTIVE;
    sensitive << PCLK_prog;
    sensitive << PRESETn_prog;
    sensitive << PSEL_prog;
    sensitive << PENABLE_prog;
    sensitive << PWRITE_prog;
    sensitive << PSTRB_prog;
    sensitive << qp_clk;
    sensitive << qp_rstb;
    sensitive << qreqn;
    sensitive << pstate;
    sensitive << preq;
    sensitive << PADDR_prog;
    sensitive << PWDATA_prog;
    sensitive << cl0_p1_RX_REQFLIT;
    sensitive << cl0_p1_RX_RSPFLIT;
    sensitive << cl0_p1_RX_DATFLIT;
    sensitive << cl0_p3_RX_RSPFLIT;
    sensitive << cl0_p3_RX_DATFLIT;

}

//============================================================
// Destructor

Vsig_topology_top::~Vsig_topology_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsig_topology_top___024root___eval_debug_assertions(Vsig_topology_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsig_topology_top___024root___eval_static(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_initial(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_settle(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval(Vsig_topology_top___024root* vlSelf);

void Vsig_topology_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsig_topology_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsig_topology_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsig_topology_top___024root___eval_static(&(vlSymsp->TOP));
        Vsig_topology_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsig_topology_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsig_topology_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsig_topology_top::eventsPending() { return false; }

uint64_t Vsig_topology_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vsig_topology_top___024root___eval_final(Vsig_topology_top___024root* vlSelf);

VL_ATTR_COLD void Vsig_topology_top::final() {
    Vsig_topology_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsig_topology_top::hierName() const { return vlSymsp->name(); }
const char* Vsig_topology_top::modelName() const { return "Vsig_topology_top"; }
unsigned Vsig_topology_top::threads() const { return 1; }
void Vsig_topology_top::prepareClone() const { contextp()->prepareClone(); }
void Vsig_topology_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsig_topology_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsig_topology_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsig_topology_top___024root__trace_init_top(Vsig_topology_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsig_topology_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsig_topology_top___024root*>(voidSelf);
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsig_topology_top___024root__trace_decl_types(tracep);
    Vsig_topology_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsig_topology_top___024root__trace_register(Vsig_topology_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsig_topology_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vsig_topology_top::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsig_topology_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsig_topology_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
