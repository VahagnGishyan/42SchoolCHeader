//#include "Test_CDString.h"
//
//void Test_CDString::IsCheck()
//{
//    std::cout << "\tIsCheck()\t\t";
//
//    bool result = true;
//
//    /*Check 0*/
//    char arr0[128] = "Vahagn";
//    c_sstring str0;
//    c_sstring_constructor(&str0);
//    str0.setdata(&str0, arr0, 6, 128);
//    if (!str0.is_alpha(&str0))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 0\t" << std::endl;
//	std::cout << "\tstr.is_alpha()) = " << str0.is_alpha(&str0) << "\t:: must be " << true << std::endl;
//    }
//
//
//
//    /*Check 1*/
//    char arr1[128]{ 'V' };
//    c_sstring str1;
//    c_sstring_constructor(&str1);
//    str1.setdata(&str1, arr1, 1, 128);
//    if (!str1.is_alpha(&str1))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 1\t" << std::endl;
//	std::cout << "\tstr.is_alpha()) = " << str1.is_alpha(&str1) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 2*/
//    char arr2[128] = "Vahagn";
//    c_sstring str2;
//    c_sstring_constructor(&str2);
//    str2.setdata(&str2, arr2, 6, 128);
//    if (!str2.is_alnum(&str2))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 2\t" << std::endl;
//	std::cout << "\tstr.is_alpha()) = " << str2.is_alnum(&str2) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 3*/
//    char arr3[128] = "Vahagn";
//    c_sstring str3;
//    c_sstring_constructor(&str3);
//    str3.setdata(&str3, arr3, 6, 128);
//    if (!str3.is_alnum(&str3))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 3\t" << std::endl;
//	std::cout << "\tstr.is_alnum()) = " << str3.is_alnum(&str3) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 4*/
//    char arr4[128] = "0123456789";
//    c_sstring str4;
//    c_sstring_constructor(&str4);
//    str4.setdata(&str4, arr4, 10, 128);
//    if (!str4.is_alnum(&str4))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 4\t" << std::endl;
//	std::cout << "\tstr4.is_alnum()) = " << str4.is_alnum(&str4) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 5*/
//    char arr5[128] = "0123456789";
//    c_sstring str5;
//    c_sstring_constructor(&str5);
//    str5.setdata(&str5, arr5, 10, 128);
//    if (!str5.is_digit(&str5))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 5\t" << std::endl;
//	std::cout << "\tstr5.is_digit()) = " << str5.is_digit(&str5) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 6*/
//    char arr6[128] = "ABCDEF0123456789";
//    c_sstring str6;
//    c_sstring_constructor(&str6);
//    str6.setdata(&str6, arr6, 16, 128);
//    if (!str6.is_alnum(&str6))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 7\t" << std::endl;
//	std::cout << "\tstr.is_alnum()) = " << str6.is_alnum(&str6) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 7*/
//    char arr7[128] = "ABCDEF0123456789&^%/";
//    c_sstring str7;
//    c_sstring_constructor(&str7);
//    str7.setdata(&str7, arr7, 20, 128);
//    if (str7.is_alnum(&str7))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 7\t" << std::endl;
//	std::cout << "\tstr.is_alnum()) = " << str7.is_alnum(&str7) << "\t:: must be " << false << std::endl;
//    }
//
//    /*Check 8*/
//    char arr8[128] = "		";
//    c_sstring str8;
//    c_sstring_constructor(&str8);
//    str8.setdata(&str8, arr8, 2, 128);
//    if (str8.is_print(&str8))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 8\t" << std::endl;
//	std::cout << "\tstr.is_print()) = " << str8.is_print(&str8) << "\t:: must be " << false << std::endl;
//    }
//
//    /*Check 9*/
//    char arr9[128] = "		";
//    c_sstring str9;
//    c_sstring_constructor(&str9);
//    str9.setdata(&str9, arr9, 2, 128);
//    if (str9.is_print(&str9))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 9\t" << std::endl;
//	std::cout << "\tstr.is_print()) = " << str9.is_print(&str9) << "\t:: must be " << false << std::endl;
//    }
//
//    /*Check 10*/
//    char arr10[128] = "";
//    c_sstring str10;
//    c_sstring_constructor(&str10);
//    str10.setdata(&str10, arr10, 0, 128);
//    if (!str10.is_empty(&str10))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 10\t" << std::endl;
//	std::cout << "\tstr.is_empty()) = " << str10.is_empty(&str10) << "\t:: must be " << true << std::endl;
//    }
//
//    /*Check 11*/
//    char arr11[128] = "	a	";
//    c_sstring str11;
//    c_sstring_constructor(&str11);
//    str11.setdata(&str11, arr11, 3, 128);
//    if (str11.is_print(&str11))
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 11\t" << std::endl;
//	std::cout << "\tstr.is_print()) = " << str11.is_print(&str11) << "\t:: must be " << false << std::endl;
//    }
//
//    c_sstring_destructor(&str0);
//    c_sstring_destructor(&str1);
//    c_sstring_destructor(&str2);
//   c_sstring_destructor(&str3);
//    c_sstring_destructor(&str4);
//    c_sstring_destructor(&str5);
//    c_sstring_destructor(&str6);
//    c_sstring_destructor(&str7);
//    c_sstring_destructor(&str8);
//    c_sstring_destructor(&str9);
//    c_sstring_destructor(&str10);
//    c_sstring_destructor(&str11);
//
//    if (result)
//	std::cout << "TRUE" << std::endl;
//}