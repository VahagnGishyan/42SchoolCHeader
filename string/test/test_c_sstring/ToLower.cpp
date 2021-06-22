#include "test_string.h"

void Test_CSString::ToLower()
{
    std::cout << "\tToLower()\t\t";

    bool result = true;

    /*Check 0*/
    char arr0A[1] = { 'V' };
    char arr0B[128];
    c_sstring str0A;
    c_sstring_initaliaztion(&str0A);
    c_sstring str0B;
    c_sstring_initaliaztion(&str0B);
    str0A.constructor(&str0A, arr0A, 1, 1);
    str0A.to_lower_chararray(&str0A, arr0B);
    str0B.constructor(&str0B, arr0B, 1, 128);
    std::string data0{ 'v' };
    for (ushint index = 0; index < str0B.size(&str0B); ++index)
    {
	if (*str0B.at(&str0B, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*str0.at(" << index << ") = " << *str0B.at(&str0B, index) << "\t:: must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arr1A[128] = { "VAHAGNGISHYAN" };
    char arr1B[128];
    c_sstring str1A;
    c_sstring_initaliaztion(&str1A);
    c_sstring str1B;
    c_sstring_initaliaztion(&str1B);
    str1A.constructor(&str1B, arr1A, std::strlen(arr1A), 128);
    str1A.to_lower_chararray(&str1B, arr1B);
    str1B.constructor(&str1B, arr1B, std::strlen(arr1B), 128);
    std::string data1{ "vahagngishyan" };
    for (ushint index = 1; index < str1B.size(&str1B); ++index)
    {
	if (*str1B.at(&str1B, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\t*str1.at(" << index << ") = " << *str1B.at(&str1B, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arr2A[228] = { "VAHAGN GISHYAN" };
    char arr2B[228];
    c_sstring str2A;
    c_sstring_initaliaztion(&str2A);
    c_sstring str2B;
    c_sstring_initaliaztion(&str2B);
    str2A.constructor(&str2A, arr2A, std::strlen(arr2A), 128);
    str2A.to_lower_chararray(&str2A, arr2B);
    str2B.constructor(&str2B, arr2B, std::strlen(arr2B), 228);
    std::string data2{ "vahagn gishyan" };
    for (ushint index = 2; index < str2B.size(&str2B); ++index)
    {
	if (*str2B.at(&str2B, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*str2.at(" << index << ") = " << *str2B.at(&str2A, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    /*Check 3*/
    char arr3A[338] = { "VAHAGN GISHYAN" };
    char arr3B[338];
    c_sstring str3A;
    c_sstring_initaliaztion(&str3A);
    c_sstring str3B;
    c_sstring_initaliaztion(&str3B);
    str3A.constructor(&str3A, arr3A, std::strlen(arr2A), 125);
    str3A.to_lower_chararray(&str3A, arr3B);
    str3B.constructor(&str3B, arr3B, std::strlen(arr3B), 338);
    std::string data3{ "vahagn gishyan" };
    for (ushint index = 3; index < str3B.size(&str3B); ++index)
    {
	if (*str3B.at(&str3B, index) != data3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t*str3.at(" << index << ") = " << *str3B.at(&str3B, index) << "\t:: must be "
		<< data3[index] << std::endl;
	}
    }

    /*Check 4*/
    char arr4A[448] = { "VAHAGN GISHYAN 456" };
    char arr4B[448];
    c_sstring str4A;
    c_sstring_initaliaztion(&str4A);
    c_sstring str4B;
    c_sstring_initaliaztion(&str4B);
    str4A.constructor(&str4A, arr4A, std::strlen(arr4A), 125);
    str4A.to_lower_chararray(&str4A, arr4B);
    str4B.constructor(&str4B, arr4B, std::strlen(arr4B), 448);
    std::string data4{ "vahagn gishyan 456" };
    for (ushint index = 4; index < str4B.size(&str4B); ++index)
    {
	if (*str4B.at(&str4B, index) != data4[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\t*str4.at(" << index << ") = " << *str4B.at(&str4B, index) << "\t:: must be "
		<< data4[index] << std::endl;
	}
    }

    /*Check 5*/
    char arr5A[558] = { "VAHAGN GISHYAN 556 ^&*" };
    char arr5B[558];
    c_sstring str5A;
    c_sstring_initaliaztion(&str5A);
    c_sstring str5B;
    c_sstring_initaliaztion(&str5B);
    str5A.constructor(&str5A, arr5A, std::strlen(arr5A), 125);
    str5A.to_lower_chararray(&str5A, arr5B);
    str5B.constructor(&str5B, arr5B, std::strlen(arr5B), 558);
    std::string data5{ "vahagn gishyan 556 ^&*" };
    for (ushint index = 5; index < str5B.size(&str5B); ++index)
    {
	if (*str5B.at(&str5B, index) != data5[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\t*str5.at(" << index << ") = " << *str5B.at(&str5B, index) << "\t:: must be "
		<< data5[index] << std::endl;
	}
    }

    str0A.destructor(&str0A);
    str0B.destructor(&str0B);
    str1A.destructor(&str1A);
    str0B.destructor(&str1B);
    str2A.destructor(&str2A);
    str2B.destructor(&str2B);
    str3A.destructor(&str3A);
    str3B.destructor(&str3B);
    str4A.destructor(&str4A);
    str4B.destructor(&str4B);
    str5A.destructor(&str5A);
    str5B.destructor(&str5B);

    if (result)
	std::cout << "TRUE" << std::endl;
}