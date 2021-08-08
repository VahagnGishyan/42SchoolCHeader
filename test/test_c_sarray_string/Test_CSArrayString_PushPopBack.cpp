#include "Test_CSArrayString.h"

void Test_CSArrayString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    t_c_sarray_string strs0;
    c_sarray_string_constructor(&strs0);

    c_string arrdest[4];
    c_string_array_constructor(arrdest, 4);
    strs0.tie_static_array(&strs0, arrdest, 4);

    c_string data;
    c_string_constructor(&data);
    c_string_copy_chararray(&data, "Vahagn", 6);

    /*Check 0*/
    strs0.push_back(&strs0, &data);
    if (c_string_compare_c_string(strs0.front(&strs0), &data) || strs0.size(&strs0) != 1 || strs0.capacity(&strs0) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tc_string_compare_c_string(strs0.front(&strs0), &data)     = " 
	    << c_string_compare_c_string(strs0.front(&strs0), &data) << "\t:: must be " << 0 << std::endl;
    }

    /*Check 1*/
    strs0.pop_back(&strs0);
    if (!strs0.is_empty(&strs0) || strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "!strs0.is_empty(&strs0)     = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }


    c_sarray_string_destructor(&strs0);
    c_string_array_destructor(arrdest, 4);
    c_string_destructor(&data);

    if (result)
	std::cout << "TRUE" << std::endl;
}