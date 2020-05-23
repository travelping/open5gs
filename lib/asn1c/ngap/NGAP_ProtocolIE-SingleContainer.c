/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "NGAP_ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using NGAP_AMFPagingTarget_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_BroadcastCancelledAreaList_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_BroadcastCompletedAreaList_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_Cause_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_CellIDListForRestart_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_CPTransportLayerInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_DRBStatusDL_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_DRBStatusUL_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_GlobalRANNodeID_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_GNB_ID_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_LastVisitedCellInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_N3IWF_ID_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_NgENB_ID_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_NGRAN_CGI_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_OverloadResponse_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_PWSFailedCellIDList_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_QosCharacteristics_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_ResetType_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_SONInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_TargetID_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_UEIdentityIndexValue_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_UE_NGAP_IDs_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_UEPagingIdentity_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_UPTransportLayerInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_UserLocationInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NGAP_WarningAreaList_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_AMFPagingTarget_ExtIEs_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_AMFPagingTarget_ExtIEs_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P1_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_BroadcastCancelledAreaList_ExtIEs_5,
	3,	/* Elements count */
	&asn_SPC_NGAP_BroadcastCancelledAreaList_ExtIEs_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P2_tags_3[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_BroadcastCompletedAreaList_ExtIEs_9,
	3,	/* Elements count */
	&asn_SPC_NGAP_BroadcastCompletedAreaList_ExtIEs_specs_9	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P3_tags_4[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_Cause_ExtIEs_13,
	3,	/* Elements count */
	&asn_SPC_NGAP_Cause_ExtIEs_specs_13	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P4_tags_5[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_CellIDListForRestart_ExtIEs_17,
	3,	/* Elements count */
	&asn_SPC_NGAP_CellIDListForRestart_ExtIEs_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P5_tags_6[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_CPTransportLayerInformation_ExtIEs_21,
	3,	/* Elements count */
	&asn_SPC_NGAP_CPTransportLayerInformation_ExtIEs_specs_21	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P6_tags_7[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_DRBStatusDL_ExtIEs_25,
	3,	/* Elements count */
	&asn_SPC_NGAP_DRBStatusDL_ExtIEs_specs_25	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P7_tags_8[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_DRBStatusUL_ExtIEs_29,
	3,	/* Elements count */
	&asn_SPC_NGAP_DRBStatusUL_ExtIEs_specs_29	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P8_tags_9[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_GlobalRANNodeID_ExtIEs_33,
	3,	/* Elements count */
	&asn_SPC_NGAP_GlobalRANNodeID_ExtIEs_specs_33	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P9_tags_10[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_GNB_ID_ExtIEs_37,
	3,	/* Elements count */
	&asn_SPC_NGAP_GNB_ID_ExtIEs_specs_37	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P10_tags_11[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_LastVisitedCellInformation_ExtIEs_41,
	3,	/* Elements count */
	&asn_SPC_NGAP_LastVisitedCellInformation_ExtIEs_specs_41	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P11_tags_12[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_N3IWF_ID_ExtIEs_45,
	3,	/* Elements count */
	&asn_SPC_NGAP_N3IWF_ID_ExtIEs_specs_45	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P12_tags_13[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_NgENB_ID_ExtIEs_49,
	3,	/* Elements count */
	&asn_SPC_NGAP_NgENB_ID_ExtIEs_specs_49	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P13_tags_14[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_NGRAN_CGI_ExtIEs_53,
	3,	/* Elements count */
	&asn_SPC_NGAP_NGRAN_CGI_ExtIEs_specs_53	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P14_tags_15[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_OverloadResponse_ExtIEs_57,
	3,	/* Elements count */
	&asn_SPC_NGAP_OverloadResponse_ExtIEs_specs_57	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P15_tags_16[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_PWSFailedCellIDList_ExtIEs_61,
	3,	/* Elements count */
	&asn_SPC_NGAP_PWSFailedCellIDList_ExtIEs_specs_61	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P16_tags_17[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_QosCharacteristics_ExtIEs_65,
	3,	/* Elements count */
	&asn_SPC_NGAP_QosCharacteristics_ExtIEs_specs_65	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P17_tags_18[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_ResetType_ExtIEs_69,
	3,	/* Elements count */
	&asn_SPC_NGAP_ResetType_ExtIEs_specs_69	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P18_tags_19[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_SONInformation_ExtIEs_73,
	3,	/* Elements count */
	&asn_SPC_NGAP_SONInformation_ExtIEs_specs_73	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P19_tags_20[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_TargetID_ExtIEs_77,
	3,	/* Elements count */
	&asn_SPC_NGAP_TargetID_ExtIEs_specs_77	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P20_tags_21[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UEIdentityIndexValue_ExtIEs_81,
	3,	/* Elements count */
	&asn_SPC_NGAP_UEIdentityIndexValue_ExtIEs_specs_81	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P21_tags_22[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UE_NGAP_IDs_ExtIEs_85,
	3,	/* Elements count */
	&asn_SPC_NGAP_UE_NGAP_IDs_ExtIEs_specs_85	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P22_tags_23[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UEPagingIdentity_ExtIEs_89,
	3,	/* Elements count */
	&asn_SPC_NGAP_UEPagingIdentity_ExtIEs_specs_89	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P23_tags_24[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UPTransportLayerInformation_ExtIEs_93,
	3,	/* Elements count */
	&asn_SPC_NGAP_UPTransportLayerInformation_ExtIEs_specs_93	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P24_tags_25[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UserLocationInformation_ExtIEs_97,
	3,	/* Elements count */
	&asn_SPC_NGAP_UserLocationInformation_ExtIEs_specs_97	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26,
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26[0]), /* 1 */
	asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26,	/* Same as above */
	sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26)
		/sizeof(asn_DEF_NGAP_ProtocolIE_SingleContainer_6979P25_tags_26[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_WarningAreaList_ExtIEs_101,
	3,	/* Elements count */
	&asn_SPC_NGAP_WarningAreaList_ExtIEs_specs_101	/* Additional specs */
};

