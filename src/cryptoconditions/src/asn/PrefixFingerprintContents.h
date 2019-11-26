/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Crypto-Conditions"
 * 	found in "CryptoConditions.asn"
 */

#ifndef	_PrefixFingerprintContents_H_
#define	_PrefixFingerprintContents_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "NativeInteger.h"
#include "Condition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PrefixFingerprintContents */
typedef struct PrefixFingerprintContents {
	OCTET_STRING_t	 prefix;
	unsigned long	 maxMessageLength;
	Condition_t	 subcondition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrefixFingerprintContents_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxMessageLength_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PrefixFingerprintContents;

#ifdef __cplusplus
}
#endif

#endif	/* _PrefixFingerprintContents_H_ */
#include "asn_internal.h"
