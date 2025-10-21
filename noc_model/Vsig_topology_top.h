// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

class Vsig_topology_top__Syms;
class Vsig_topology_top___024root;
class VerilatedVcdSc;
class Vsig_topology_top___024unit;
class Vsig_topology_top_sig_chi_pkg;
class Vsig_topology_top_sig_cnoc_csr_top_config_pkg;
class Vsig_topology_top_sig_cnoc_pkg;
class Vsig_topology_top_sig_topology_top;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsig_topology_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &cl0_ic_clk;
    sc_core::sc_in<bool> &cl0_rstb_ic_clk;
    sc_core::sc_in<bool> &cl0_cc_intfrx_clk;
    sc_core::sc_in<bool> &cl0_cc_rstb_intfrx_clk;
    sc_core::sc_in<bool> &cl0_p1_intfrx_clk;
    sc_core::sc_in<bool> &cl0_p1_rstb_intfrx_clk;
    sc_core::sc_out<bool> &cl0_p1_TX_LINKACTIVEREQ;
    sc_core::sc_in<bool> &cl0_p1_TX_LINKACTIVEACK;
    sc_core::sc_in<bool> &cl0_p1_RX_REQFLITPEND;
    sc_core::sc_in<bool> &cl0_p1_RX_REQFLITV;
    sc_core::sc_out<bool> &cl0_p1_RX_REQLCRDV;
    sc_core::sc_in<bool> &cl0_p1_RX_RSPFLITPEND;
    sc_core::sc_in<bool> &cl0_p1_RX_RSPFLITV;
    sc_core::sc_out<bool> &cl0_p1_RX_RSPLCRDV;
    sc_core::sc_in<bool> &cl0_p1_RX_DATFLITPEND;
    sc_core::sc_in<bool> &cl0_p1_RX_DATFLITV;
    sc_core::sc_out<bool> &cl0_p1_RX_DATLCRDV;
    sc_core::sc_in<bool> &cl0_p1_RX_LINKACTIVEREQ;
    sc_core::sc_out<bool> &cl0_p1_RX_LINKACTIVEACK;
    sc_core::sc_out<bool> &cl0_p1_TX_SNPFLITPEND;
    sc_core::sc_out<bool> &cl0_p1_TX_SNPFLITV;
    sc_core::sc_in<bool> &cl0_p1_TX_SNPLCRDV;
    sc_core::sc_out<bool> &cl0_p1_TX_RSPFLITPEND;
    sc_core::sc_out<bool> &cl0_p1_TX_RSPFLITV;
    sc_core::sc_in<bool> &cl0_p1_TX_RSPLCRDV;
    sc_core::sc_out<bool> &cl0_p1_TX_DATFLITPEND;
    sc_core::sc_out<bool> &cl0_p1_TX_DATFLITV;
    sc_core::sc_in<bool> &cl0_p1_TX_DATLCRDV;
    sc_core::sc_out<bool> &cl0_p1_TXSACTIVE;
    sc_core::sc_in<bool> &cl0_p1_RXSACTIVE;
    sc_core::sc_in<bool> &cl0_p1_SYSCOREQ;
    sc_core::sc_out<bool> &cl0_p1_SYSCOACK;
    sc_core::sc_in<bool> &cl0_p3_intfrx_clk;
    sc_core::sc_in<bool> &cl0_p3_rstb_intfrx_clk;
    sc_core::sc_in<bool> &cl0_p3_RX_LINKACTIVEREQ;
    sc_core::sc_out<bool> &cl0_p3_RX_LINKACTIVEACK;
    sc_core::sc_in<bool> &cl0_p3_RX_RSPFLITPEND;
    sc_core::sc_in<bool> &cl0_p3_RX_RSPFLITV;
    sc_core::sc_out<bool> &cl0_p3_RX_RSPLCRDV;
    sc_core::sc_in<bool> &cl0_p3_RX_DATFLITPEND;
    sc_core::sc_in<bool> &cl0_p3_RX_DATFLITV;
    sc_core::sc_out<bool> &cl0_p3_RX_DATLCRDV;
    sc_core::sc_out<bool> &cl0_p3_TX_LINKACTIVEREQ;
    sc_core::sc_in<bool> &cl0_p3_TX_LINKACTIVEACK;
    sc_core::sc_out<bool> &cl0_p3_TX_REQFLITPEND;
    sc_core::sc_out<bool> &cl0_p3_TX_REQFLITV;
    sc_core::sc_in<bool> &cl0_p3_TX_REQLCRDV;
    sc_core::sc_out<bool> &cl0_p3_TX_DATFLITPEND;
    sc_core::sc_out<bool> &cl0_p3_TX_DATFLITV;
    sc_core::sc_in<bool> &cl0_p3_TX_DATLCRDV;
    sc_core::sc_out<bool> &cl0_p3_TXSACTIVE;
    sc_core::sc_in<bool> &cl0_p3_RXSACTIVE;
    sc_core::sc_in<bool> &PCLK_prog;
    sc_core::sc_in<bool> &PRESETn_prog;
    sc_core::sc_in<bool> &PSEL_prog;
    sc_core::sc_in<bool> &PENABLE_prog;
    sc_core::sc_in<bool> &PWRITE_prog;
    sc_core::sc_in<uint32_t> &PSTRB_prog;
    sc_core::sc_out<bool> &PREADY_prog;
    sc_core::sc_out<bool> &PSLVERR_prog;
    sc_core::sc_in<bool> &qp_clk;
    sc_core::sc_in<bool> &qp_rstb;
    sc_core::sc_in<bool> &qreqn;
    sc_core::sc_out<bool> &qacceptn;
    sc_core::sc_out<bool> &qdeny;
    sc_core::sc_out<bool> &qactive;
    sc_core::sc_out<bool> &qin_quiescence;
    sc_core::sc_in<bool> &pstate;
    sc_core::sc_in<bool> &preq;
    sc_core::sc_out<bool> &paccept;
    sc_core::sc_out<bool> &pdeny;
    sc_core::sc_out<bool> &pactive;
    sc_core::sc_in<uint32_t> &PADDR_prog;
    sc_core::sc_in<uint32_t> &PWDATA_prog;
    sc_core::sc_out<uint32_t> &PRDATA_prog;
    sc_core::sc_in<sc_dt::sc_bv<151> > &cl0_p1_RX_REQFLIT;
    sc_core::sc_in<sc_dt::sc_bv<73> > &cl0_p1_RX_RSPFLIT;
    sc_core::sc_in<sc_dt::sc_bv<680> > &cl0_p1_RX_DATFLIT;
    sc_core::sc_out<sc_dt::sc_bv<108> > &cl0_p1_TX_SNPFLIT;
    sc_core::sc_out<sc_dt::sc_bv<73> > &cl0_p1_TX_RSPFLIT;
    sc_core::sc_out<sc_dt::sc_bv<680> > &cl0_p1_TX_DATFLIT;
    sc_core::sc_in<sc_dt::sc_bv<73> > &cl0_p3_RX_RSPFLIT;
    sc_core::sc_in<sc_dt::sc_bv<680> > &cl0_p3_RX_DATFLIT;
    sc_core::sc_out<sc_dt::sc_bv<151> > &cl0_p3_TX_REQFLIT;
    sc_core::sc_out<sc_dt::sc_bv<680> > &cl0_p3_TX_DATFLIT;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsig_topology_top_sig_topology_top* const __PVT__sig_topology_top;
    Vsig_topology_top___024unit* const __PVT____024unit;
    Vsig_topology_top_sig_cnoc_csr_top_config_pkg* const __PVT__sig_cnoc_csr_top_config_pkg;
    Vsig_topology_top_sig_cnoc_pkg* const __PVT__sig_cnoc_pkg;
    Vsig_topology_top_sig_chi_pkg* const __PVT__sig_chi_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsig_topology_top___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vsig_topology_top);
    virtual ~Vsig_topology_top();
  private:
    VL_UNCOPYABLE(Vsig_topology_top);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
