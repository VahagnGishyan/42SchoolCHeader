#include "Test_CSArrayString.h"

void Test_CSArrayString::ResizeClear()
{
    std::cout << "\tResizeClear()\t\t";

    bool result = true;

    t_c_sarray_string strs0;
    c_sarray_string_constructor(&strs0);

    t_c_string arrdest[32];
    c_string_array_constructor(arrdest, 32);
    strs0.tie_static_array(&strs0, arrdest, 32);

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

    c_sarray_string_destructor(&strs0);
    c_string_array_destructor(arrdest, 32);

    if (result)
	std::cout << "TRUE" << std::endl;
}