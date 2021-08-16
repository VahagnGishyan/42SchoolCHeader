#include "Test_CDArrayString.h"

void Test_CDArrayString::All()
{
    std::cout << "Test_CDArrayString.h" << std::endl;
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

