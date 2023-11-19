/**
 * @brief - implements hash interface.
 * 
 * @copyright - 2023-present. Devendra Naga. All rights reserved.
*/
#ifndef __CAL_HASH_H__
#define __CAL_HASH_H__

#include <stdint.h>
#include <errors.h>

namespace CAL {

#define HASH_LEN_MAX 64

enum class Hash_Type : uint32_t {
    SHA2_256,
    SHA2_384,
    SHA2_512,
};

struct hash {
    uint8_t hash_val[HASH_LEN_MAX];
    uint32_t hash_len;

    explicit hash() { }
    ~hash() { }
};

class hash_ops {
    public:
        explicit hash_ops() = default;
        ~hash_ops() = default;

        virtual Error_Code generate(const uint8_t *in,
                                    uint32_t in_len,
                                    hash &out) = 0;
};

}

#endif
