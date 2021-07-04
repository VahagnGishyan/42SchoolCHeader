#include "Test_CString.h"

void Test_CString::Search()
{
    std::cout << "\tSearch()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;
    c_string strs4;
    c_string strs5;
    c_string strs6;
    c_string strs7;

    c_string strd0;
    c_string strd1;
    c_string strd2;
    c_string strd3;
    c_string strd4;
    c_string strd5;
    c_string strd6;
    c_string strd7;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);
    c_string_constructor(&strs4);
    c_string_constructor(&strs5);
    c_string_constructor(&strs6);
    c_string_constructor(&strs7);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);
    c_string_constructor(&strd3);
    c_string_constructor(&strd4);
    c_string_constructor(&strd5);
    c_string_constructor(&strd6);
    c_string_constructor(&strd7);

    /*Check 0*/
    char arrs0[1] = { 'V' };
    char symbols0 = { 'V' };
    strs0.setdata(&strs0, arrs0, 1, 1);
    if (*(c_string_search_char(&strs0, symbols0)) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs0.search_char(&strs0, symbols0) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 1*/
    char arrs1[1] = { 'V' };
    char symbols1 = { 'A' };
    strs1.setdata(&strs1, arrs1, 1, 1);
    if (strs1.search_char(&strs1, symbols1) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs1.search_char(&strs0, symbols1) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 2*/
    char arrs2[128] = { "VAHAGN" };
    char symbols2 = { 'A' };
    strs2.setdata(&strs2, arrs2, 2, 128);
    if (*strs2.search_char(&strs2, symbols2) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs2.search_char(&strs2, symbols2) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 3*/
    char arrs3[128] = { "VAHAGN" };
    char symbols3 = { 'P' };
    strs3.setdata(&strs3, arrs3, 3, 128);
    if (strs3.search_char(&strs3, symbols3) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs3.search_char(&strs3, symbols3) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 4*/
    char arrs4A[128] = { "VAHAGN" };
    char arrs4B[128] = { "VAH" };
    strs4.setdata(&strs4, arrs4A, 4, 148);
    if (*strs4.search_chararray(&strs4, arrs4B, ft_strlen(arrs4B)) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs4.search_chararray(&strs4, arrs4B, ft_strlen(arrs4B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 5*/
    char arrs5A[128] = { "VAHAGN" };
    char arrs5B[128] = { "AH" };
    strs5.setdata(&strs5, arrs5A, 5, 158);
    if (*strs5.search_chararray(&strs5, arrs5B, ft_strlen(arrs5B)) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs5.search_chararray(&strs5, arrs5B, ft_strlen(arrs5B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 6*/
    char arrs6A[128] = { "VAHAGN" };
    char arrs6B[128] = { "GB" };
    strs6.setdata(&strs6, arrs6A, 6, 168);
    if (strs6.search_chararray(&strs6, arrs6B, ft_strlen(arrs6B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs6.search_chararray(&strs6, arrs6B, ft_strlen(arrs6B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 7*/
    char arrs7A[128] = { "VAHAGN" };
    char arrs7B[128] = { "GB" };
    strs7.setdata(&strs7, arrs7A, 7, 178);
    if (strs7.search_chararray(&strs7, arrs7B, ft_strlen(arrs7B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\t(strs.search_char(symbols)  = " << strs7.search_chararray(&strs7, arrs7B, ft_strlen(arrs7B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 8*/
    char arrd0[1] = { 'V' };
    char symbold0 = { 'V' };
    strd0.copy_chararray(&strd0, arrd0, 1);
    if (*strd0.search_char(&strd0, symbold0) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 8\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd0.search_char(&strd0, symbold0) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 9*/
    char arrd1[1] = { 'V' };
    char symbold1 = { 'A' };
    strd1.copy_chararray(&strd1, arrd1, 1);
    if (strd1.search_char(&strd1, symbold1) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 9\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd1.search_char(&strd0, symbold1) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 10*/
    char arrd2[128] = { "VAHAGN" };
    char symbold2 = { 'A' };
    strd2.copy_chararray(&strd2, arrd2, 2);
    if (*strd2.search_char(&strd2, symbold2) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 10\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd2.search_char(&strd2, symbold2) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 11*/
    char arrd3[128] = { "VAHAGN" };
    char symbold3 = { 'P' };
    strd3.copy_chararray(&strd3, arrd3, 3);
    if (strd3.search_char(&strd3, symbold3) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 11\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd3.search_char(&strd3, symbold3) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 12*/
    char arrd4A[128] = { "VAHAGN" };
    char arrd4B[128] = { "VAH" };
    strd4.copy_chararray(&strd4, arrd4A, 4);
    if (*strd4.search_chararray(&strd4, arrd4B, ft_strlen(arrd4B)) != 'V')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 12\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd4.search_chararray(&strd4, arrd4B, ft_strlen(arrd4B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 13*/
    char arrd5A[128] = { "VAHAGN" };
    char arrd5B[128] = { "AH" };
    strd5.copy_chararray(&strd5, arrd5A, 5);
    if (*strd5.search_chararray(&strd5, arrd5B, ft_strlen(arrd5B)) != 'A')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 13\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd5.search_chararray(&strd5, arrd5B, ft_strlen(arrd5B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 14*/
    char arrd6A[128] = { "VAHAGN" };
    char arrd6B[128] = { "GB" };
    strd6.copy_chararray(&strd6, arrd6A, 6);
    if (strd6.search_chararray(&strd6, arrd6B, ft_strlen(arrd6B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 14\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd6.search_chararray(&strd6, arrd6B, ft_strlen(arrd6B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 15*/
    char arrd7A[128] = { "VAHAGN" };
    char arrd7B[128] = { "GB" };
    strd7.copy_chararray(&strd7, arrd7A, 7);
    if (strd7.search_chararray(&strd7, arrd7B, ft_strlen(arrd7B)) != nullptr)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 15\t" << std::endl;
	std::cout << "\t(strd.search_char(symbold)  = " << strd7.search_chararray(&strd7, arrd7B, ft_strlen(arrd7B)) <<
	    "\t:: must be 'V" << std::endl;
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);
    c_string_destructor(&strs4);
    c_string_destructor(&strs5);
    c_string_destructor(&strs6);
    c_string_destructor(&strs7);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);
    c_string_destructor(&strd3);
    c_string_destructor(&strd4);
    c_string_destructor(&strd5);
    c_string_destructor(&strd6);
    c_string_destructor(&strd7);

    if (result)
	std::cout << "TRUE" << std::endl;
}