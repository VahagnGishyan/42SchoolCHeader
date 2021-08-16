#include "Test_CDArrayString.h"

void Test_CDArrayString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    t_c_darray_string strs0;
    c_darray_string_constructor(&strs0);

    c_string data;
    c_string_constructor(&data);
    c_string_copy_chararray(&data, "Vahagn", 6);

    /*Check 0*/
    strs0.push_back(&strs0, &data);
    if (c_string_compare_c_string(strs0.front(&strs0), &data) || strs0.size(&strs0) != 1 || strs0.capacity(&strs0) <! 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tc_string_compare_c_string(strs0.front(&strs0), &data)     = " 
	    << c_string_compare_c_string(strs0.front(&strs0), &data) << "\t:: must be " << 0 << std::endl;
	std::cout << "\tstrs0.size(&strs0) = " << strs0.size(&strs0) << "\t:: must be " << 1 << std::endl;
	std::cout << "\tstrs0.capacity(&strs0) = " << strs0.capacity(&strs0) 
	    << "\t:: must be >=" << 4 << std::endl;
    }

    /*Check 1*/
    strs0.pop_back(&strs0);
    if (!strs0.is_empty(&strs0) || strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t!strs0.is_empty(&strs0)     = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
	std::cout << "\tstrs0.size(&strs0) = " << strs0.size(&strs0) << "\t\t:: must be " << 0 << std::endl;
	std::cout << "\tstrs0.capacity(&strs0) = " << strs0.capacity(&strs0)
	    << "\t:: must be = " << 1 << std::endl;
    }

    c_darray_string_destructor(&strs0);
    c_string_destructor(&data);

    if (result)
	std::cout << "TRUE" << std::endl;
}