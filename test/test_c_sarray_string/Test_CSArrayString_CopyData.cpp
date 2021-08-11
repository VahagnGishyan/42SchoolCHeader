#include "Test_CSArrayString.h"

void Test_CSArrayString::CopyData()
{
    std::cout << "\tCopyData()\t\t";

    bool result = true;

    t_c_sarray_string strs0;
    t_c_sarray_string strs2A;
    t_c_sarray_string strs2B;

    c_sarray_string_constructor(&strs0);
    c_sarray_string_constructor(&strs2B);
    c_sarray_string_constructor(&strs2A);

    constexpr int length0 = 16;
    c_string arrdata0[length0];
    c_string_array_constructor(arrdata0, length0);
    strs0.tie_static_array(&strs0, arrdata0, length0);

    constexpr int length1 = 16;
    c_string arrdata1[length1];
    c_string_array_constructor(arrdata1, length1);
    strs0.tie_static_array(&strs0, arrdata1, length1);

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
    strs2B.copy_c_sarray_string(&strs2B, &strs2A);

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
 //   strd2B.copy_t_c_sarray_string(&strd2B, &strd2A);
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

    c_sarray_string_destructor(&strs0);
    c_sarray_string_destructor(&strs2A);
    c_sarray_string_destructor(&strs2B);

    c_string_array_destructor(arrdata0, length0);
    c_string_array_destructor(arrdata1, length1);
    c_string_array_destructor(arrdata2, length2);

    c_string_array_destructor(arr0, length3);

    c_string_array_destructor(arr1, length4);
    c_string_array_destructor(arr2, length4);

    c_string_array_destructor(arrsorc, length5);

    //t_c_sarray_string_destructor(&strd0);
    //t_c_sarray_string_destructor(&strd1);
    //t_c_sarray_string_destructor(&strd2A);
    //t_c_sarray_string_destructor(&strd2B);

    if (result)
	std::cout << "TRUE" << std::endl;
}