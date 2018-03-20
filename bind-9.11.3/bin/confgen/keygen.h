/*
 * Copyright (C) 2009, 2016  Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/* $Id: keygen.h,v 1.3 2009/06/11 23:47:55 tbox Exp $ */

#ifndef RNDC_KEYGEN_H
#define RNDC_KEYGEN_H 1

/*! \file */

#include <isc/lang.h>

ISC_LANG_BEGINDECLS

void generate_key(isc_mem_t *mctx, const char *randomfile, dns_secalg_t alg,
		  int keysize, isc_buffer_t *key_txtbuffer);

void write_key_file(const char *keyfile, const char *user,
		    const char *keyname, isc_buffer_t *secret,
		    dns_secalg_t alg);

const char *alg_totext(dns_secalg_t alg);
dns_secalg_t alg_fromtext(const char *name);
int alg_bits(dns_secalg_t alg);

ISC_LANG_ENDDECLS

#endif /* RNDC_KEYGEN_H */