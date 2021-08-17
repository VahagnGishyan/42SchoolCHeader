#include "Test_CVectorString.h"

void Test_CVectorString::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;

    t_c_vector_string strs0;
    c_vector_string_constructor(&strs0);

    constexpr int length = 4;
    c_string arrsorc[length];
    c_string_array_constructor(arrsorc, length);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc[4], length - 4, "", 1);

    strs0.set_data(&strs0, arrsorc, 4, length);
    /*Check 0*/
    if (strs0.size(&strs0) != 4 || strs0.capacity(&strs0) != length)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.size(&strs0) << "\t\t:: must be 4" << std::endl;
	std::cout << "\tstr.capasity() = " << strs0.capacity(&strs0) << "\t:: must be > 4" << std::endl;
    }

    /*Check 1*/
    if (strs0.at(&strs0, 0)->size(strs0.at(&strs0, 0)) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.at(&strs0, 0)->size(strs0.at(&strs0, 0)) << "\t\t:: must be 1" << std::endl;
    }

    /*Check 2*/
    if (strs0.at(&strs0, 1)->size(strs0.at(&strs0, 1)) != 6)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.at(&strs0, 1)->size(strs0.at(&strs0, 1)) << "\t\t:: must be 6" << std::endl;
    }


    /*Check 3*/
    if (strs0.at(&strs0, 2)->size(strs0.at(&strs0, 2)) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.at(&strs0, 2)->size(strs0.at(&strs0, 2)) << "\t\t:: must be 1" << std::endl;
    }

    /*Check 4*/
    if (strs0.at(&strs0, 3)->size(strs0.at(&strs0, 3)) != 7)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.at(&strs0, 3)->size(strs0.at(&strs0, 3)) << "\t\t:: must be 7" << std::endl;
    }

    c_vector_string_destructor(&strs0);
    c_string_array_destructor(arrsorc, length);


    //dynamic test


    t_c_vector_string strd0;
    c_vector_string_constructor(&strd0);

    constexpr int length1 = 4;
    c_string arrsorcd[length1];
    c_string_array_constructor(arrsorcd, length1);
    c_string_copy_chararray(&arrsorcd[0], "", 1);
    c_string_copy_chararray(&arrsorcd[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd[2], " ", 1);
    c_string_copy_chararray(&arrsorcd[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorcd[4], length1 - 4, "", 1);

    strd0.copy_string_array(&strd0, arrsorcd, 4);
    /*Check 5*/
    if (strd0.size(&strd0) != 4 || strd0.capacity(&strd0) <= length1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.size(&strd0) << "\t\t:: must be 4" << std::endl;
	std::cout << "\tstr.capasity() = " << strd0.capacity(&strd0) << "\t:: must be > 4" << std::endl;
    }

    /*Check 6*/
    if (strd0.at(&strd0, 0)->size(strd0.at(&strd0, 0)) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.at(&strd0, 0)->size(strd0.at(&strd0, 0)) << "\t\t:: must be 1" << std::endl;
    }

    /*Check 7*/
    if (strd0.at(&strd0, 1)->size(strd0.at(&strd0, 1)) != 6)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.at(&strd0, 1)->size(strd0.at(&strd0, 1)) << "\t\t:: must be 6" << std::endl;
    }


    /*Check 8*/
    if (strd0.at(&strd0, 2)->size(strd0.at(&strd0, 2)) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.at(&strd0, 2)->size(strd0.at(&strd0, 2)) << "\t\t:: must be 1" << std::endl;
    }

    /*Check 9*/
    if (strd0.at(&strd0, 3)->size(strd0.at(&strd0, 3)) != 7)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.at(&strd0, 3)->size(strd0.at(&strd0, 3)) << "\t\t:: must be 7" << std::endl;
    }

    c_vector_string_destructor(&strd0);
    c_string_array_destructor(arrsorcd, length1);

    if (result)
	std::cout << "TRUE" << std::endl;
}