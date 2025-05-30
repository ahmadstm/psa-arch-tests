/** @file
 * Copyright (c) 2020-2025, Arm Limited or its affiliates. All rights reserved.
 * SPDX-License-Identifier : Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/

#ifndef _TEST_CRYPTO_COMMON_H_
#define _TEST_CRYPTO_COMMON_H_

#include "val_crypto.h"

#define INPUT_BYTES_DATA_LEN           16
#define ECDH_SECP_256_R1_PRV_KEY_LEN   32
#define ECDH_SECP_256_R1_PUB_KEY_LEN   65
#define ECDH_SECP_384_R1_PRV_KEY_LEN   48
#define ECDH_SECP_384_R1_PUB_KEY_LEN   97

#define FFDH2048_PRV_KEY_LEN   256
#define FFDH2048_PUB_KEY_LEN   256
#define FFDH3072_PRV_KEY_LEN   384
#define FFDH3072_PUB_KEY_LEN   384
#define FFDH4096_PRV_KEY_LEN   512
#define FFDH4096_PUB_KEY_LEN   512

#define AEAD_CIPHERTEXT_LEN_1          39
#define AEAD_CIPHERTEXT_LEN_2          40
#define AEAD_CIPHERTEXT_LEN_3          28
#define AEAD_CIPHERTEXT_LEN_4          40
#define AEAD_CIPHERTEXT_LEN_5          16
#define AEAD_CIPHERTEXT_LEN_6          40
#define AEAD_CIPHERTEXT_LEN_7          32

#define INPUT_SALT_LEN                 4
#define INPUT_INFO_LEN                 4
#define INPUT_SEED_LEN                 4
#define INPUT_LABEL_LEN                5
#define INPUT_PASSWORD_LEN             8
#define USER_ID_LEN                    4
#define PEER_ID_LEN                    4
#define CONTEXT_LEN                    7

/* min and max finding macro */
#ifndef MIN
#define MIN(a, b) (((a) < (b))?(a):(b))
#endif
#ifndef MAX
#define MAX(a, b) (((a) > (b))?(a):(b))
#endif

extern const uint8_t key_data[];

extern const uint8_t rsa_128_key_pair[];
extern const uint8_t rsa_key_pair_public_key[];
extern const uint8_t rsa_128_key_data[];
extern const uint8_t rsa_256_key_pair[];
extern const uint8_t rsa_256_key_data[];

extern const uint8_t ec_key_data[];
extern const uint8_t ec_key_pair[];
extern const uint8_t ec_keypair_deterministic[];

extern const uint8_t md2_hash[];
extern const uint8_t md4_hash[];
extern const uint8_t md5_hash[];
extern const uint8_t ripemd_160_hash[];
extern const uint8_t sha_1_hash[];
extern const uint8_t sha_224_hash[];
extern const uint8_t sha_256_hash[];
extern const uint8_t sha_256_incorrect_hash[];
extern const uint8_t sha_384_hash[];
extern const uint8_t sha_512_hash[];
extern const uint8_t aes_mmo_hash_input[];
extern const uint8_t aes_mmo_hash[];

extern const uint8_t ecdh_secp_256_r1_prv_key[];
extern const uint8_t ecdh_secp_256_r1_pub_key[];
extern const uint8_t ecdh_secp_384_r1_prv_key[];
extern const uint8_t ecdh_secp_384_r1_pub_key[];

extern const uint8_t nonce[];
extern const uint8_t additional_data[];
extern const uint8_t plaintext[];
extern const uint8_t aead_ciphertext_1[AEAD_CIPHERTEXT_LEN_1];
extern const uint8_t aead_ciphertext_2[AEAD_CIPHERTEXT_LEN_2];
extern const uint8_t aead_invalid_ciphertext_2[AEAD_CIPHERTEXT_LEN_2];
extern const uint8_t aead_ciphertext_3[AEAD_CIPHERTEXT_LEN_3];
extern const uint8_t aead_ciphertext_4[AEAD_CIPHERTEXT_LEN_4];
extern const uint8_t aead_ciphertext_5[AEAD_CIPHERTEXT_LEN_5];
extern const uint8_t aead_ciphertext_6[AEAD_CIPHERTEXT_LEN_6];
extern const uint8_t aead_ciphertext_7[AEAD_CIPHERTEXT_LEN_7];

