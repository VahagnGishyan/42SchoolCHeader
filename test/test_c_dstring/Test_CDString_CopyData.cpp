#include "Test_CDString.h"

void Test_CDString::CopyData()
{
    std::cout << "\tCopyData()\t\t";

    bool result = true;

    c_dstring str0;
    c_dstring str1;
    c_dstring str2A;
    c_dstring str2B;

    c_dstring_constructor(&str0);
    c_dstring_constructor(&str1);
    c_dstring_constructor(&str2B);
    c_dstring_constructor(&str2A);

    /*Check 0*/
    char arrDest0[1];
    str0.setdata(&str0, arrDest0, 0);
    char arrSorc0[1]{ 'a' };
    str0.copy_chararray(&str0, arrSorc0, 1);
    if (*str0.front(&str0) != 'a' || str0.size(&str0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*str0.front()   = " << *str0.front(&str0) << "\t:: must be a" << std::endl;
	std::cout << "\tstr0.size()     = " << str0.size(&str0) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    char arrSorc1[128];
    str1.setdata(&str1, arrSorc1, 0);
    char arrDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    str1.copy_chararray(&str1, arrDest1, 25);
    if (*str1.at(&str1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t*str1.at(0)     = " << *str1.at(&str1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    char arrSorc2A[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaa" };
    char arrSorc2B[128] = "";
    str2A.setdata(&str2A, arrSorc2A, std::strlen(arrSorc2A));
    str2B.setdata(&str2B, arrSorc2A, 0);
    str2B.copy_c_dstring(&str2B, &str2A);
    for (ushint index = 0; index < str2B.size(&str2B); ++index)
    {
	if (*str2B.at(&str2B, index) != 'a')
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*str2.at(" << index << ") = " << *str2B.at(&str2B, index) << "\t::must be a" << std::endl;
	}
    }

    c_dstring_destructor(&str0);
    c_dstring_destructor(&str1);
    c_dstring_destructor(&str2A);
    c_dstring_destructor(&str2B);

    if (result)
	std::cout << "TRUE" << std::endl;
}