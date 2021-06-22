#include "test_string.h"

void Test_CSString::IndexOperators()
{
    std::cout << "\tIndexOperators()\t";

    bool result = true;

    /*Check 0*/
    char arr0[1]{ 'a'};
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0, arr0, 1, 1);
    if (*str0.at(&str0, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*str.at(0)     = " << *str0.at(&str0, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 1*/
    char arr1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, 25, 128);
    if (*str1.at(&str1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t*str.at(0)     = " << *str1.at(&str1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    char arr2[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    c_sstring str2;
    c_sstring_initaliaztion(&str2);
    str2.constructor(&str2, arr2, 25, 128);
    for (ushint index = 0; index < 25; ++index)
    {
	if (*str1.at(&str2, index) != 'a')
	{

	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*str.at("<<index<<") = " << *str2.at(&str2, index) << "\t::must be a" << std::endl;
	}
    }


    /*Check 3*/
    char arr3[128]{ "a" };
    c_sstring str3;
    c_sstring_initaliaztion(&str3);
    str3.constructor(&str3, arr3, 1, 128);
    if (*str3.front(&str3) != *str3.back(&str3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*str3.front()   = " << *str3.front(&str3) << "\t:: must be a" << std::endl;
	std::cout << "\t*str3.back()    = " << *str3.back(&str3) << "\t:: must be a" << std::endl;
    }

    /*Check 4*/
    char arr4[128]{ "abcde" };
    c_sstring str4;
    c_sstring_initaliaztion(&str4);
    str4.constructor(&str4, arr4, 5, 128);
    if (*str4.front(&str4) != 'a' || * str4.back(&str4) != 'e')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*str3.front()   = " << *str4.front(&str4) << "\t:: must be a" << std::endl;
	std::cout << "\t*str3.back()    = " << *str4.back(&str4) << "\t:: must be e" << std::endl;
    }

    str0.destructor(&str0);
    str1.destructor(&str1);
    str2.destructor(&str2);
    str3.destructor(&str3);
    str4.destructor(&str4);

    if (result)
	std::cout << "TRUE" << std::endl;
}