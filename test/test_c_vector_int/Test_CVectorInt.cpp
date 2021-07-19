#include "Test_CVectorInt.h"

void Test_CVectorInt::All()
{
    std::cout << "Test_CVectorInt" << std::endl;
    Initialization();
    ResizeClear();
    ArraySize();
    IndexOperators();
    PushPopBack();
    CopyData();
    Concatenation();
    Search();
    ConvertToIntArray();
}

