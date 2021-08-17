#include "Test_CVectorString.h"

void Test_CVectorString::CopyData()
{
    std::cout << "\tCopyData()\t\t";

    bool result = true;

    t_c_vector_string strs0;
    t_c_vector_string strs2A;
    t_c_vector_string strs2B;

    c_vector_string_constructor(&strs0);
    c_vector_string_constructor(&strs2B);
    c_vector_string_constructor(&strs2A);

    constexpr int length2 = 16;
    c_string arrdata2[length2];
    c_string_array_constructor(arrdata2, length2);
    strs0.tie_static_array(&strs0, arrdata2, length2);

    /*Check 0*/
    constexpr int length3 = 4;
    c_string arr0[length3];
    c_string_array_constructor(arr0, length3);
    c_string_copy_chararray(&arr0[0], "", 1);
    c_string_copy_chararray(&arr0[1], "Vahagn", 6);
    c_string_copy_chararray(&arr0[2], " ", 1);
    c_string_copy_chararray(&arr0[3], "Gishyan", 7);

    strs0.copy_string_array(&strs0, arr0, 4);
    for (int index = 0; index < strs0.size(&strs0); ++index)
    {
	if (c_string_compare_c_string(strs0.at(&strs0, index), &arr0[index]) || strs0.size(&strs0) != 4)
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tstrs0.size()     = " << strs0.size(&strs0) << "\t:: must be 4" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs0.at(&strs0, index), &arr0[index])"
		<< c_string_compare_c_string(strs0.at(&strs0, index), &arr0[index]) << "\t::must be " << 0 << std::endl;
	}
    }

    /*Check 2*/
    constexpr int length4 = 2;
    c_string arr1[length4];
    c_string_array_constructor(arr1, length4);
    c_string_copy_chararray(&arr1[0], "", 1);
    c_string_copy_chararray(&arr1[1], "Vahagn", 6);

    c_string arr2[length4];
    c_string_array_constructor(arr2, length4);
    c_string_copy_chararray(&arr2[0], " ", 1);
    c_string_copy_chararray(&arr2[1], "Gishyan", 7);

    strs2A.copy_string_array(&strs2A, arr1, 2);
    strs2B.copy_string_array(&strs2B, arr2, 2);
    strs2B.copy_c_vector_string(&strs2B, &strs2A);

    constexpr int length5 = 4;
    c_string arrsorc[length5];
    c_string_array_constructor(arrsorc, length5);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);

    for (int index = 0; index < strs2B.size(&strs2B); ++index)
    {
	if (c_string_compare_c_string (strs2B.at(&strs2B, index), &arrsorc[index]))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string (strs2B.at(&strs2B, index), &arrsorc[index])"
		<< c_string_compare_c_string(strs2B.at(&strs2B, index), &arrsorc[index]) << "\t::must be " << 0 << std::endl;
	}
    }

 //   /*Check 0*/
 //   int arrdDest0[1];
 //   strd0.copy_intarray(&strd0, arrdDest0, 0);
 //   int arrdSorc0[1]{ 'a' };
 //   strd0.copy_intarray(&strd0, arrdSorc0, 1);
 //   if (*strd0.front(&strd0) != 'a' || strd0.size(&strd0) != 1)
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 0\t" << std::endl;
	//std::cout << "\t*strd0.front()   = " << *strd0.front(&strd0) << "\t:: must be a" << std::endl;
	//std::cout << "\tstrd0.size()     = " << strd0.size(&strd0) << "\t:: must be 1" << std::endl;
 //   }

 //   /*Check 1*/
 //   int arrdSorc1[128];
 //   strd1.copy_intarray(&strd1, arrdSorc1, 0);
 //   int arrdDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
 //   strd1.copy_intarray(&strd1, arrdDest1, 25);
 //   if (*strd1.at(&strd1, 0) != 'a')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 1\t" << std::endl;
	//std::cout << "\t*strd1.at(0)     = " << *strd1.at(&strd1, 0) << "\t:: must be a" << std::endl;
 //   }

 //   /*Check 2*/
 //   int arrdSorc2A[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaa" };
 //   int arrdSorc2B[128] = "";
 //   strd2A.copy_intarray(&strd2A, arrdSorc2A, std::strlen(arrdSorc2A));
 //   strd2B.copy_intarray(&strd2B, arrdSorc2A, 0);
 //   strd2B.copy_t_c_vector_string(&strd2B, &strd2A);
 //   for (int index = 0; index < strd2B.size(&strd2B); ++index)
 //   {
	//if (*strd2B.at(&strd1, index) != 'a')
	//{
	//    if (result)
	//    {
	//	std::cout << "ERROR" << std::endl;
	//	result = false;
	//    }
	//    std::cout << "\tCheck 2\t" << std::endl;
	//    std::cout << "\t*strd2.at(" << index << ") = " << *strd2B.at(&strd2B, index) << "\t::must be a" << std::endl;
	//}
 //   }

    c_vector_string_destructor(&strs0);
    c_vector_string_destructor(&strs2A);
    c_vector_string_destructor(&strs2B);

    c_string_array_destructor(arrdata2, length2);

    c_string_array_destructor(arr0, length3);

    c_string_array_destructor(arr1, length4);
    c_string_array_destructor(arr2, length4);

    c_string_array_destructor(arrsorc, length5);

    //test dynamic 

    t_c_vector_string strd0;
    t_c_vector_string strd2A;
    t_c_vector_string strd2B;

    c_vector_string_constructor(&strd0);
    c_vector_string_constructor(&strd2A);
    c_vector_string_constructor(&strd2B);

    constexpr int length6 = 16;
    c_string arrdatad2[length6];
    c_string_array_constructor(arrdatad2, length6);

    /*Check 3*/
    constexpr int length7 = 4;
    c_string arrd0[length7];
    c_string_array_constructor(arrd0, length7);
    c_string_copy_chararray(&arrd0[0], "", 1);
    c_string_copy_chararray(&arrd0[1], "Vahagn", 6);
    c_string_copy_chararray(&arrd0[2], " ", 1);
    c_string_copy_chararray(&arrd0[3], "Gishyan", 7);

    strd0.copy_string_array(&strd0, arrd0, 4);
    for (int index = 0; index < strd0.size(&strd0); ++index)
    {
	if (c_string_compare_c_string(strd0.at(&strd0, index), &arrd0[index]) || strd0.size(&strd0) != 4)
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\tstrd0.size()     = " << strd0.size(&strd0) << "\t:: must be 4" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strd0.at(&strd0, index), &arrd0[index])"
		<< c_string_compare_c_string(strd0.at(&strd0, index), &arrd0[index]) << "\t::must be " << 0 << std::endl;
	}
    }

    /*Check 5*/
    constexpr int length8 = 2;
    c_string arrd1[length8];
    c_string_array_constructor(arrd1, length8);
    c_string_copy_chararray(&arrd1[0], "", 1);
    c_string_copy_chararray(&arrd1[1], "Vahagn", 6);

    c_string arrd2[length8];
    c_string_array_constructor(arrd2, length8);
    c_string_copy_chararray(&arrd2[0], " ", 1);
    c_string_copy_chararray(&arrd2[1], "Gishyan", 7);

    strd2A.copy_string_array(&strd2A, arrd1, 2);
    strd2B.copy_string_array(&strd2B, arrd2, 2);
    strd2B.copy_c_vector_string(&strd2B, &strd2A);

    constexpr int length9 = 4;
    c_string arrsorcd[length9];
    c_string_array_constructor(arrsorcd, length9);
    c_string_copy_chararray(&arrsorcd[0], "", 1);
    c_string_copy_chararray(&arrsorcd[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd[2], " ", 1);
    c_string_copy_chararray(&arrsorcd[3], "Gishyan", 7);

    for (int index = 0; index < strd2B.size(&strd2B); ++index)
    {
	if (c_string_compare_c_string(strd2B.at(&strd2B, index), &arrsorcd[index]))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string (strd2B.at(&strd2B, index), &arrsorcd[index])"
		<< c_string_compare_c_string(strd2B.at(&strd2B, index), &arrsorcd[index]) << "\t::must be " << 0 << std::endl;
	}
    }

    //   /*Check 3*/
    //   int arrdDest0[1];
    //   strd0.copy_intarray(&strd0, arrdDest0, 0);
    //   int arrdSorc0[1]{ 'a' };
    //   strd0.copy_intarray(&strd0, arrdSorc0, 1);
    //   if (*strd0.front(&strd0) != 'a' || strd0.size(&strd0) != 1)
    //   {
	   //if (result)
	   //{
	   //    std::cout << "ERROR" << std::endl;
	   //    result = false;
	   //}
	   //std::cout << "\tCheck 3\t" << std::endl;
	   //std::cout << "\t*strd0.front()   = " << *strd0.front(&strd0) << "\t:: must be a" << std::endl;
	   //std::cout << "\tstrd0.size()     = " << strd0.size(&strd0) << "\t:: must be 1" << std::endl;
    //   }

    //   /*Check 4*/
    //   int arrdSorc1[128];
    //   strd1.copy_intarray(&strd1, arrdSorc1, 0);
    //   int arrdDest1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    //   strd1.copy_intarray(&strd1, arrdDest1, 25);
    //   if (*strd1.at(&strd1, 0) != 'a')
    //   {
	   //if (result)
	   //{
	   //    std::cout << "ERROR" << std::endl;
	   //    result = false;
	   //}
	   //std::cout << "\tCheck 4\t" << std::endl;
	   //std::cout << "\t*strd1.at(0)     = " << *strd1.at(&strd1, 0) << "\t:: must be a" << std::endl;
    //   }

    //   /*Check 5*/
    //   int arrdSorc2A[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaa" };
    //   int arrdSorc2B[128] = "";
    //   strd2A.copy_intarray(&strd2A, arrdSorc2A, std::strlen(arrdSorc2A));
    //   strd2B.copy_intarray(&strd2B, arrdSorc2A, 0);
    //   strd2B.copy_t_c_vector_string(&strd2B, &strd2A);
    //   for (int index = 0; index < strd2B.size(&strd2B); ++index)
    //   {
	   //if (*strd2B.at(&strd1, index) != 'a')
	   //{
	   //    if (result)
	   //    {
	   //	std::cout << "ERROR" << std::endl;
	   //	result = false;
	   //    }
	   //    std::cout << "\tCheck 5\t" << std::endl;
	   //    std::cout << "\t*strd2.at(" << index << ") = " << *strd2B.at(&strd2B, index) << "\t::must be a" << std::endl;
	   //}
    //   }

    c_vector_string_destructor(&strd0);
    c_vector_string_destructor(&strd2A);
    c_vector_string_destructor(&strd2B);

    c_string_array_destructor(arrdatad2, length6);

    c_string_array_destructor(arrd0, length7);

    c_string_array_destructor(arrd1, length8);
    c_string_array_destructor(arrd2, length8);

    c_string_array_destructor(arrsorcd, length9);

    //t_c_vector_string_destructor(&strd0);
    //t_c_vector_string_destructor(&strd1);
    //t_c_vector_string_destructor(&strd2A);
    //t_c_vector_string_destructor(&strd2B);

    if (result)
	std::cout << "TRUE" << std::endl;
}