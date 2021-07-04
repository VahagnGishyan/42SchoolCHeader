#include "Test_CString.h"

void Test_CString::Compare()
{
    std::cout << "\tCompare()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;
    c_string strs4A;
    c_string strs4B;
    c_string strs5A;
    c_string strs5B;
    c_string strs6A;
    c_string strs6B;
    c_string strs7A;
    c_string strs7B;

    c_string strd0;
    c_string strd1;
    c_string strd2;
    c_string strd3;
    c_string strd4A;
    c_string strd4B;
    c_string strd5A;
    c_string strd5B;
    c_string strd6A;
    c_string strd6B;
    c_string strd7A;
    c_string strd7B;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);
    c_string_constructor(&strs4A);
    c_string_constructor(&strs4B);
    c_string_constructor(&strs5A);
    c_string_constructor(&strs5B);
    c_string_constructor(&strs6A);
    c_string_constructor(&strs6B);
    c_string_constructor(&strs7A);
    c_string_constructor(&strs7B);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);
    c_string_constructor(&strd3);
    c_string_constructor(&strd4A);
    c_string_constructor(&strd4B);
    c_string_constructor(&strd5A);
    c_string_constructor(&strd5B);
    c_string_constructor(&strd6A);
    c_string_constructor(&strd6B);
    c_string_constructor(&strd7A);
    c_string_constructor(&strd7B);

    /*Check 0*/
    char arrs0A[1] = { 'V' };
    char arrs0B[1] = { 'V' };
    strs0.setdata(&strs0,arrs0A, 1, 128);
    if (strs0.compare_chararray(&strs0,arrs0A, 1) || strs0.compare_chararray(&strs0, arrs0B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsA)  = " << strs0.compare_chararray(&strs0, arrs0A, 1) <<
		    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsB)  = " << strs0.compare_chararray(&strs0, arrs0B, 1) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    char arrs1A[1] = { 'V' };
    char arrs1B[1] = { 'A' };
    strs1.setdata(&strs1, arrs1A, 1, 128);
    if (strs1.compare_chararray(&strs1, arrs1A, 1) || !strs1.compare_chararray(&strs1, arrs1B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsA)  = " << strs1.compare_chararray(&strs1, arrs1A, 1) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsB)  = " << strs1.compare_chararray(&strs1, arrs1B, 1) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 2*/
    char arrs2A[128] = { "VAHAGN" };
    char arrs2B[128] = { "VAHAGN" };
    strs2.setdata(&strs2, arrs2A, 6, 228);
    if (strs2.compare_chararray(&strs2, arrs2A, 6) || strs2.compare_chararray(&strs2, arrs2B, 6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsA)  = " << strs2.compare_chararray(&strs2, arrs2A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsB)  = " << strs2.compare_chararray(&strs2, arrs2B, 6) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 3*/
    char arrs3A[128] = { "VAHAGN" };
    char arrs3B[128] = { "VAHAGNA" };
    strs3.setdata(&strs3, arrs3A, 6, 338);
    if (strs3.compare_chararray(&strs3, arrs3A, 6) || !strs3.compare_chararray(&strs3, arrs3B, 7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsA)  = " << strs3.compare_chararray(&strs3, arrs3A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_chararrsay(arrsB)  = " << strs3.compare_chararray(&strs3, arrs3B, 7) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 4*/
    char arrs4A[4] = { 'V' };
    char arrs4B[4] = { 'V' };
    strs4A.setdata(&strs4A, arrs4A, 1, 428);
    strs4B.setdata(&strs4B, arrs4B, 1, 428);
    if (strs4A.compare_c_string(&strs4A, &strs4B) || strs4B.compare_c_string(&strs4B, &strs4A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsB)  = " << strs4A.compare_c_string(&strs4A, &strs4B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsA)  = " << strs4B.compare_c_string(&strs4B, &strs4A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    char arrs5A[1] = { 'V' };
    char arrs5B[1] = { 'A' };
    strs5A.setdata(&strs5A,arrs5A, 1, 1);
    strs5B.setdata(&strs5B, arrs5B, 1, 1);
    if (!strs5A.compare_c_string(&strs5A, &strs5B) || !strs5B.compare_c_string(&strs5B, &strs5A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsB)  = " << strs5A.compare_c_string(&strs5A, &strs5B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsA)  = " << strs5B.compare_c_string(&strs5B, &strs5A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 6*/
    char arrs6A[128] = { "VAHAGN" };
    char arrs6B[128] = { "VAHAGN" };
    strs6A.setdata(&strs6A, arrs6A, 6, 128);
    strs6B.setdata(&strs6B, arrs6B, 6, 128);
    if (strs6A.compare_c_string(&strs6A, &strs6B) || strs6B.compare_c_string(&strs6B, &strs6A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsB)   = " << strs6A.compare_c_string(&strs6A, &strs6B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsA)   = " << strs6B.compare_c_string(&strs6B, &strs6A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 7*/
    char arrs7A[128] = { "VAHAGN" };
    char arrs7B[128] = { "VAHAGNA" };
    strs7A.setdata(&strs7A, arrs7A, 6, 128);
    strs7B.setdata(&strs7B, arrs7B, 7, 128);
    if (!strs7A.compare_c_string(&strs7A, &strs7B) || !strs7B.compare_c_string(&strs7B, &strs7A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsB)  = " << strs7A.compare_c_string(&strs7A, &strs7B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.compare_c_strsing(strsA)  = " << strs7B.compare_c_string(&strs7B, &strs7A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 0*/
    char arrd0A[1] = { 'V' };
    char arrd0B[1] = { 'V' };
    strd0.copy_chararray(&strd0, arrd0A, 1);
    if (strd0.compare_chararray(&strd0, arrd0A, 1) || strd0.compare_chararray(&strd0, arrd0B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdA)  = " << strd0.compare_chararray(&strd0, arrd0A, 1) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdB)  = " << strd0.compare_chararray(&strd0, arrd0B, 1) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    char arrd1A[1] = { 'V' };
    char arrd1B[1] = { 'A' };
    strd1.copy_chararray(&strd1, arrd1A, 1);
    if (strd1.compare_chararray(&strd1, arrd1A, 1) || !strd1.compare_chararray(&strd1, arrd1B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdA)  = " << strd1.compare_chararray(&strd1, arrd1A, 1) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdB)  = " << strd1.compare_chararray(&strd1, arrd1B, 1) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 2*/
    char arrd2A[128] = { "VAHAGN" };
    char arrd2B[128] = { "VAHAGN" };
    strd2.copy_chararray(&strd2, arrd2A, 6);
    if (strd2.compare_chararray(&strd2, arrd2A, 6) || strd2.compare_chararray(&strd2, arrd2B, 6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdA)  = " << strd2.compare_chararray(&strd2, arrd2A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdB)  = " << strd2.compare_chararray(&strd2, arrd2B, 6) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 3*/
    char arrd3A[128] = { "VAHAGN" };
    char arrd3B[128] = { "VAHAGNA" };
    strd3.copy_chararray(&strd3, arrd3A, 6);
    if (strd3.compare_chararray(&strd3, arrd3A, 6) || !strd3.compare_chararray(&strd3, arrd3B, 7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdA)  = " << strd3.compare_chararray(&strd3, arrd3A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_chararray(arrdB)  = " << strd3.compare_chararray(&strd3, arrd3B, 7) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 4*/
    char arrd4A[4] = { 'V' };
    char arrd4B[4] = { 'V' };
    strd4A.copy_chararray(&strd4A, arrd4A, 1);
    strd4B.copy_chararray(&strd4B, arrd4B, 1);
    if (strd4A.compare_c_string(&strd4A, &strd4B) || strd4B.compare_c_string(&strd4B, &strd4A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdB)  = " << strd4A.compare_c_string(&strd4A, &strd4B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdA)  = " << strd4B.compare_c_string(&strd4B, &strd4A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    char arrd5A[1] = { 'V' };
    char arrd5B[1] = { 'A' };
    strd5A.copy_chararray(&strd5A, arrd5A, 1);
    strd5B.copy_chararray(&strd5B, arrd5B, 1);
    if (!strd5A.compare_c_string(&strd5A, &strd5B) || !strd5B.compare_c_string(&strd5B, &strd5A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdB)  = " << strd5A.compare_c_string(&strd5A, &strd5B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdA)  = " << strd5B.compare_c_string(&strd5B, &strd5A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 6*/
    char arrd6A[128] = { "VAHAGN" };
    char arrd6B[128] = { "VAHAGN" };
    strd6A.copy_chararray(&strd6A, arrd6A, 6);
    strd6B.copy_chararray(&strd6B, arrd6B, 6);
    if (strd6A.compare_c_string(&strd6A, &strd6B) || strd6B.compare_c_string(&strd6B, &strd6A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdB)   = " << strd6A.compare_c_string(&strd6A, &strd6B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstrd.compare_c_strding(strdA)   = " << strd6B.compare_c_string(&strd6B, &strd6A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 7*/
    char arrd7A[128] = { "VAHAGN" };
    char arrd7B[128] = { "VAHAGNA" };
    strd7A.copy_chararray(&strd7A, arrd7A, 6);
    strd7B.copy_chararray(&strd7B, arrd7B, 7);
    if (!strd7A.compare_c_string(&strd7A, &strd7B) || !strd7B.compare_c_string(&strd7B, &strd7A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.compare_c_string(strB)  = " << strd7A.compare_c_string(&strd7A, &strd7B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_c_string(strA)  = " << strd7B.compare_c_string(&strd7B, &strd7A) <<
	    "\t:: must be 0" << std::endl;
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);
    c_string_destructor(&strs4A);
    c_string_destructor(&strs4B);
    c_string_destructor(&strs5A);
    c_string_destructor(&strs5B);
    c_string_destructor(&strs6A);
    c_string_destructor(&strs6B);
    c_string_destructor(&strs7A);
    c_string_destructor(&strs7B);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);
    c_string_destructor(&strd3);
    c_string_destructor(&strd4A);
    c_string_destructor(&strd4B);
    c_string_destructor(&strd5A);
    c_string_destructor(&strd5B);
    c_string_destructor(&strd6A);
    c_string_destructor(&strd6B);
    c_string_destructor(&strd7A);
    c_string_destructor(&strd7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}