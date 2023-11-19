#ifndef __CAL_ERRORS_H__
#define __CAL_ERRORS_H__

#include <stdint.h>

namespace CAL {

enum class Error_Code : uint32_t {
    None,
    Err_Invalid_Input,
};

}

#endif

