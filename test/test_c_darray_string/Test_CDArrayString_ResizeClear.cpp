#include "Test_CDArrayString.h"

void Test_CDArrayString::ResizeClear()
{
    std::cout << "\tResizeClear()\t\t";

    bool result = true;

    t_c_darray_string strs0;
    c_darray_string_constructor(&strs0);

    /*Check 0*/
    
    if (!strs0.resize(&strs0, 4))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.resize(0) = " << !strs0.resize(&strs0, 4) << "\t\t:: must be false" << std::endl;
    }

    /*Check 1*/
    strs0.clear(&strs0);
    if (strs0.size(&strs0) != 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrss.size() = " << strs0.size(&strs0) << "\t\t:: must be 0" << std::endl;
    }

    /*Check 2*/
    
    if (!strs0.resize(&strs0, 16))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrss.size() = " << !strs0.resize(&strs0, 16) << "\t\t:: must be false" << std::endl;
    }

    c_darray_string_destructor(&strs0);

    if (result)
	std::cout << "TRUE" << std::endl;
}