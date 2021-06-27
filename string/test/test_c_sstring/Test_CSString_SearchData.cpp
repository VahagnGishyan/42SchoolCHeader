#include "Test_CSString.h"

void Test_CSString::Search()
{
    std::cout << "\tSearch()\t\t";

    bool result = true;


    c_sstring str0;
    c_sstring str1;
    c_sstring str2;
    c_sstring str3;
    c_sstring str4;
    c_sstring str5;
    c_sstring str6;
    c_sstring str7;

    c_sstring_constructor(&str0);
    c_sstring_constructor(&str1);
    c_sstring_constructor(&str2);
    c_sstring_constructor(&str3);
    c_sstring_constructor(&str4);
    c_sstring_constructor(&str5);
    c_sstring_constructor(&str6);
    c_sstring_constructor(&str7);

    /*Check 0*/
    char arr0[1] = { 'V' };
    char symbol0 = { 'V' };
    str0.setdata(&str0, arr0, 1, 1);
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
    str1.setdata(&str1, arr1, 1, 1);
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
    str2.setdata(&str2, arr2, 2, 128);
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
    str3.setdata(&str3, arr3, 3, 128);
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
    str4.setdata(&str4, arr4A, 4, 148);
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
    str5.setdata(&str5, arr5A, 5, 158);
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
    str6.setdata(&str6, arr6A, 6, 168);
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
    str7.setdata(&str7, arr7A, 7, 178);
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

    c_sstring_destructor(&str0);
    c_sstring_destructor(&str1);
    c_sstring_destructor(&str2);
    c_sstring_destructor(&str3);
    c_sstring_destructor(&str4);
    c_sstring_destructor(&str5);
    c_sstring_destructor(&str6);
    c_sstring_destructor(&str7);

    if (result)
	std::cout << "TRUE" << std::endl;
}