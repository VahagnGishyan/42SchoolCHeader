#include "Test_CDArrayInt.h"

void Test_CDArrayInt::All()
{
    std::cout << "Test_CArrayInt" << std::endl;
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

