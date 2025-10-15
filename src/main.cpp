#include <iostream>
#include "tlm_soc/tlm_initiator.h"
#include "tlm_soc/tlm_target.h"
#include <tlm_top.h>


int sc_main(int argc, char** argv)
{
    simple_initiator initiator0{"initiator0"};
    simple_target target0{"target0"};
    tlm_top top{"top"};

    initiator0.initiator_socket.bind(top.cl0_p1_rn_target_socket);
    top.cl0_p3_sn_initiator_socket.bind(target0.target_socket);

    sc_core::sc_start(sc_core::SC_ZERO_TIME);
    top.enable_trace();

    std::cout << "Elaboration complete\n";

    sc_core::sc_start(20000, sc_core::SC_NS);

    std::cout << "Simulation complete\n";
    return 0;
}
