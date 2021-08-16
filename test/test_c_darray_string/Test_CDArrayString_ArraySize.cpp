#include "Test_CDArrayString.h"

void Test_CDArrayString::ArraySize()
{
    std::cout << "\tArraySize()\t\t";

    bool result = true;

    t_c_darray_string strs0;
    c_darray_string_constructor(&strs0);

    constexpr int length = 8;
    c_string arrsorc[length];
    c_string_array_constructor(arrsorc, length);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc[4], length - 4, "", 1);

    strs0.set_data(&strs0, arrsorc, 4);

    /*Check 0*/
    if (strs0.size(&strs0) != 4 || strs0.capacity(&strs0) <! 4 || strs0.is_empty(&strs0))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 4" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be positive" << std::endl;
	std::cout << "\tstrs.is_empty() = " << strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }

    /*Check 1*/
    strs0.clear(&strs0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) <! 4 || !strs0.is_empty(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be poistive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }

    /*Check 2*/
    strs0.clear(&strs0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 0 || !strs0.is_empty(&strs0) || !strs0.is_null(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be poistive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl; 
	std::cout << "\t!strs.is_empty() = " << !strs0.is_null(&strs0) << "\t:: must be false" << std::endl;
    }

    c_string_array_destructor(arrsorc, length);
    c_darray_string_destructor(&strs0);

    if (result)
	std::cout << "TRUE" << std::endl;
}