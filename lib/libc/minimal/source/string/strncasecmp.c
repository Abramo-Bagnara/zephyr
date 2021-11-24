/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdlib.h>
#include <ctype.h>

int
strncasecmp(const char *s1, const char *s2, size_t n)
{
	unsigned char c = 1U;

	for (; (c != 0U) && (n != 0); n--) {
		unsigned char lower1, lower2;

		c = *s1++;
		lower1 = tolower(c);
		lower2 = tolower((unsigned char)*s2++);

		if (lower1 != lower2) {
			return (lower1 > lower2) ? 1 : -1;
		}
	}

	return 0;
}
