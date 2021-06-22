#include "test_string.h"

void Test_CSString::ConvertToInt()
{
    std::cout << "\tConvertToInt()\t\t";

    bool result = true;

    /*Check 0*/
    char arr0[1] = { '5' };
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0, arr0, 1, 1);
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
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, std::strlen(arr1), 128);
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
    c_sstring str2;
    c_sstring_initaliaztion(&str2);
    str2.constructor(&str2, arr2, std::strlen(arr2), 228);
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
    c_sstring str3;
    c_sstring_initaliaztion(&str3);
    str3.constructor(&str3, arr3, std::strlen(arr3), 338);
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

    str0.destructor(&str0);
    str1.destructor(&str1);
    str2.destructor(&str2);
    str3.destructor(&str3);

    if (result)
	std::cout << "TRUE" << std::endl;
}