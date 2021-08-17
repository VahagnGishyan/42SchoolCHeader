#include "Test_CVectorString.h"

void Test_CVectorString::Search()
{
    std::cout << "\tSearch()\t\t";

    bool result = true;

    t_c_vector_string strs0;
    t_c_vector_string strs1;
    //t_c_vector_string strs2;
    //t_c_vector_string strs3;
    //t_c_vector_string strs4;
    //t_c_vector_string strs5;

    //t_c_vector_string strd0;
    //t_c_vector_string strd1;
    //t_c_vector_string strd2;
    //t_c_vector_string strd3;
    //t_c_vector_string strd4;
    //t_c_vector_string strd5;
    //t_c_vector_string strd6;
    //t_c_vector_string strd7;

    c_vector_string_constructor(&strs0);
    c_vector_string_constructor(&strs1);
    //t_c_vector_string_constructor(&strs2);
    //t_c_vector_string_constructor(&strs3);
    //t_c_vector_string_constructor(&strs4);
    //t_c_vector_string_constructor(&strs5);

    //t_c_vector_string_constructor(&strd0);
    //t_c_vector_string_constructor(&strd1);
    //t_c_vector_string_constructor(&strd2);
    //t_c_vector_string_constructor(&strd3);
    //t_c_vector_string_constructor(&strd4);
    //t_c_vector_string_constructor(&strd5);
    //t_c_vector_string_constructor(&strd6);
    //t_c_vector_string_constructor(&strd7);

    /*Check 0*/

    //std::string arrdst0[16]{ "", "Vahagn", " ", "Gishyan" };
    constexpr int length0 = 16;
    c_string arrdst0[length0];
    c_string_array_constructor(arrdst0, length0);
    c_string_copy_chararray(&arrdst0[0], "", 1);
    c_string_copy_chararray(&arrdst0[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdst0[2], " ", 1);
    c_string_copy_chararray(&arrdst0[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst0[4], length0 - 4, "", 1);

    strs0.copy_string_array(&strs0, arrdst0, 4);
    for (int index = 0; index < strs0.size(&strs0); ++index)
    {
	if (c_string_compare_c_string((strs0.search_string(&strs0, &arrdst0[index])), &arrdst0[index]))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string((strs0.search_string(&strs0, &arrdst0[index])), arrdst0 + index) = " 
		<< c_string_compare_c_string((strs0.search_string(&strs0, &arrdst0[index])), arrdst0 + index) 
		<< "\t:: must be " << 0 << std::endl;
	}
    }


    /*Check 1*/
    //std::string arrdst1[16]{ "", "Vahagn", " ", "Gishyan" };
    constexpr int length1 = 16;
    c_string arrdst1[length1];
    c_string_array_constructor(arrdst1, length1);
    c_string_copy_chararray(&arrdst1[0], "", 1);
    c_string_copy_chararray(&arrdst1[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdst1[2], " ", 1);
    c_string_copy_chararray(&arrdst1[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst1[4], length1 - 4, "", 1);

    strs1.copy_string_array(&strs1, arrdst1, 4);
    for (int index = 0; index < strs1.size(&strs1); ++index)
    {
	if (strs1.search_string_index(&strs1, &arrdst1[index]) != index)
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\tstrs1.search_string_index(&strs1, &arrdst1[index])   = "
		<< strs1.search_string_index(&strs1, &arrdst1[index]) << "\t:: must be " << index << std::endl;
	}
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

    c_vector_string_destructor(&strs0);
    c_vector_string_destructor(&strs1);
    //t_c_vector_string_destructor(&strs2);
    //t_c_vector_string_destructor(&strs3);
    //t_c_vector_string_destructor(&strs4);
    //t_c_vector_string_destructor(&strs5);

    //t_c_vector_string_destructor(&strd0);
    //t_c_vector_string_destructor(&strd1);
    //t_c_vector_string_destructor(&strd2);
    //t_c_vector_string_destructor(&strd3);
    //t_c_vector_string_destructor(&strd4);
    //t_c_vector_string_destructor(&strd5);
    //t_c_vector_string_destructor(&strd6);
    //t_c_vector_string_destructor(&strd7);

    c_string_array_destructor(arrdst0, length0);
    c_string_array_destructor(arrdst1, length1);

    if (result)
	std::cout << "TRUE" << std::endl;
}