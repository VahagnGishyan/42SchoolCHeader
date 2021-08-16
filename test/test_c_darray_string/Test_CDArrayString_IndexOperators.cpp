#include "Test_CDArrayString.h"

void Test_CDArrayString::IndexOperators()
{
    std::cout << "\tIndexOperators()\t";

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
    if (c_string_compare_chararray(strs0.at(&strs0, 0), "", 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strs0.at(&strs0, 0), "", 1)     = " 
	    << c_string_compare_chararray(strs0.at(&strs0, 0), "", 1) << "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    if (c_string_compare_chararray(strs0.at(&strs0, 1), "Vahagn", 6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strs0.at(&strs0, 1), \"Vahagn\", 6) = " 
	    << c_string_compare_chararray(strs0.at(&strs0, 1), "Vahagn", 6) << "\t:: must be 0" << std::endl;
    }


    /*Check 2*/
    if (c_string_compare_chararray(strs0.at(&strs0, 2), " ", 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strs0.at(&strs0, 2), \" \", 1)  = " 
	    << c_string_compare_chararray(strs0.at(&strs0, 2), " ", 1) << "\t:: must be 0" << std::endl;
    }

    /*Check 3*/
    if (c_string_compare_chararray(strs0.at(&strs0, 3), "Gishyan", 7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strs0.at(&strs0, 3), \"Gishyan\", 7)  = " 
	    << c_string_compare_chararray(strs0.at(&strs0, 3), "Gishyan", 7) << "\t:: must be 0" << std::endl;
    }

    c_darray_string_destructor(&strs0);
    c_string_array_destructor(arrsorc, length);

    if (result)
	std::cout << "TRUE" << std::endl;
}