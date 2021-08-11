
#include "../header/test.h"
#include "../header/cpp_header.h"

int main()
{

    std::cout << "Start main()\n";  //for screen heap

    std::cout << ""; //for screen heap
    Test_CSString::All();
    Test_CDString::All();
    Test_CString::All();
    Test_CSArrayInt::All();
    Test_CDArrayInt::All();
    Test_CVectorInt::All();
    Test_CSArrayString::All();
    std::cout << ""; //for screen heap

    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);

    std::cout << "Exit main()\n";  //for screen heap
    return 0;
}