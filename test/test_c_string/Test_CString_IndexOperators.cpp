#include "Test_CString.h"

void Test_CString::IndexOperators()
{
    std::cout << "\tIndexOperators()\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;
    c_string strs4;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);
    c_string_constructor(&strs4);

    c_string str0;
    c_string str1;
    c_string str2;
    c_string str3;
    c_string str4;

    c_string_constructor(&str0);
    c_string_constructor(&str1);
    c_string_constructor(&str2);
    c_string_constructor(&str3);
    c_string_constructor(&str4);

    /*Check 0*/
    char arrs0[1]{ 'a'};
    strs0.setdata(&strs0, arrs0, 1, 1);
    if (*strs0.at(&strs0, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*strs.at(0)     = " << *strs0.at(&strs0, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 1*/
    char arrs1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strs1.setdata(&strs1, arrs1, 25, 128);
    if (*strs1.at(&strs1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t*strs.at(0)     = " << *strs1.at(&strs1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    char arrs2[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strs2.setdata(&strs2, arrs2, 25, 128);
    for (int index = 0; index < 25; ++index)
    {
	if (*strs1.at(&strs2, index) != 'a')
	{

	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strs.at("<<index<<") = " << *strs2.at(&strs2, index) << "\t::must be a" << std::endl;
	}
    }


    /*Check 3*/
    char arrs3[128]{ "a" };
    strs3.setdata(&strs3, arrs3, 1, 128);
    if (*strs3.front(&strs3) != *strs3.back(&strs3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*strs3.front()   = " << *strs3.front(&strs3) << "\t:: must be a" << std::endl;
	std::cout << "\t*strs3.back()    = " << *strs3.back(&strs3) << "\t:: must be a" << std::endl;
    }

    /*Check 4*/
    char arrs4[128]{ "abcde" };
    strs4.setdata(&strs4, arrs4, 5, 128);
    if (*strs4.front(&strs4) != 'a' || * strs4.back(&strs4) != 'e')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*strs3.front()   = " << *strs4.front(&strs4) << "\t:: must be a" << std::endl;
	std::cout << "\t*strs3.back()    = " << *strs4.back(&strs4) << "\t:: must be e" << std::endl;
    }

    /*Check 5*/
    char arrd0[1]{ 'a' };
    str0.copy_chararray(&str0, arrd0, 1);
    if (*str0.at(&str0, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\t*str.at(0)     = " << *str0.at(&str0, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 6*/
    char arrd1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    str1.copy_chararray(&str1, arrd1, 25);
    if (*str1.at(&str1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\t*str.at(0)     = " << *str1.at(&str1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 7*/
    char arrd2[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    str2.copy_chararray(&str2, arrd2, 25);
    for (int index = 0; index < 25; ++index)
    {
	if (*str1.at(&str2, index) != 'a')
	{

	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 7\t" << std::endl;
	    std::cout << "\t*str.at(" << index << ") = " << *str2.at(&str2, index) << "\t::must be a" << std::endl;
	}
    }


    /*Check 8*/
    char arrd3[128]{ "a" };
    str3.copy_chararray(&str3, arrd3, 1);
    if (*str3.front(&str3) != *str3.back(&str3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\t*str3.front()   = " << *str3.front(&str3) << "\t:: must be a" << std::endl;
	std::cout << "\t*str3.back()    = " << *str3.back(&str3) << "\t:: must be a" << std::endl;
    }

    /*Check 9*/
    char arrd4[128]{ "abcde" };
    str4.copy_chararray(&str4, arrd4, 5);
    if (*str4.front(&str4) != 'a' || *str4.back(&str4) != 'e')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 9\t" << std::endl;
	std::cout << "\t*str3.front()   = " << *str4.front(&str4) << "\t:: must be a" << std::endl;
	std::cout << "\t*str3.back()    = " << *str4.back(&str4) << "\t:: must be e" << std::endl;
    }

    c_string_destructor(&str0);
    c_string_destructor(&str1);
    c_string_destructor(&str2);
    c_string_destructor(&str3);
    c_string_destructor(&str4);

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);
    c_string_destructor(&strs4);

    if (result)
	std::cout << "TRUE" << std::endl;
}