//#include "Test_CDString.h"
//
//void Test_CDString::CopyData()
//{
//    std::cout << "\tCopyData()\t\t";
//
//    bool result = true;
//
//    /*Check 0*/
//    char arrDest0[1];
//    c_sstring str0;
//    c_sstring_constructor(&str0);
//    str0.setdata(&str0, arrDest0, 0, 1);
//    char arrSorc0[1]{ 'a' };
//    str0.copy_chararray(&str0, arrSorc0, 1);
//    if (*str0.front(&str0) != 'a' || str0.size(&str0) != 1)
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 0\t" << std::endl;
//	std::cout << "\t*str0.front()   = " << *str0.front(&str0) << "\t:: must be a" << std::endl;
//	std::cout << "\tstr0.size()     = " << str0.size(&str0) << "\t:: must be 1" << std::endl;
//    }
//
//    /*Check 1*/
//    char arrSorc1[128];
//    c_sstring str1;
//    c_sstring_constructor(&str1);
//    str1.setdata(&str1, arrSorc1, 0, 128);
//    char arrDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
//    str1.copy_chararray(&str1, arrDest1, 25);
//    if (*str1.at(&str1, 0) != 'a')
//    {
//	if (result)
//	{
//	    std::cout << "ERROR" << std::endl;
//	    result = false;
//	}
//	std::cout << "\tCheck 1\t" << std::endl;
//	std::cout << "\t*str1.at(0)     = " << *str1.at(&str1, 0) << "\t:: must be a" << std::endl;
//    }
//
//    /*Check 2*/
//    char arrSorc2A[128]{"aaaaaaaaaaaaaaaaaaaaaaaaa"};
//    char arrSorc2B[128] = "";
//    c_sstring str2A;
//    c_sstring_constructor(&str2A);
//    c_sstring str2B;
//    c_sstring_constructor(&str2B);
//    str2A.setdata(&str2A, arrSorc2A, std::strlen(arrSorc2A), 228);
//    str2B.setdata(&str2B, arrSorc2A, 0, 228);
//    str2B.copy_c_sstring(&str2B, &str2A);
//    for (ushint index = 0; index < str2B.size(&str2B); ++index)
//    {
//	if (*str2B.at(&str1, index) != 'a')
//	{
//	    if (result)
//	    {
//		std::cout << "ERROR" << std::endl;
//		result = false;
//	    }
//	    std::cout << "\tCheck 2\t" << std::endl;
//	    std::cout << "\t*str2.at("<<index<<") = " << *str2B.at(&str2B, index) << "\t::must be a" << std::endl;
//	}
//    }
//
//    c_sstring_destructor(&str0);
//    c_sstring_destructor(&str1);
//    c_sstring_destructor(&str2A);
//    c_sstring_destructor(&str2B);
//
//    if (result)
//	std::cout << "TRUE" << std::endl;
//}