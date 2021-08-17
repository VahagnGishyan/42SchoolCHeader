#include "Test_CVectorString.h"

void Test_CVectorString::ArraySize()
{
    std::cout << "\tArraySize()\t\t";

    bool result = true;

    t_c_vector_string strs0;
    c_vector_string_constructor(&strs0);

    constexpr int length = 8;
    c_string arrsorc[length];
    c_string_array_constructor(arrsorc, length);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc[4], length - 4, "", 1);

    strs0.set_data(&strs0, arrsorc, 4, length);

    /*Check 0*/
    if (strs0.size(&strs0) != 4 || strs0.capacity(&strs0) != length || strs0.is_empty(&strs0))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 4" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be 8" << std::endl;
	std::cout << "\tstrs.is_empty() = " << strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }

    /*Check 1*/
    strs0.clear(&strs0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != length || !strs0.is_empty(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be 8" << std::endl;
	std::cout << "\t!strs.is_empty() = " << strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }

    /*Check 2*/
    strs0.clear(&strs0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != length || !strs0.is_empty(&strs0) || strs0.is_null(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be 8" << std::endl;
	std::cout << "\tstrs.is_empty() = " << strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
	std::cout << "\tstrs.is_empty() = " << strs0.is_null(&strs0) << "\t:: must be false" << std::endl;
    }

    c_string_array_destructor(arrsorc, length);
    c_vector_string_destructor(&strs0);

    //test dynamic

    t_c_vector_string strd0;
    c_vector_string_constructor(&strd0);

    constexpr int lengthd = 8;
    c_string arrsorcd[lengthd];
    c_string_array_constructor(arrsorcd, lengthd);
    c_string_copy_chararray(&arrsorcd[0], "", 1);
    c_string_copy_chararray(&arrsorcd[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd[2], " ", 1);
    c_string_copy_chararray(&arrsorcd[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorcd[4], lengthd - 4, "", 1);

    strd0.copy_string_array(&strd0, arrsorcd, 4);

    /*Check 3*/
    if (strd0.size(&strd0) != 4 || strd0.capacity(&strd0) <! 4 || strd0.is_empty(&strd0))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strd0.size(&strd0) << "\t:: must be 4" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strd0.capacity(&strd0) << "\t:: must be positive" << std::endl;
	std::cout << "\tstrs.is_empty() = " << strd0.is_empty(&strd0) << "\t:: must be false" << std::endl;
    }

    /*Check 4*/
    strd0.clear(&strd0);
    if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) <! 4 || !strd0.is_empty(&strd0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strd0.size(&strd0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strd0.capacity(&strd0) << "\t:: must be poistive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strd0.is_empty(&strd0) << "\t:: must be false" << std::endl;
    }

    /*Check 5*/
    strd0.clear(&strd0);
    if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 0 || !strd0.is_empty(&strd0) || !strd0.is_null(&strd0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strd0.size(&strd0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strd0.capacity(&strd0) << "\t:: must be poistive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strd0.is_empty(&strd0) << "\t:: must be false" << std::endl; 
	std::cout << "\t!strs.is_empty() = " << !strd0.is_null(&strd0) << "\t:: must be false" << std::endl;
    }

    c_string_array_destructor(arrsorcd, lengthd);
    c_vector_string_destructor(&strd0);

    if (result)
	std::cout << "TRUE" << std::endl;
}