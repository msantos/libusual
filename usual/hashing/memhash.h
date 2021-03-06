/*
 * memhash.h - Randomized in-memory hashing.
 *
 * Copyright (c) 2014  Marko Kreen
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * @file
 *
 * Randomized in-memory hashing.
 *
 * Functions here use randomized seed and pick fastest hash
 * for current CPU.
 */

#ifndef _USUAL_HASHING_MEMHASH_H_
#define _USUAL_HASHING_MEMHASH_H_

#include <usual/base.h>

/**
 * Hash data.
 */
uint32_t memhash(const void *data, size_t len);

/**
 * Hash zero-terminated string.
 */
uint32_t memhash_string(const char *s);

/**
 * Hash with given seed.  Result is not randomized,
 * but still may vary on different CPU-s.
 */
uint32_t memhash_seed(const void *data, size_t len, uint32_t seed);

#endif
