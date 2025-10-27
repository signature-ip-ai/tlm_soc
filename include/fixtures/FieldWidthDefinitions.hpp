#ifndef __FIXTURES_FIELD_WIDTH_DEFINITIONS_HPP__
#define __FIXTURES_FIELD_WIDTH_DEFINITIONS_HPP__

namespace ReqFields
{
// field 0
    static constexpr auto QOS_WIDTH = 4;

    // field 1
    static constexpr auto TGTID_WIDTH = 11;

    // field 2
    static constexpr auto SRCID_WIDTH = 11;

    // field 3
    static constexpr auto TXNID_WIDTH = 12;

    // field 4
    static constexpr auto RETURNNID_WIDTH = 11;
    static constexpr auto STASHNID_WIDTH = 11;
    static constexpr auto SLCREPHINT_WIDTH = 7;

    // field 5
    static constexpr auto STASHNIDVALID_WIDTH = 1;
    static constexpr auto ENDIAN_WIDTH = 1;
    static constexpr auto DEEP_WIDTH = 1;

    // field 6
    static constexpr auto RETURNTXNID_WIDTH = 12;
    static constexpr auto STASHLPID_WIDTH = 5;
    static constexpr auto STASHLPIDVALID_WIDTH = 1;

    // field 7
    static constexpr auto OPCODE_WIDTH = 7;

    // field 8
    static constexpr auto DATA_SIZE_WIDTH = 3;

    // field 9
    static constexpr auto ADDR_WIDTH = 52;

    // field 10
    static constexpr auto NS_WIDTH = 1;

    // field 11
    static constexpr auto LIKELYSHARED_WIDTH = 1;

    // field 12
    static constexpr auto ALLOWRETRY_WIDTH = 1;

    // field 13
    static constexpr auto ORDER_WIDTH = 2;

    // field 14
    static constexpr auto PCRDTYPE_WIDTH = 4;

    // field 15
    static constexpr auto MEMATTR_WIDTH = 4;

    // field 16
    static constexpr auto SNPATTR_WIDTH = 1;
    static constexpr auto DODWT_WIDTH = 1;

    // field 17
    static constexpr auto LPID_WIDTH = 5;
    static constexpr auto PGROUPID_WIDTH = 8;
    static constexpr auto STASHGROUPID_WIDTH = 8;
    static constexpr auto TAGGROUPID_WIDTH = 8;

    // field 18
    static constexpr auto EXCL_WIDTH = 1;
    static constexpr auto SNOOPME_WIDTH = 1;

    // field 19
    static constexpr auto EXPCOMPACK_WIDTH = 1;

    // field 20
    static constexpr auto TAGOP_WIDTH = 2;

    // field 21
    static constexpr auto TRACETAG_WIDTH = 1;

    // Total flit width
    static constexpr auto FLIT_WIDTH = 151;
}  // namespace ReqFields

namespace DatFields
{
// field 0: qos[3:0]
    static constexpr auto QOS_WIDTH = 4;

    // field 1: tgtid[10:0]
    static constexpr auto TGTID_WIDTH = 11;

    // field 2: srcid[10:0]
    static constexpr auto SRCID_WIDTH = 11;

    // field 3: txnid[11:0]
    static constexpr auto TXNID_WIDTH = 12;

    // field 4: homenid[10:0]
    static constexpr auto HOMENID_WIDTH = 11;

    // field 5: opcode[3:0]
    static constexpr auto OPCODE_WIDTH = 4;

    // field 6: resperr[1:0]
    static constexpr auto RESPERR_WIDTH = 2;

    // field 7: resp[2:0]
    static constexpr auto RESP_WIDTH = 3;

    // field 8: datasource[3:0] (union field)
    static constexpr auto DATASOURCE_WIDTH = 4;
    static constexpr auto DATAPULL_WIDTH = 3;
    static constexpr auto FWDSTATE_WIDTH = 3;

