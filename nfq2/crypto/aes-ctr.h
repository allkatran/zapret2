#pragma once

#include <stdint.h>
#include "aes.h"

// this function rewrites buf
void aes_ctr_xcrypt_buffer(aes_context *ctx, const uint8_t *iv, uint8_t *buf, size_t length);
