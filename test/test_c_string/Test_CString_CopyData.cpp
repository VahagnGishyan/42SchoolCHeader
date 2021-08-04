#include "Test_CString.h"

void Test_CString::CopyData()
{
    std::cout << "\tCopyData()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2A;
    c_string strs2B;

    c_string strd0;
    c_string strd1;
    c_string strd2A;
    c_string strd2B;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2B);
    c_string_constructor(&strs2A);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2B);
    c_string_constructor(&strd2A);

    /*Check 0*/
    char arrDest0[1];
    strs0.setdata(&strs0, arrDest0, 0, 1);
    char arrSorc0[1]{ 'a' };
    strs0.copy_chararray(&strs0, arrSorc0, 1);
    if (*strs0.front(&strs0) != 'a' || strs0.size(&strs0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*strs0.front()   = " << *strs0.front(&strs0) << "\t:: must be a" << std::endl;
	std::cout << "\tstrs0.size()     = " << strs0.size(&strs0) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    char arrSorc1[128];
    strs1.setdata(&strs1, arrSorc1, 0, 128);
    char arrDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strs1.copy_chararray(&strs1, arrDest1, 25);
    if (*strs1.at(&strs1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t*strs1.at(0)     = " << *strs1.at(&strs1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    char arrSorc2A[128]{"aaaaaaaaaaaaaaaaaaaaaaaaa"};
    char arrSorc2B[128] = "";
    strs2A.setdata(&strs2A, arrSorc2A, std::strlen(arrSorc2A), 228);
    strs2B.setdata(&strs2B, arrSorc2A, 0, 228);
    strs2B.copy_c_string(&strs2B, &strs2A);
    for (int index = 0; index < strs2B.size(&strs2B); ++index)
    {
	if (*strs2B.at(&strs2B, index) != 'a')
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strs2.at("<<index<<") = " << *strs2B.at(&strs2B, index) << "\t::must be a" << std::endl;
	}
    }

    /*Check 0*/
    char arrdDest0[1];
    strd0.copy_chararray(&strd0, arrdDest0, 0);
    char arrdSorc0[1]{ 'a' };
    strd0.copy_chararray(&strd0, arrdSorc0, 1);
    if (*strd0.front(&strd0) != 'a' || strd0.size(&strd0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*strd0.front()   = " << *strd0.front(&strd0) << "\t:: must be a" << std::endl;
	std::cout << "\tstrd0.size()     = " << strd0.size(&strd0) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    char arrdSorc1[128];
    strd1.copy_chararray(&strd1, arrdSorc1, 0);
    char arrdDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strd1.copy_chararray(&strd1, arrdDest1, 25);
    if (*strd1.at(&strd1, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t*strd1.at(0)     = " << *strd1.at(&strd1, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    char arrdSorc2A[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaa" };
    char arrdSorc2B[128] = "";
    strd2A.copy_chararray(&strd2A, arrdSorc2A, std::strlen(arrdSorc2A));
    strd2B.copy_chararray(&strd2B, arrdSorc2A, 0);
    strd2B.copy_c_string(&strd2B, &strd2A);
    for (int index = 0; index < strd2B.size(&strd2B); ++index)
    {
	if (*strd2B.at(&strd1, index) != 'a')
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strd2.at(" << index << ") = " << *strd2B.at(&strd2B, index) << "\t::must be a" << std::endl;
	}
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2A);
    c_string_destructor(&strs2B);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2A);
    c_string_destructor(&strd2B);

    if (result)
	std::cout << "TRUE" << std::endl;
}