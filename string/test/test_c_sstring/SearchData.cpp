#include "test_string.h"

void Test_CSString::Search()
{
    std::cout << "\tSearch()\t\t";

    bool result = true;

    /*Check 0*/
    char arr0[1] = { 'V' };
    char symbol0 = { 'V' };
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0, arr0, 1, 1);
    if (*str0.search_char(&str0, symbol0) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str0.search_char(&str0, symbol0) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 1*/
    char arr1[1] = { 'V' };
    char symbol1 = { 'A' };
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, 1, 1);
    if (str1.search_char(&str1, symbol1) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str1.search_char(&str0, symbol1) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 2*/
    char arr2[128] = { "VAHAGN" };
    char symbol2 = { 'A' };
    c_sstring str2;
    c_sstring_initaliaztion(&str2);
    str2.constructor(&str2, arr2, 2, 128);
    if (*str2.search_char(&str2, symbol2) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str2.search_char(&str2, symbol2) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 3*/
    char arr3[128] = { "VAHAGN" };
    char symbol3 = { 'P' };
    c_sstring str3;
    c_sstring_initaliaztion(&str3);
    str3.constructor(&str3, arr3, 3, 128);
    if (str3.search_char(&str3, symbol3) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str3.search_char(&str3, symbol3) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 4*/
    char arr4A[128] = { "VAHAGN" };
    char arr4B[128] = { "VAH" };
    c_sstring str4;
    c_sstring_initaliaztion(&str4);
    str4.constructor(&str4, arr4A, 4, 148);
    if (*str4.search_chararray(&str4, arr4B, ft_strlen(arr4B)) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str4.search_chararray(&str4, arr4B, ft_strlen(arr4B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 5*/
    char arr5A[128] = { "VAHAGN" };
    char arr5B[128] = { "AH" };
    c_sstring str5;
    c_sstring_initaliaztion(&str5);
    str5.constructor(&str5, arr5A, 5, 158);
    if (*str5.search_chararray(&str5, arr5B, ft_strlen(arr5B)) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str5.search_chararray(&str5, arr5B, ft_strlen(arr5B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 6*/
    char arr6A[128] = { "VAHAGN" };
    char arr6B[128] = { "GB" };
    c_sstring str6;
    c_sstring_initaliaztion(&str6);
    str6.constructor(&str6, arr6A, 6, 168);
    if (str6.search_chararray(&str6, arr6B, ft_strlen(arr6B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str6.search_chararray(&str6, arr6B, ft_strlen(arr6B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 7*/
    char arr7A[128] = { "VAHAGN" };
    char arr7B[128] = { "GB" };
    c_sstring str7;
    c_sstring_initaliaztion(&str7);
    str7.constructor(&str7, arr7A, 7, 178);
    if (str7.search_chararray(&str7, arr7B, ft_strlen(arr7B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\t(str.search_char(symbol)  = " << str7.search_chararray(&str7, arr7B, ft_strlen(arr7B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    str0.destructor(&str0);
    str1.destructor(&str1);
    str2.destructor(&str2);
    str3.destructor(&str3);
    str4.destructor(&str4);
    str5.destructor(&str5);
    str6.destructor(&str6);
    str7.destructor(&str7);

    if (result)
	std::cout << "TRUE" << std::endl;
}