extern const uint8_t chacha20_key[];
extern const uint8_t chacha20_iv[];
extern const uint8_t plaintext_stream_cipher[];
extern const uint8_t ciphertext_chacha20[];
extern const uint8_t xchacha20_key[];
extern const uint8_t xchacha20_iv[];
extern const uint8_t ciphertext_xchacha20[];
extern const uint8_t aead_plaintext[];
extern const uint8_t aead_chacha20_poly1305_nonce[];
extern const uint8_t aead_xchacha20_poly1305_nonce[];
extern const uint8_t aead_add_data[];
extern const uint8_t aead_chacha20_poly1305_ciphertext[];
extern const uint8_t aead_xchacha20_poly1305_ciphertext[];
extern const uint8_t ccm_star_no_tag_iv[];
extern const uint8_t ccm_star_no_tag_plaintext[];
extern const uint8_t ccm_star_no_tag_ciphertext[];
extern const uint8_t ccm_star_no_tag_key_data[];

extern const uint8_t hash_input;
extern const uint8_t input_bytes_data[INPUT_BYTES_DATA_LEN];
extern const uint8_t input_salt[INPUT_SALT_LEN];
extern const uint8_t input_info[INPUT_INFO_LEN];
extern const uint8_t input_seed[INPUT_SEED_LEN];
extern const uint8_t input_label[INPUT_LABEL_LEN];
extern const uint8_t input_password[INPUT_PASSWORD_LEN];
extern uint64_t input_rounds;
extern const uint8_t userid[USER_ID_LEN];
extern const uint8_t peerid[PEER_ID_LEN];
extern const uint8_t context[CONTEXT_LEN];
extern const uint8_t IKM[];
extern const uint8_t kdf_salt[];
extern const uint8_t kdf_info[];
extern const uint8_t PRK[];
extern const uint8_t invalid_prk[];

extern const unsigned char iv[];

extern const unsigned char ciphertext_1[];
extern const unsigned char ciphertext_2[];
extern const unsigned char ciphertext_3[];
extern const unsigned char ciphertext_4[];
extern const unsigned char ciphertext_5[];
extern const unsigned char ciphertext_6[];

extern const uint8_t salt[];
extern const unsigned char ciphertext_7[];
extern const unsigned char ciphertext_8[];
extern const unsigned char ciphertext_9[];

extern const uint8_t signature_1[];
extern const uint8_t signature_2[];
extern const uint8_t signature_2_invalid[];
extern const uint8_t signature_3[];
extern const uint8_t signature_4[];
extern const uint8_t signature_4_invalid[];
extern const uint8_t signature_5[];
extern const uint8_t signature_6[];

extern const uint8_t hmac_sha224[];
extern const uint8_t hmac_sha224_invalid[];
extern const uint8_t hmac_sha256[];
extern const uint8_t hmac_sha512[];
extern const uint8_t cmac_aes_128[];

extern const uint8_t spake2p_key_pair[];
extern const uint8_t spake2p_pub_key[];

extern uint8_t expected_output[BUFFER_SIZE];

extern void crypto_common_exit_action(void);

#ifdef ARCH_TEST_FFDHE2048
extern const uint8_t ffdh_key_data_2048[];
extern const uint8_t ffdh_peer_key_data_2048[];
#endif

#ifdef ARCH_TEST_FFDHE3072
extern const uint8_t ffdh_key_data_3072[];
extern const uint8_t ffdh_peer_key_data_3072[];
#endif

#ifdef ARCH_TEST_FFDHE4096
extern const uint8_t ffdh_key_data_4096[];
extern const uint8_t ffdh_peer_key_data_4096[];
#endif

#ifdef ARCH_TEST_ARIA
extern const uint8_t aria_128_key_data[];
extern const uint8_t aria_128_plain_text[];
extern const uint8_t aria_128_cipher_text[];
extern const uint8_t aead_aria_cipher_test[];
#endif

#ifdef ARCH_TEST_TWISTED_EDWARDS
extern const uint8_t eddsa_25519ph_keypair[];
extern const uint8_t eddsa_25519ph_pubkey[];
extern const uint8_t eddsa_25519ph_message[];
extern const uint8_t eddsa_25519ph_signature[];
extern const uint8_t eddsa_25519_keypair[];
extern const uint8_t eddsa_25519_pubkey[];
extern const uint8_t eddsa_25519_message[];
extern const uint8_t eddsa_25519_signature[];
extern const uint8_t sha_512_hash_eddsa519[];

extern const uint8_t eddsa_448_keypair[];
extern const uint8_t eddsa_448_pubkey[];
extern const uint8_t eddsa_448_message[];
extern const uint8_t eddsa_448_signature[];

#endif

#endif /* _TEST_CRYPTO_COMMON_H_ */
