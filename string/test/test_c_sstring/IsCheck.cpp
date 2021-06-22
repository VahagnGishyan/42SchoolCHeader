#include "test_string.h"

void Test_CSString::IsCheck()
{
    std::cout << "\tIsCheck()\t\t";

    bool result = true;

    /*Check 0*/
    char arr0[128] = "Vahagn";
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0, arr0, 6, 128);
    if (!str0.is_alpha(&str0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << str0.is_alpha(&str0) << "\t:: must be " << true << std::endl;
    }



    /*Check 1*/
    char arr1[128]{ 'V' };
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, 1, 128);
    if (!str1.is_alpha(&str1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << str1.is_alpha(&str1) << "\t:: must be " << true << std::endl;
    }

    /*Check 2*/
    char arr2[128] = "Vahagn";
    c_sstring str2;
    c_sstring_initaliaztion(&str2);
    str2.constructor(&str2, arr2, 6, 128);
    if (!str2.is_alnum(&str2))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << str2.is_alnum(&str2) << "\t:: must be " << true << std::endl;
    }

    /*Check 3*/
    char arr3[128] = "Vahagn";
    c_sstring str3;
    c_sstring_initaliaztion(&str3);
    str3.constructor(&str3, arr3, 6, 128);
    if (!str3.is_alnum(&str3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << str3.is_alnum(&str3) << "\t:: must be " << true << std::endl;
    }

    /*Check 4*/
    char arr4[128] = "0123456789";
    c_sstring str4;
    c_sstring_initaliaztion(&str4);
    str4.constructor(&str4, arr4, 10, 128);
    if (!str4.is_alnum(&str4))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstr4.is_alnum()) = " << str4.is_alnum(&str4) << "\t:: must be " << true << std::endl;
    }

    /*Check 5*/
    char arr5[128] = "0123456789";
    c_sstring str5;
    c_sstring_initaliaztion(&str5);
    str5.constructor(&str5, arr5, 10, 128);
    if (!str5.is_digit(&str5))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr5.is_digit()) = " << str5.is_digit(&str5) << "\t:: must be " << true << std::endl;
    }

    /*Check 6*/
    char arr6[128] = "ABCDEF0123456789";
    c_sstring str6;
    c_sstring_initaliaztion(&str6);
    str6.constructor(&str6, arr6, 16, 128);
    if (!str6.is_alnum(&str6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << str6.is_alnum(&str6) << "\t:: must be " << true << std::endl;
    }

    /*Check 7*/
    char arr7[128] = "ABCDEF0123456789&^%/";
    c_sstring str7;
    c_sstring_initaliaztion(&str7);
    str7.constructor(&str7, arr7, 20, 128);
    if (str7.is_alnum(&str7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << str7.is_alnum(&str7) << "\t:: must be " << false << std::endl;
    }

    /*Check 8*/
    char arr8[128] = "		";
    c_sstring str8;
    c_sstring_initaliaztion(&str8);
    str8.constructor(&str8, arr8, 2, 128);
    if (str8.is_print(&str8))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << str8.is_print(&str8) << "\t:: must be " << false << std::endl;
    }

    /*Check 9*/
    char arr9[128] = "		";
    c_sstring str9;
    c_sstring_initaliaztion(&str9);
    str9.constructor(&str9, arr9, 2, 128);
    if (str9.is_print(&str9))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 9\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << str9.is_print(&str9) << "\t:: must be " << false << std::endl;
    }

    /*Check 10*/
    char arr10[128] = "";
    c_sstring str10;
    c_sstring_initaliaztion(&str10);
    str10.constructor(&str10, arr10, 0, 128);
    if (!str10.is_empty(&str10))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 10\t" << std::endl;
	std::cout << "\tstr.is_empty()) = " << str10.is_empty(&str10) << "\t:: must be " << true << std::endl;
    }

    /*Check 11*/
    char arr11[128] = "	a	";
    c_sstring str11;
    c_sstring_initaliaztion(&str11);
    str11.constructor(&str11, arr11, 3, 128);
    if (str11.is_print(&str11))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 11\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << str11.is_print(&str11) << "\t:: must be " << false << std::endl;
    }

    str0.destructor(&str0);
    str1.destructor(&str1);
    str2.destructor(&str2);
    str3.destructor(&str3);
    str4.destructor(&str4);
    str5.destructor(&str5);
    str6.destructor(&str6);
    str7.destructor(&str7);
    str8.destructor(&str8);
    str9.destructor(&str9);
    str10.destructor(&str10);
    str11.destructor(&str11);

    if (result)
	std::cout << "TRUE" << std::endl;
}