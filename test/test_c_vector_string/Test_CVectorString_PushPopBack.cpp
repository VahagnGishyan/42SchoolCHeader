#include "Test_CVectorString.h"

void Test_CVectorString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    t_c_vector_string strs0;
    c_vector_string_constructor(&strs0);

    c_string data;
    c_string_constructor(&data);
    c_string_copy_chararray(&data, "Vahagn", 6);

    c_string arrdest[4];
    c_string_array_constructor(arrdest, 4);
    strs0.tie_static_array(&strs0, arrdest, 4);

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
	std::cout << "\tstrs0.size(&strs0) = " << strs0.size(&strs0) << "\t:: must be " << 1 << std::endl;
	std::cout << "\tstrs0.capacity(&strs0) = " << strs0.capacity(&strs0) 
	    << "\t:: must be >=" << 4 << std::endl;
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
	std::cout << "\t!strs0.is_empty(&strs0)     = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
	std::cout << "\tstrs0.size(&strs0) = " << strs0.size(&strs0) << "\t\t:: must be " << 0 << std::endl;
	std::cout << "\tstrs0.capacity(&strs0) = " << strs0.capacity(&strs0)
	    << "\t:: must be = " << 4 << std::endl;
    }

    c_vector_string_destructor(&strs0);
    c_string_destructor(&data);

    c_string_array_destructor(arrdest, 4);

    //dyanamic test

    t_c_vector_string strd0;
    c_vector_string_constructor(&strd0);

    c_string datad;
    c_string_constructor(&datad);
    c_string_copy_chararray(&datad, "Vahagn", 6);

    /*Check 2*/
    strd0.push_back(&strd0, &datad);
    if (c_string_compare_c_string(strd0.front(&strd0), &datad) || strd0.size(&strd0) != 1 || strd0.capacity(&strd0) < !4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tc_string_compare_c_string(strd0.front(&strd0), &datad)     = "
	    << c_string_compare_c_string(strd0.front(&strd0), &datad) << "\t:: must be " << 0 << std::endl;
	std::cout << "\tstrd0.size(&strd0) = " << strd0.size(&strd0) << "\t:: must be " << 1 << std::endl;
	std::cout << "\tstrd0.capacity(&strd0) = " << strd0.capacity(&strd0)
	    << "\t:: must be >=" << 4 << std::endl;
    }

    /*Check 3*/
    strd0.pop_back(&strd0);
    if (!strd0.is_empty(&strd0) || strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t!strd0.is_empty(&strd0)     = " << !strd0.is_empty(&strd0) << "\t:: must be false" << std::endl;
	std::cout << "\tstrd0.size(&strd0) = " << strd0.size(&strd0) << "\t\t:: must be " << 0 << std::endl;
	std::cout << "\tstrd0.capacity(&strd0) = " << strd0.capacity(&strd0)
	    << "\t:: must be = " << 1 << std::endl;
    }

    c_vector_string_destructor(&strd0);
    c_string_destructor(&datad);

    if (result)
	std::cout << "TRUE" << std::endl;
}