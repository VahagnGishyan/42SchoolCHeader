#include "Test_CVectorString.h"

void Test_CVectorString::ResizeClear()
{
    std::cout << "\tResizeClear()\t\t";

    bool result = true;

    t_c_vector_string strs0;
    c_vector_string_constructor(&strs0);

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

    c_vector_string_destructor(&strs0);

    //dyanmic test

    t_c_vector_string strd0;
    c_vector_string_constructor(&strd0);

    /*Check 3*/
    
    if (!strd0.resize(&strd0, 4))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.resize(0) = " << !strd0.resize(&strd0, 4) << "\t\t:: must be false" << std::endl;
    }

    /*Check 4*/
    strd0.clear(&strd0);
    if (strd0.size(&strd0) != 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrss.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    
    if (!strd0.resize(&strd0, 16))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrss.size() = " << !strd0.resize(&strd0, 16) << "\t\t:: must be false" << std::endl;
    }

    c_vector_string_destructor(&strd0);

    if (result)
	std::cout << "TRUE" << std::endl;
}