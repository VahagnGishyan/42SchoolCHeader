#pragma once

#include "../../header/cpp_header.h"
#include "../../c_dstring/c_dstring.h"

#ifdef __cplusplus
extern "C" 
{
#endif

#include "../../header/42SchoolCHeader.h"

#ifdef __cplusplus
}
#endif

namespace Test_CDString
{
    void All();

    void Initialization();
    void ArraySize();
    void IndexOperators();
    void PushPopBack();
    void CopyData();
    void Concatenation();
    void Compare();
    void Search();
    void IsCheck();
    void ToUpper();
    void ToLower();
    void ConvertToInt();
    void ConvertToCharArray();
}