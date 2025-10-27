#ifndef __COMMON_TEST_MATCHERS_HPP__
#define __COMMON_TEST_MATCHERS_HPP__

#include <gmock/gmock.h>

#include <chi_tlm/chi_credit_extension.h>
#include <chi_tlm/chi_tlm_extension.h>

namespace
{

MATCHER_P(IsOfPhaseType, phase, "")
{
    return arg == phase;
}

MATCHER_P(IsChiCreditExtensionWithChannel, channel, "")
{
    const chi::ChiCreditExtension* message = arg.template get_extension<chi::ChiCreditExtension>();
    return message && (channel == message->channel);
}

MATCHER_P(IsChiExtensionWithChannel, channel, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    return message && (channel == message->channel);
}

MATCHER_P(IsChiReqMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::REQ == message->channel;
    const auto is_opcode_match = opcode == message->req_fields.opcode;
    return is_channel_match && is_opcode_match;
}

MATCHER_P(IsChiWdatMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::WDAT == message->channel;
    const auto is_opcode_match = opcode == message->dat_fields.opcode;
    return is_channel_match && is_opcode_match;
}

MATCHER_P(IsChiSrspMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::SRSP == message->channel;
    const auto is_opcode_match = opcode == message->rsp_fields.opcode;
    return is_channel_match && is_opcode_match;
}

MATCHER_P(IsChiSnpMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::SNP == message->channel;
    const auto is_opcode_match = opcode == message->snp_fields.opcode;
    return is_channel_match && is_opcode_match;
}

MATCHER_P(IsChiRdatMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::RDAT == message->channel;
    const auto is_opcode_match = opcode == message->dat_fields.opcode;
    return is_channel_match && is_opcode_match;
}

MATCHER_P(IsChiCrspMessageWithOpcode, opcode, "")
{
    const chi::ChiExtension* message = arg.template get_extension<chi::ChiExtension>();
    if (!message)
    {
        return false;
    }

    const auto is_channel_match = chi::ChiChannel::CRSP == message->channel;
    const auto is_opcode_match = opcode == message->rsp_fields.opcode;
    return is_channel_match && is_opcode_match;
}

}  // namespace

#endif
