#include "Test_CVectorString.h"

void Test_CVectorString::IndexOperators()
{
    std::cout << "\tIndexOperators()\t";

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

    c_vector_string_destructor(&strs0);
    c_string_array_destructor(arrsorc, length);

    //dyanmic test

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
    /*Check 0*/
    if (c_string_compare_chararray(strd0.at(&strd0, 0), "", 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strd0.at(&strd0, 0), "", 1)     = " 
	    << c_string_compare_chararray(strd0.at(&strd0, 0), "", 1) << "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    if (c_string_compare_chararray(strd0.at(&strd0, 1), "Vahagn", 6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strd0.at(&strd0, 1), \"Vahagn\", 6) = " 
	    << c_string_compare_chararray(strd0.at(&strd0, 1), "Vahagn", 6) << "\t:: must be 0" << std::endl;
    }


    /*Check 2*/
    if (c_string_compare_chararray(strd0.at(&strd0, 2), " ", 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strd0.at(&strd0, 2), \" \", 1)  = " 
	    << c_string_compare_chararray(strd0.at(&strd0, 2), " ", 1) << "\t:: must be 0" << std::endl;
    }

    /*Check 3*/
    if (c_string_compare_chararray(strd0.at(&strd0, 3), "Gishyan", 7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tc_string_compare_chararray(strd0.at(&strd0, 3), \"Gishyan\", 7)  = " 
	    << c_string_compare_chararray(strd0.at(&strd0, 3), "Gishyan", 7) << "\t:: must be 0" << std::endl;
    }

    c_vector_string_destructor(&strd0);
    c_string_array_destructor(arrsorcd, lengthd);

    if (result)
	std::cout << "TRUE" << std::endl;
}