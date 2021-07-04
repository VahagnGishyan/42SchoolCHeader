#include "Test_CString.h"

void Test_CString::IsCheck()
{
    std::cout << "\tIsCheck()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;
    c_string strs4;
    c_string strs5;
    c_string strs6;
    c_string strs7;
    c_string strs8;
    c_string strs9;
    c_string strs10;
    c_string strs11;

    c_string strd0;
    c_string strd1;
    c_string strd2;
    c_string strd3;
    c_string strd4;
    c_string strd5;
    c_string strd6;
    c_string strd7;
    c_string strd8;
    c_string strd9;
    c_string strd10;
    c_string strd11;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);
    c_string_constructor(&strs4);
    c_string_constructor(&strs5);
    c_string_constructor(&strs6);
    c_string_constructor(&strs7);
    c_string_constructor(&strs8);
    c_string_constructor(&strs9);
    c_string_constructor(&strs10);
    c_string_constructor(&strs11);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);
    c_string_constructor(&strd3);
    c_string_constructor(&strd4);
    c_string_constructor(&strd5);
    c_string_constructor(&strd6);
    c_string_constructor(&strd7);
    c_string_constructor(&strd8);
    c_string_constructor(&strd9);
    c_string_constructor(&strd10);
    c_string_constructor(&strd11);

    /*Check 0*/
    char arrs0[128] = "Vahagn";
    strs0.setdata(&strs0, arrs0, 6, 128);
    if (!strs0.is_alpha(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrss.is_alpha()) = " << strs0.is_alpha(&strs0) << "\t:: must be " << true << std::endl;
    }

    /*Check 1*/
    char arrs1[128]{ 'V' };
    strs1.setdata(&strs1, arrs1, 1, 128);
    if (!strs1.is_alpha(&strs1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.is_alpha()) = " << strs1.is_alpha(&strs1) << "\t:: must be " << true << std::endl;
    }

    /*Check 2*/
    char arrs2[128] = "Vahagn";
    strs2.setdata(&strs2, arrs2, 6, 128);
    if (!strs2.is_alnum(&strs2))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.is_alpha()) = " << strs2.is_alnum(&strs2) << "\t:: must be " << true << std::endl;
    }

    /*Check 3*/
    char arrs3[128] = "Vahagn";
    strs3.setdata(&strs3, arrs3, 6, 128);
    if (!strs3.is_alnum(&strs3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.is_alnum()) = " << strs3.is_alnum(&strs3) << "\t:: must be " << true << std::endl;
    }

    /*Check 4*/
    char arrs4[128] = "0123456789";
    strs4.setdata(&strs4, arrs4, 10, 128);
    if (!strs4.is_alnum(&strs4))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrs4.is_alnum()) = " << strs4.is_alnum(&strs4) << "\t:: must be " << true << std::endl;
    }

    /*Check 5*/
    char arrs5[128] = "0123456789";
    strs5.setdata(&strs5, arrs5, 10, 128);
    if (!strs5.is_digit(&strs5))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrs5.is_digit()) = " << strs5.is_digit(&strs5) << "\t:: must be " << true << std::endl;
    }

    /*Check 6*/
    char arrs6[128] = "ABCDEF0123456789";
    strs6.setdata(&strs6, arrs6, 16, 128);
    if (!strs6.is_alnum(&strs6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrs.is_alnum()) = " << strs6.is_alnum(&strs6) << "\t:: must be " << true << std::endl;
    }

    /*Check 7*/
    char arrs7[128] = "ABCDEF0123456789&^%/";
    strs7.setdata(&strs7, arrs7, 20, 128);
    if (strs7.is_alnum(&strs7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrs.is_alnum()) = " << strs7.is_alnum(&strs7) << "\t:: must be " << false << std::endl;
    }

    /*Check 8*/
    char arrs8[128] = "		";
    strs8.setdata(&strs8, arrs8, 2, 128);
    if (strs8.is_print(&strs8))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\tstrs.is_print()) = " << strs8.is_print(&strs8) << "\t:: must be " << false << std::endl;
    }

    /*Check 9*/
    char arrs9[128] = "		";
    strs9.setdata(&strs9, arrs9, 2, 128);
    if (strs9.is_print(&strs9))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 9\t" << std::endl;
	std::cout << "\tstrs.is_print()) = " << strs9.is_print(&strs9) << "\t:: must be " << false << std::endl;
    }

    /*Check 10*/
    char arrs10[128] = "";
    strs10.setdata(&strs10, arrs10, 0, 128);
    if (!strs10.is_empty(&strs10))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 10\t" << std::endl;
	std::cout << "\tstrs.is_empty()) = " << strs10.is_empty(&strs10) << "\t:: must be " << true << std::endl;
    }

    /*Check 11*/
    char arrs11[128] = "	a	";
    strs11.setdata(&strs11, arrs11, 3, 128);
    if (strs11.is_print(&strs11))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 11\t" << std::endl;
	std::cout << "\tstrs.is_print()) = " << strs11.is_print(&strs11) << "\t:: must be " << false << std::endl;
    }

    /*Check 0*/
    char arrd0[128] = "Vahagn";
    strd0.copy_chararray(&strd0, arrd0, 6);
    if (!strs0.is_alpha(&strd0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << strd0.is_alpha(&strd0) << "\t:: must be " << true << std::endl;
    }

    /*Check 1*/
    char arrd1[128]{ 'V' };
    strd1.copy_chararray(&strd1, arrd1, 1);
    if (!strs1.is_alpha(&strd1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << strd1.is_alpha(&strd1) << "\t:: must be " << true << std::endl;
    }

    /*Check 2*/
    char arrd2[128] = "Vahagn";
    strd2.copy_chararray(&strd2, arrd2, 6);
    if (!strs2.is_alnum(&strd2))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.is_alpha()) = " << strd2.is_alnum(&strd2) << "\t:: must be " << true << std::endl;
    }

    /*Check 3*/
    char arrd3[128] = "Vahagn";
    strd3.copy_chararray(&strd3, arrd3, 6);
    if (!strs3.is_alnum(&strd3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << strd3.is_alnum(&strd3) << "\t:: must be " << true << std::endl;
    }

    /*Check 4*/
    char arrd4[128] = "0123456789";
    strd4.copy_chararray(&strd4, arrd4, 10);
    if (!strs4.is_alnum(&strd4))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstr4.is_alnum()) = " << strd4.is_alnum(&strd4) << "\t:: must be " << true << std::endl;
    }

    /*Check 5*/
    char arrd5[128] = "0123456789";
    strd5.copy_chararray(&strd5, arrd5, 10);
    if (!strs5.is_digit(&strd5))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr5.is_digit()) = " << strd5.is_digit(&strd5) << "\t:: must be " << true << std::endl;
    }

    /*Check 6*/
    char arrd6[128] = "ABCDEF0123456789";
    strd6.copy_chararray(&strd6, arrd6, 16);
    if (!strs6.is_alnum(&strd6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << strd6.is_alnum(&strd6) << "\t:: must be " << true << std::endl;
    }

    /*Check 7*/
    char arrd7[128] = "ABCDEF0123456789&^%/";
    strd7.copy_chararray(&strd7, arrd7, 20);
    if (strs7.is_alnum(&strd7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.is_alnum()) = " << strd7.is_alnum(&strd7) << "\t:: must be " << false << std::endl;
    }

    /*Check 8*/
    char arrd8[128] = "		";
    strd8.copy_chararray(&strd8, arrd8, 2);
    if (strs8.is_print(&strd8))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << strd8.is_print(&strd8) << "\t:: must be " << false << std::endl;
    }

    /*Check 9*/
    char arrd9[128] = "		";
    strd9.copy_chararray(&strd9, arrd9, 2);
    if (strs9.is_print(&strd9))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 9\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << strd9.is_print(&strd9) << "\t:: must be " << false << std::endl;
    }

    /*Check 10*/
    char arrd10[128] = "";
    strd10.copy_chararray(&strd10, arrd10, 0);
    if (!strs10.is_empty(&strd10))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 10\t" << std::endl;
	std::cout << "\tstr.is_empty()) = " << strd10.is_empty(&strd10) << "\t:: must be " << true << std::endl;
    }

    /*Check 11*/
    char arrd11[128] = "	a	";
    strd11.copy_chararray(&strd11, arrd11, 3);
    if (strs11.is_print(&strd11))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 11\t" << std::endl;
	std::cout << "\tstr.is_print()) = " << strd11.is_print(&strd11) << "\t:: must be " << false << std::endl;
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);
    c_string_destructor(&strs4);
    c_string_destructor(&strs5);
    c_string_destructor(&strs6);
    c_string_destructor(&strs7);
    c_string_destructor(&strs8);
    c_string_destructor(&strs9);
    c_string_destructor(&strs10);
    c_string_destructor(&strs11);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);
    c_string_destructor(&strd3);
    c_string_destructor(&strd4);
    c_string_destructor(&strd5);
    c_string_destructor(&strd6);
    c_string_destructor(&strd7);
    c_string_destructor(&strd8);
    c_string_destructor(&strd9);
    c_string_destructor(&strd10);
    c_string_destructor(&strd11);

    if (result)
	std::cout << "TRUE" << std::endl;
}