    // field 9: cbusy[2:0]
    static constexpr auto CBUSY_WIDTH = 3;

    // field 10: dbid[11:0]
    static constexpr auto DBID_WIDTH = 12;

    // field 11: ccid[1:0]
    static constexpr auto CCID_WIDTH = 2;

    // field 12: dataid[1:0]
    static constexpr auto DATAID_WIDTH = 2;

    // field 13: tagop[1:0]
    static constexpr auto TAGOP_WIDTH = 2;

    // field 14: tag[15:0]
    static constexpr auto TAG_WIDTH = 16;

    // field 15: tu[3:0]
    static constexpr auto TU_WIDTH = 4;

    // field 16: tracetag[0:0]
    static constexpr auto TRACETAG_WIDTH = 1;

    // field 17: be[63:0]
    static constexpr auto BE_WIDTH = 64;

    // field 18: data[511:0]
    static constexpr auto DATA_WIDTH = 512;

    // Total flit width
    static constexpr auto FLIT_WIDTH = 680;
}  // namespace DatFields

namespace RspFields
{
// field 0
    static constexpr auto QOS_WIDTH = 4;

    // field 1
    static constexpr auto TGTID_WIDTH = 11;

    // field 2
    static constexpr auto SRCID_WIDTH = 11;

    // field 3
    static constexpr auto TXNID_WIDTH = 12;

    // field 4
    static constexpr auto OPCODE_WIDTH = 5;

    // field 5
    static constexpr auto RESPERR_WIDTH = 2;

    // field 6
    static constexpr auto RESP_WIDTH = 3;

    // field 7
    static constexpr auto DATAPULL_WIDTH = 3;
    static constexpr auto FWDSTATE_WIDTH = 3;

    // field 8
    static constexpr auto CBUSY_WIDTH = 3;

    // field 9
    static constexpr auto DBID_WIDTH = 12;
    static constexpr auto TAGGROUPID_WIDTH = 8;
    static constexpr auto STASHGROUPID_WIDTH = 8;
    static constexpr auto PGROUPID_WIDTH = 8;

    // field 10
    static constexpr auto PCRDTYPE_WIDTH = 4;

    // field 11
    static constexpr auto TAGOP_WIDTH = 2;

    // field 12
    static constexpr auto TRACETAG_WIDTH = 1;

    // Total flit width
    static constexpr auto FLIT_WIDTH = 73;
}  // namespace RspFields

namespace SnpFields
{
// field 0 - qos
    static constexpr auto QOS_WIDTH = 4;

    // field 1 - srcid
    static constexpr auto SRCID_WIDTH = 11;

    // field 2 - txnid
    static constexpr auto TXNID_WIDTH = 12;

    // field 3 - fwdnid
    static constexpr auto FWDNID_WIDTH = 11;

    // field 4 - union field_4 (fwdtxnid/vmidext/stash fields)
    static constexpr auto FWDTXNID_WIDTH = 12;
    static constexpr auto VMIDEXT_WIDTH = 8;
    static constexpr auto STASHLPID_WIDTH = 5;
    static constexpr auto STASHLPIDVALID_WIDTH = 1;

    // field 5 - opcode
    static constexpr auto OPCODE_WIDTH = 5;

    // field 6 - addr
    static constexpr auto ADDR_WIDTH = 49;

    // field 7 - ns
    static constexpr auto NS_WIDTH = 1;

    // field 8 - donotgotosd
    static constexpr auto DONOTGOTOSD_WIDTH = 1;

    // field 9 - rettosrc
    static constexpr auto RETTOSRC_WIDTH = 1;

    // field 10 - tracetag
    static constexpr auto TRACETAG_WIDTH = 1;

    // Total flit width
    static constexpr auto FLIT_WIDTH = 108;
}  // namespace SnpFields

#endif  // __FIXTURES_FIELD_WIDTH_DEFINITIONS_HPP__
