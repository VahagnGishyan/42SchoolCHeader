#include "Test_CSArrayString.h"

void Test_CSArrayString::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    //t_c_sarray_string strd0;
    //t_c_sarray_string strd1;
    //t_c_sarray_string strd2;



    //t_c_sarray_string_constructor(&strd0);
    //t_c_sarray_string_constructor(&strd1);
    //t_c_sarray_string_constructor(&strd2);
    std::cout << ""; // for screen heap

    /*Check 0*/
    t_c_sarray_string strs0;
    c_sarray_string_constructor(&strs0);

    constexpr int length0 = 16;
    c_string arrdest[length0];
    c_string_array_constructor(arrdest, length0);
    strs0.tie_static_array(&strs0, arrdest, length0);

    constexpr int length1 = 4;
    c_string arrsorc[length1];
    c_string_array_constructor(arrsorc, length1);
    c_string_copy_chararray(&arrsorc[0], "", 1);
    c_string_copy_chararray(&arrsorc[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc[2], " ", 1);
    c_string_copy_chararray(&arrsorc[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc[4], length1 - 4, "", 1);

    strs0.concatenation_string_array(&strs0, arrsorc, 4);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strs0.at(&strs0, index), arrsorc + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs0.at(&strs0, index), arrsorc + index) = " 
		<< c_string_compare_c_string(strs0.at(&strs0, index), arrsorc + index) 
		<< "\t::must be "<< 0 << std::endl;
	}
    }
    c_sarray_string_destructor(&strs0);

    c_string_array_destructor(arrdest, length0);
    c_string_array_destructor(arrsorc, length1);
    std::cout << ""; // for screen heap

    /*Check 1*/
    t_c_sarray_string strs1;
    c_sarray_string_constructor(&strs1);

    constexpr int length2 = 16;
    c_string arrdest1[length2];
    c_string_array_constructor(arrdest1, length2);
    c_string_copy_chararray(arrdest1, "Sime", 4);
    strs1.set_data(&strs1, arrdest1, 1, length2);

    constexpr int length3 = 4;
    c_string arrsorc1[length3];
    c_string_array_constructor(arrsorc1, length3);
    c_string_copy_chararray(&arrsorc1[0], "", 1);
    c_string_copy_chararray(&arrsorc1[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc1[2], " ", 1);
    c_string_copy_chararray(&arrsorc1[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc1[4], length3 - 4, "", 1);

    constexpr int length4 = 5;
    c_string arrsorc12[length4];
    c_string_array_constructor(arrsorc12, length4);
    c_string_copy_chararray(&arrsorc12[0], "Sime", 4);
    c_string_copy_chararray(&arrsorc12[1], "", 1);
    c_string_copy_chararray(&arrsorc12[2], "Vahagn", 6);
    c_string_copy_chararray(&arrsorc12[3], " ", 1);
    c_string_copy_chararray(&arrsorc12[4], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorc12[5], length4 - 5, "", 1);

    strs1.concatenation_string_array(&strs1, arrsorc1, 4);
    for (int index = 0; index < 5; ++index)
    {
	if (c_string_compare_c_string(strs1.at(&strs1, index), arrsorc12 + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs1.at(&strs1, index), arrsorc12 + index) = " 
		<< c_string_compare_c_string(strs1.at(&strs1, index), arrsorc12 + index) 
		<< "\t:: must be "<< 0 << std::endl;
	}
    }

    c_sarray_string_destructor(&strs1);
    c_string_array_destructor(arrdest1, length2);
    c_string_array_destructor(arrsorc1, length3);
    c_string_array_destructor(arrsorc12, length4);
    std::cout << ""; // for screen heap

    /*Check 2*/

    t_c_sarray_string strs2A;
    t_c_sarray_string strs2B;
    c_sarray_string_constructor(&strs2A);
    c_sarray_string_constructor(&strs2B);

    //std::string arrdst2A[16];
    constexpr int length5 = 16;
    c_string arrdest2[length5];
    c_string_array_constructor(arrdest2, length5);

    constexpr int length6 = 4;
    c_string arrdst2B[length6];
    c_string_array_constructor(arrdst2B, length6);
    c_string_copy_chararray(&arrdst2B[0], "", 1);
    c_string_copy_chararray(&arrdst2B[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdst2B[2], " ", 1);
    c_string_copy_chararray(&arrdst2B[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst2B[4], length6 - 4, "", 1);

    strs2A.tie_static_array(&strs2A, arrdest2, length5);
    strs2B.set_data(&strs2B, arrdst2B, length6, 4);
    strs2A.concatenation_c_sarray_string(&strs2A, &strs2B);

    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strs2A.at(&strs2A, index), strs2B.at(&strs2B, index)))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs2A.at(&strs2A, index), strs2B.at(&strs2B, index)) = "
		<< c_string_compare_c_string(strs2A.at(&strs2A, index), strs2B.at(&strs2B, index))
		<< "\t:: must be " << 0 << std::endl;
	}
    }

    c_sarray_string_destructor(&strs2A);
    c_sarray_string_destructor(&strs2B);
    c_string_array_destructor(arrdest2, length5);
    c_string_array_destructor(arrdst2B, length6);
    std::cout << ""; // for screen heap


    /*Check 3*/

    t_c_sarray_string strs3A;
    t_c_sarray_string strs3B;
    c_sarray_string_constructor(&strs3A);
    c_sarray_string_constructor(&strs3B);

    //std::string arrdst3A[16]{ "", "Vahagn", };
    constexpr int length7 = 16;
    c_string arrdst3A[length7];
    c_string_array_constructor(arrdst3A, length7);
    c_string_copy_chararray(&arrdst3A[0], "", 1);
    c_string_copy_chararray(&arrdst3A[1], "Vahagn", 6);
    c_string_array_set_char_array(&arrdst3A[2], length7 - 2, "", 1);

    //std::string arrdst3B[4]{ " ", "Gishyan" };
    constexpr int length8 = 4;
    c_string arrdst3B[length8];
    c_string_array_constructor(arrdst3B, length8);
    c_string_copy_chararray(&arrdst3B[0], " ", 1);
    c_string_copy_chararray(&arrdst3B[1], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst3B[2], length8 - 2, "", 1);

    strs3A.set_data(&strs3A, arrdst3A, 2, length7);
    strs3B.set_data(&strs3B, arrdst3B, 2, length8);

    constexpr int length9 = 4;
    c_string arrdst3[length9];
    c_string_array_constructor(arrdst3, length9);
    c_string_copy_chararray(&arrdst3[0], "", 1);
    c_string_copy_chararray(&arrdst3[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdst3[2], " ", 1);
    c_string_copy_chararray(&arrdst3[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst3[4], length9 - 4, "", 1);

    strs3A.concatenation_c_sarray_string(&strs3A, &strs3B);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strs3A.at(&strs3A, index), arrdst3 +  index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs3A.at(" << index << "), arrdst3 +  index = " 
		<< c_string_compare_c_string(strs3A.at(&strs3A, index), arrdst3 + index)
		<< "\t:: must be "<< 0 << std::endl;
	}
    }

    c_sarray_string_destructor(&strs3A);
    c_sarray_string_destructor(&strs3B);
    c_string_array_destructor(arrdst3A, length7);
    c_string_array_destructor(arrdst3B, length8);
    c_string_array_destructor(arrdst3, length9);
    std::cout << ""; // for screen heap

 //   /*Check 3*/
 //   int arrd0A[128] = "Vahagn ";
 //   int arrd0B[128] = "Gishyan";
 //   strd0.copy_intarray(&strd0, arrd0A, 7);
 //   strd0.concatenation_intarray(&strd0, arrd0B, 7);
 //   std::string data3{ "Vahagn Gishyan" };
 //   for (int index = 0; index < 14; ++index)
 //   {
	//if (*strd0.at(&strd0, index) != data0[index])
	//{
	//    if (result)
	//    {
	//	std::cout << "ERROR" << std::endl;
	//	result = false;
	//    }
	//    std::cout << "\tCheck 3\t" << std::endl;
	//    std::cout << "\t*strd0.at(" << index << ") = " << *strd0.at(&strd0, index) << "\t::must be "
	//	<< data0[index] << std::endl;
	//}
 //   }

 //   /*Check 4*/
 //   int arrd1A[128]{ 'V' };
 //   int arrd1B[1]{ 'G' };
 //   strd1.copy_intarray(&strd1, arrd1A, 1);
 //   strd1.concatenation_intarray(&strd1, arrd1B, 1);
 //   std::string data4{ "VG" };
 //   for (int index = 0; index < 2; ++index)
 //   {
	//if (*strd1.at(&strd1, index) != data1[index])
	//{
	//    if (result)
	//    {
	//	std::cout << "ERROR" << std::endl;
	//	result = false;
	//    }
	//    std::cout << "\tCheck 4\t" << std::endl;
	//    std::cout << "\t*strd1.at(" << index << ") = " << *strd1.at(&strd1, index) << "\t:: must be "
	//	<< data1[index] << std::endl;
	//}
 //   }

 //   /*Check 5*/
 //   int arrd2A[128] = "V";
 //   int arrd2B[8]{ "GISHYAN" };
 //   strd2.copy_intarray(&strd2, arrd2A, 1);
 //   strd2.concatenation_intarray(&strd2, arrd2B, 7);
 //   std::string data5{ "VGISHYAN" };
 //   for (int index = 0; index < 8; ++index)
 //   {
	//if (*strd2.at(&strd2, index) != data2[index])
	//{
	//    if (result)
	//    {
	//	std::cout << "ERROR" << std::endl;
	//	result = false;
	//    }
	//    std::cout << "\tCheck 5\t" << std::endl;
	//    std::cout << "\t*strd2.at(" << index << ") = " << *strd2.at(&strd2, index) << "\t:: must be "
	//	<< data2[index] << std::endl;
	//}
 //   }






    //t_c_sarray_string_destructor(&strd0);
    //t_c_sarray_string_destructor(&strd1);
    //t_c_sarray_string_destructor(&strd2);

    if (result)
	std::cout << "TRUE" << std::endl;
}