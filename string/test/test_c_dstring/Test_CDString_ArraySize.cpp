#include "Test_CDString.h"

void Test_CDString::ArraySize()
{
    std::cout << "\tArraySize()\t\t";

    bool result = true;

    c_dstring str0;
    c_dstring str1;
    c_dstring str2;
    c_dstring str3;

    c_dstring_constructor(&str0);
    c_dstring_constructor(&str1);
    c_dstring_constructor(&str2);
    c_dstring_constructor(&str3);


    /*Check 0*/
    char arr0[1];
    str0.setdata(&str0, arr0, 0);
    if (str0.size(&str0) != 0 || str0.capacity(&str0) != 0 || !str0.is_empty(&str0) || !str0.is_null(&str0))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.size()      = " << str0.size(&str0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity()  = " << str0.capacity(&str0) << "\t:: must be 1" << std::endl;
	std::cout << "\t!str.is_empty() = " << !str0.is_empty(&str0) << "\t:: must be false" << std::endl;
    }

    /*Check 1*/
    char arr1[1]{ 'a' };
    str1.setdata(&str1, arr1, 0);
    str1.clear(&str1);
    if (str1.size(&str1) != 0 || str1.capacity(&str1) != 0 || !str1.is_empty(&str1) || !str1.is_null(&str1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.size()      = " << str1.size(&str1) << "\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity()  = " << str1.capacity(&str1) << "\t:: must be 0" << std::endl;
	std::cout << "\t!str.is_empty() = " << !str1.is_empty(&str1) << "\t:: must be false" << std::endl;
    }

    /*Check 2*/
    char arr2[1]{ 'a' };
    str2.setdata(&str2, arr2, 1);
    str2.clear(&str2);
    if (str2.size(&str2) != 0 || str2.capacity(&str2) != 0 || !str2.is_empty(&str2) || !str2.is_null(&str2))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.size()      = " << str2.size(&str2) << "\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity()  = " << str2.capacity(&str2) << "\t:: must be 0" << std::endl;
	std::cout << "\t!str.is_empty() = " << !str2.is_empty(&str2) << "\t:: must be false" << std::endl;
    }

    /*Check 3*/
    char arr3[128]{ "abcde" };
    str3.setdata(&str3, arr3, 5);
    str3.clear(&str3);
    if (str3.size(&str3) != 0 || str3.capacity(&str3) != 0 || !str3.is_empty(&str3) || !str3.is_null(&str3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.size()      = " << str3.size(&str3) << "\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity()  = " << str3.capacity(&str3) << "\t:: must be 0" << std::endl;
	std::cout << "\t!str.is_empty() = " << !str3.is_empty(&str3) << "\t:: must be false" << std::endl;
    }

    c_dstring_destructor(&str0);
    c_dstring_destructor(&str1);
    c_dstring_destructor(&str2);
    c_dstring_destructor(&str3);

    if (result)
	std::cout << "TRUE" << std::endl;
}