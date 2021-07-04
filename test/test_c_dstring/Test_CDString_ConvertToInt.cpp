#include "Test_CDString.h"

void Test_CDString::ConvertToInt()
{
    std::cout << "\tConvertToInt()\t\t";

    bool result = true;

    c_dstring str0;
    c_dstring str1;
    c_dstring str2;
    c_dstring str3;
    c_dstring str4A;
    c_dstring str4B;
    c_dstring str5A;
    c_dstring str5B;
    c_dstring str6A;
    c_dstring str6B;
    c_dstring str7A;
    c_dstring str7B;

    c_dstring_constructor(&str0);
    c_dstring_constructor(&str1);
    c_dstring_constructor(&str2);
    c_dstring_constructor(&str3);
    c_dstring_constructor(&str4A);
    c_dstring_constructor(&str4B);
    c_dstring_constructor(&str5A);
    c_dstring_constructor(&str5B);
    c_dstring_constructor(&str6A);
    c_dstring_constructor(&str6B);
    c_dstring_constructor(&str7A);
    c_dstring_constructor(&str7B);

    /*Check 0*/
    char arr0[1] = { '5' };
    str0.setdata(&str0, arr0, 1);
    int x0;
    str0.convert_to_int(&str0, &x0);
    if (x0 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << x0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    char arr1[128] = { "5" };
    str1.setdata(&str1, arr1, std::strlen(arr1));
    int x1;
    str1.convert_to_int(&str1, &x1);
    if (x1 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << x1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 2*/
    char arr2[228] = { "51286" };
    str2.setdata(&str2, arr2, std::strlen(arr2));
    int x2;
    str2.convert_to_int(&str2, &x2);
    if (x2 != 51286)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr2.convert_to_int(...) = " << x2 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 3*/
    char arr3[338] = { "51386A" };
    str3.setdata(&str3, arr3, std::strlen(arr3));
    int x3;
    str3.convert_to_int(&str3, &x3);
    if (x3 != std::stoi(arr3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr3.convert_to_int(...) = " << x3 << "\t:: must be " << 5 << std::endl;
    }

    c_dstring_destructor(&str0);
    c_dstring_destructor(&str1);
    c_dstring_destructor(&str2);
    c_dstring_destructor(&str3);
    c_dstring_destructor(&str4A);
    c_dstring_destructor(&str4B);
    c_dstring_destructor(&str5A);
    c_dstring_destructor(&str5B);
    c_dstring_destructor(&str6A);
    c_dstring_destructor(&str6B);
    c_dstring_destructor(&str7A);
    c_dstring_destructor(&str7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}