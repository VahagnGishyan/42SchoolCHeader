#include "test_string.h"

void Test_CSString::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;

    /*Check 0*/
    char arr0[1];
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0,arr0, 0, 1);
    if (str0.size(&str0) != 0 || str0.capacity(&str0) != 1)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.size() = " << str0.size(&str0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity() = " << str0.capacity(&str0) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    char arr1[1]{ 'a' };
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, 0, 1);
    if (str1.size(&str1) != 0 || str1.capacity(&str1) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.size() = " << str1.size(&str1) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstr.capasity() = " << str1.capacity(&str1) << "\t:: must be 1" << std::endl;
    }

    /*Check 2*/
    char arr2[1]{ 'a' };
    c_sstring str2;
    c_sstring_initaliaztion(&str2);
    str2.constructor(&str2, arr2, 1, 128);
    if (str2.size(&str2) != 1 || str2.capacity(&str2) != 128 || *str2.front(&str2) != 'a' || *str2.back(&str2) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.size() = " << str2.size(&str2) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstr.capasity() = " << str2.capasity(&str2) << "\t:: must be 128" << std::endl;
	std::cout << "\t*str.front() = " << *str2.front(&str2) << "\t:: must be a" << std::endl;
	std::cout << "\t*str.back() = " << *str2.back(&str2) << "\t\t:: must be a" << std::endl;
    }

    /*Check 3*/
    char arr3[128]{ "abcde" };
    c_sstring str3;
    c_sstring_initaliaztion(&str3);
    str3.constructor(&str3, arr3, 5, 128);
    if (str3.size(&str3) != 5 || str3.capacity(&str3) != 128 || *str3.front(&str3) != 'a' || *str3.back(&str3) != 'e')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.size() = " << str3.size(&str3) << "\t\t:: must be 5" << std::endl;
	std::cout << "\tstr.capasity() = " << str3.capacity(&str3) << "\t:: must be 128" << std::endl;
	std::cout << "\t*str.front() = " << *str3.front(&str3) << "\t:: must be a" << std::endl;
	std::cout << "\t*str.back() = " << *str3.back(&str3) << "\t\t:: must be e" << std::endl;
    }

    str0.destructor(&str0);
    str1.destructor(&str1);
    str2.destructor(&str2);
    str3.destructor(&str3);

    if (result)
	std::cout << "TRUE" << std::endl;
}