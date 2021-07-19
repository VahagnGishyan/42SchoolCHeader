#include "Test_CVectorInt.h"

void Test_CVectorInt::Search()
{
    std::cout << "\tSearch()\t\t";

    bool result = true;

    c_vector_int strs0;
    c_vector_int strs1;
    c_vector_int strs2;
    c_vector_int strs3;
    c_vector_int strs4;
    c_vector_int strs5;

    //c_vector_int strd0;
    //c_vector_int strd1;
    //c_vector_int strd2;
    //c_vector_int strd3;
    //c_vector_int strd4;
    //c_vector_int strd5;
    //c_vector_int strd6;
    //c_vector_int strd7;

    c_vector_int_constructor(&strs0);
    c_vector_int_constructor(&strs1);
    c_vector_int_constructor(&strs2);
    c_vector_int_constructor(&strs3);
    c_vector_int_constructor(&strs4);
    c_vector_int_constructor(&strs5);

    //c_vector_int_constructor(&strd0);
    //c_vector_int_constructor(&strd1);
    //c_vector_int_constructor(&strd2);
    //c_vector_int_constructor(&strd3);
    //c_vector_int_constructor(&strd4);
    //c_vector_int_constructor(&strd5);
    //c_vector_int_constructor(&strd6);
    //c_vector_int_constructor(&strd7);

    /*Check 0*/
    int arrs0[1] = { 4 };
    int symbols0 = { 4 };
    strs0.copy_intarray(&strs0, arrs0, 1);
    if (*(strs0.search_number(&strs0, symbols0)) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.search_number(symbols)   = " << *strs0.search_number(&strs0, symbols0) <<
	    "\t:: must be 4" << std::endl;
    }

    /*Check 1*/
    int arrs1[1] = { 8 };
    int symbols1 = { 5 };
    strs1.copy_intarray(&strs1, arrs1, 1);
    if (strs1.search_number(&strs1, symbols1) != NULL)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.search_number(symbols)   = " << strs1.search_number(&strs0, symbols1) <<
	    "\t:: must be 8" << std::endl;
    }

    /*Check 2*/
    int arrs2[128] = { 0, 1, 2, 3, 4, 5 };
    int symbols2 = { 4 };
    strs2.copy_intarray(&strs2, arrs2, 6);
    if (*strs2.search_number(&strs2, symbols2) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\t(strs.search_number(symbols)  = " << strs2.search_number(&strs2, symbols2) <<
	    "\t:: must be 'V" << std::endl;
    }

    /*Check 3*/
    int arrs3[1] = { 4 };
    int symbold0 = { 4 };
    strs3.copy_intarray(&strs3, arrs3, 1);
    if (*strs3.at(&strs3,(strs3.search_number_index(&strs3, symbold0))) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t(strs.search_number(symbols)  = " << *strs3.at(&strs3, (strs3.search_number_index(&strs3, symbold0))) <<
	    "\t:: must be 4" << std::endl;
    }

    /*Check 4*/
    int arrs4[1] = { 8 };
    int symbold1 = { 5 };
    strs4.copy_intarray(&strs4, arrs4, 1);
    if (strs4.search_number_index(&strs4, symbold1) >= 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\t(strs.search_number_index(symbols)  = " << strs4.search_number_index(&strs4, symbold1) <<
	    "\t:: must be negative" << std::endl;
    }

    /*Check 5*/
    int arrs5[128] = { 0, 1, 2, 3, 4, 5 };
    int symbold3 = { 4 };
    strs5.copy_intarray(&strs5, arrs5, 6);
    if (*strs5.at(&strs5, strs5.search_number_index(&strs5, symbold3)) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\t(strs.search_number(symbols)  = " << strs5.search_number_index(&strs5, symbold3) <<
	    "\t:: must be 4" << std::endl;
    }

 //   /*Check 8*/
 //   int arrd0[1] = { 'V' };
 //   int symbold0 = { 'V' };
 //   strd0.copy_intarray(&strd0, arrd0, 1);
 //   if (*strd0.search_number(&strd0, symbold0) != 'V')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 8\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd0.search_number(&strd0, symbold0) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 9*/
 //   int arrd1[1] = { 'V' };
 //   int symbold1 = { 'A' };
 //   strd1.copy_intarray(&strd1, arrd1, 1);
 //   if (strd1.search_number(&strd1, symbold1) != nullptr)
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 9\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd1.search_number(&strd0, symbold1) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 10*/
 //   int arrd2[128] = { "VAHAGN" };
 //   int symbold2 = { 'A' };
 //   strd2.copy_intarray(&strd2, arrd2, 2);
 //   if (*strd2.search_number(&strd2, symbold2) != 'A')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 10\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd2.search_number(&strd2, symbold2) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 11*/
 //   int arrd3[128] = { "VAHAGN" };
 //   int symbold3 = { 'P' };
 //   strd3.copy_intarray(&strd3, arrd3, 3);
 //   if (strd3.search_number(&strd3, symbold3) != nullptr)
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 11\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd3.search_number(&strd3, symbold3) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 12*/
 //   int arrd4A[128] = { "VAHAGN" };
 //   int arrd4B[128] = { "VAH" };
 //   strd4.copy_intarray(&strd4, arrd4A, 4);
 //   if (*strd4.search_numberarray(&strd4, arrd4B, ft_strlen(arrd4B)) != 'V')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 12\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd4.search_numberarray(&strd4, arrd4B, ft_strlen(arrd4B)) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 13*/
 //   int arrd5A[128] = { "VAHAGN" };
 //   int arrd5B[128] = { "AH" };
 //   strd5.copy_intarray(&strd5, arrd5A, 5);
 //   if (*strd5.search_numberarray(&strd5, arrd5B, ft_strlen(arrd5B)) != 'A')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 13\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd5.search_numberarray(&strd5, arrd5B, ft_strlen(arrd5B)) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 14*/
 //   int arrd6A[128] = { "VAHAGN" };
 //   int arrd6B[128] = { "GB" };
 //   strd6.copy_intarray(&strd6, arrd6A, 6);
 //   if (strd6.search_numberarray(&strd6, arrd6B, ft_strlen(arrd6B)) != nullptr)
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 14\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd6.search_numberarray(&strd6, arrd6B, ft_strlen(arrd6B)) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

 //   /*Check 15*/
 //   int arrd7A[128] = { "VAHAGN" };
 //   int arrd7B[128] = { "GB" };
 //   strd7.copy_intarray(&strd7, arrd7A, 7);
 //   if (strd7.search_numberarray(&strd7, arrd7B, ft_strlen(arrd7B)) != nullptr)
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 15\t" << std::endl;
	//std::cout << "\t(strd.search_number(symbold)  = " << strd7.search_numberarray(&strd7, arrd7B, ft_strlen(arrd7B)) <<
	//    "\t:: must be 'V" << std::endl;
 //   }

    c_vector_int_destructor(&strs0);
    c_vector_int_destructor(&strs1);
    c_vector_int_destructor(&strs2);
    c_vector_int_destructor(&strs3);
    c_vector_int_destructor(&strs4);
    c_vector_int_destructor(&strs5);

    //c_vector_int_destructor(&strd0);
    //c_vector_int_destructor(&strd1);
    //c_vector_int_destructor(&strd2);
    //c_vector_int_destructor(&strd3);
    //c_vector_int_destructor(&strd4);
    //c_vector_int_destructor(&strd5);
    //c_vector_int_destructor(&strd6);
    //c_vector_int_destructor(&strd7);

    if (result)
	std::cout << "TRUE" << std::endl;
}