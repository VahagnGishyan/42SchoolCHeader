#pragma once

#include "../../header/cpp_header.h"
#include "../../c_array_string/c_darray_string/c_darray_string.h"

#ifdef __cplusplus
extern "C" 
{
#endif

#include "../../header/42SchoolCHeader.h"

#ifdef __cplusplus
}
#endif

namespace Test_CDArrayString
{
    void All();

    void Initialization();
    void ResizeClear();
    void ArraySize();
    void IndexOperators();
    void PushPopBack();
    void CopyData();
    void Concatenation();
    void Search();
    void ConvertToIntArray();
}