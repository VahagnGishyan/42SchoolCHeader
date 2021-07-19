#pragma once

#include "../../header/cpp_header.h"
#include "../../c_array_int/c_darray_int/c_darray_int.h"

//#ifdef __cplusplus
//extern "C" 
//{
//#endif
//
//#include "../../header/42SchoolCHeader.h"
//
//#ifdef __cplusplus
//}
//#endif

namespace Test_CDArrayInt
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