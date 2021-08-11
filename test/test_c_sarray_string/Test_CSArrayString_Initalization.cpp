#include "Test_CSArrayString.h"

void Test_CSArrayString::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;

    t_c_sarray_string strs0;
    c_sarray_string_constructor(&strs0);

    c_string arrdest[32];
    c_string_array_constructor(arrdest, 32);
    strs0.tie_static_array(&strs0, arrdest, 32);

    c_string arrsorc[32];
    c_string_array_constructor(arrsorc, 32);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc[4], 32 - 4, "", 1);

    strs0.set_data(&strs0, arrsorc, 4, 32);
    /*Check 0*/
    if (strs0.size(&strs0) != 4 || strs0.capacity(&strs0) != 32)
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

    c_sarray_string_destructor(&strs0);
    c_string_array_destructor(arrdest, 32);
    c_string_array_destructor(arrsorc, 32);

    if (result)
	std::cout << "TRUE" << std::endl;
}