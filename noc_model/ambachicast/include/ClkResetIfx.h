#ifndef __CLK_RESET_IFX_H__
#define __CLK_RESET_IFX_H__

#include <memory>

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_target_socket.h>

namespace spdlog
{
class logger;
}  // namespace spdlog

SC_MODULE(ClkResetIfx)
{
public:
    SC_HAS_PROCESS(ClkResetIfx);
    ClkResetIfx(sc_core::sc_module_name name);

    sc_core::sc_clock main_clock_out;
    sc_core::sc_signal<bool> rstb_out;

private:
    void initialize_system();

    std::shared_ptr<spdlog::logger> logger_;
};

#endif  // __CLK_RESET_IFX_H__
