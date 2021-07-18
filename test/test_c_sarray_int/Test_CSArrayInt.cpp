#include "Test_CSArrayInt.h"

void Test_CSArrayInt::All()
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

