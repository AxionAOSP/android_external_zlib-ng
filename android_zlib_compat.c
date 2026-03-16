/*
 * Copyright 2025-2026 AxionOS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "zbuild.h"
#include "deflate.h"
#include "trees_emit.h"

__attribute__((visibility("default")))
const unsigned char *_dist_code = zng_dist_code;

__attribute__((visibility("default")))
const unsigned char *_length_code = zng_length_code;

__attribute__((visibility("default")))
void _tr_init(deflate_state *s) {
    zng_tr_init(s);
}

__attribute__((visibility("default")))
void _tr_flush_bits(deflate_state *s) {
    zng_tr_flush_bits(s);
}

__attribute__((visibility("default")))
void _tr_flush_block(deflate_state *s, char *buf, uint32_t stored_len, int last) {
    zng_tr_flush_block(s, buf, stored_len, last);
}

__attribute__((visibility("default")))
void _tr_align(deflate_state *s) {
    zng_tr_align(s);
}

__attribute__((visibility("default")))
void _tr_stored_block(deflate_state *s, char *buf, uint32_t stored_len, int last) {
    zng_tr_stored_block(s, buf, stored_len, last);
}

__attribute__((visibility("default")))
int _tr_tally(deflate_state *s, unsigned dist, unsigned lc) {
    (void)s; (void)dist; (void)lc;
    return 0;
}
