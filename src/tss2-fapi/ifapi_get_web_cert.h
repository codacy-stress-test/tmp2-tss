/* SPDX-License-Identifier: BSD-2-Clause */
/*******************************************************************************
 * Copyright 2018-2019, Fraunhofer SIT sponsored by Infineon Technologies AG
 * All rights reserved.
 ******************************************************************************/
#ifndef IFAPI_GET_INTL_CERT_H
#define IFAPI_GET_INTL_CERT_H

TSS2_RC
ifapi_get_web_ek_certificate(
    FAPI_CONTEXT *context,
    TPM2B_PUBLIC *ek_public,
    UINT32 vendor,
    unsigned char ** buffer,
    size_t *cert_size);

#endif /* IFAPI_GET_INTL_CERT_H */
