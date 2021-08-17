#include "Test_CVectorString.h"

void Test_CVectorString::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    //t_c_vector_string strd0;
    //t_c_vector_string strd1;
    //t_c_vector_string strd2;

    //t_c_vector_string_constructor(&strd0);
    //t_c_vector_string_constructor(&strd1);
    //t_c_vector_string_constructor(&strd2);
    std::cout << ""; // for screen heap

    /*Check 0*/
    t_c_vector_string strs0;
    c_vector_string_constructor(&strs0);

    constexpr int length0 = 12;
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
    c_vector_string_destructor(&strs0);

    c_string_array_destructor(arrdest, length0);

    c_string_array_destructor(arrsorc, length1);
    std::cout << ""; // for screen heap

    /*Check 1*/
    t_c_vector_string strs1;
    c_vector_string_constructor(&strs1);

    constexpr int length2 = 12;
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

    c_vector_string_destructor(&strs1);

    c_string_array_destructor(arrdest1, length2);
    c_string_array_destructor(arrsorc1, length3);
    c_string_array_destructor(arrsorc12, length4);
    std::cout << ""; // for screen heap

    /*Check 2*/

    t_c_vector_string strs2A;
    t_c_vector_string strs2B;
    c_vector_string_constructor(&strs2A);
    c_vector_string_constructor(&strs2B);

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

    strs2B.set_data(&strs2B, arrdst2B, length6, length6);
    strs2A.concatenation_c_vector_string(&strs2A, &strs2B);

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

    c_vector_string_destructor(&strs2A);
    c_vector_string_destructor(&strs2B);
    c_string_array_destructor(arrdest2, length5);
    c_string_array_destructor(arrdst2B, length6);
    std::cout << ""; // for screen heap


    /*Check 3*/

    t_c_vector_string strs3A;
    t_c_vector_string strs3B;
    c_vector_string_constructor(&strs3A);
    c_vector_string_constructor(&strs3B);

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

    strs3A.concatenation_c_vector_string(&strs3A, &strs3B);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strs3A.at(&strs3A, index), arrdst3 + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strs3A.at(" << index << "), arrdst3 + " 
		<< index << ") = " << c_string_compare_c_string(strs3A.at(&strs3A, index), arrdst3 + index)
		<< "\t:: must be "<< 0 << std::endl;
	}
    }

    c_vector_string_destructor(&strs3A);
    c_vector_string_destructor(&strs3B);
    c_string_array_destructor(arrdst3A, length7);
    c_string_array_destructor(arrdst3B, length8);
    c_string_array_destructor(arrdst3, length9);
    std::cout << ""; // for screen heap


    //test dynamic


	/*Check 4*/
    t_c_vector_string strd0;
    c_vector_string_constructor(&strd0);

    constexpr int lengthd1 = 4;
    c_string arrsorcd[lengthd1];
    c_string_array_constructor(arrsorcd, lengthd1);
    c_string_copy_chararray(&arrsorcd[0], "", 1);
    c_string_copy_chararray(&arrsorcd[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd[2], " ", 1);
    c_string_copy_chararray(&arrsorcd[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorcd[4], lengthd1 - 4, "", 1);

    strd0.concatenation_string_array(&strd0, arrsorcd, 4);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strd0.at(&strd0, index), arrsorcd + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strd0.at(&strd0, index), arrsorcd + index) = "
		<< c_string_compare_c_string(strd0.at(&strd0, index), arrsorcd + index)
		<< "\t::must be " << 0 << std::endl;
	}
    }
    c_vector_string_destructor(&strd0);

    c_string_array_destructor(arrsorcd, lengthd1);
    std::cout << ""; // for screen heap

    /*Check 5*/
    t_c_vector_string strd1;
    c_vector_string_constructor(&strd1);

    constexpr int lengthd2 = 16;
    c_string arrdestd1[lengthd2];
    c_string_array_constructor(arrdestd1, lengthd2);
    c_string_copy_chararray(arrdestd1, "Sime", 4);
    strd1.copy_string_array(&strd1, arrdestd1, 1);

    constexpr int lengthd3 = 4;
    c_string arrsorcd1[lengthd3];
    c_string_array_constructor(arrsorcd1, lengthd3);
    c_string_copy_chararray(&arrsorcd1[0], "", 1);
    c_string_copy_chararray(&arrsorcd1[1], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd1[2], " ", 1);
    c_string_copy_chararray(&arrsorcd1[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorcd1[4], lengthd3 - 4, "", 1);

    constexpr int lengthd4 = 5;
    c_string arrsorcd12[lengthd4];
    c_string_array_constructor(arrsorcd12, lengthd4);
    c_string_copy_chararray(&arrsorcd12[0], "Sime", 4);
    c_string_copy_chararray(&arrsorcd12[1], "", 1);
    c_string_copy_chararray(&arrsorcd12[2], "Vahagn", 6);
    c_string_copy_chararray(&arrsorcd12[3], " ", 1);
    c_string_copy_chararray(&arrsorcd12[4], "Gishyan", 7);
    c_string_array_set_char_array(&arrsorcd12[5], lengthd4 - 5, "", 1);

    strd1.concatenation_string_array(&strd1, arrsorcd1, 4);
    for (int index = 0; index < 5; ++index)
    {
	if (c_string_compare_c_string(strd1.at(&strd1, index), arrsorcd12 + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strd1.at(&strd1, index), arrsorcd12 + index) = "
		<< c_string_compare_c_string(strd1.at(&strd1, index), arrsorcd12 + index)
		<< "\t:: must be " << 0 << std::endl;
	}
    }

    c_vector_string_destructor(&strd1);
    c_string_array_destructor(arrdestd1, lengthd2);
    c_string_array_destructor(arrsorcd1, lengthd3);
    c_string_array_destructor(arrsorcd12, lengthd4);
    std::cout << ""; // for screen heap

    /*Check 6*/

    t_c_vector_string strd2A;
    t_c_vector_string strd2B;
    c_vector_string_constructor(&strd2A);
    c_vector_string_constructor(&strd2B);

    //std::string arrdstdd2A[16];
    constexpr int lengthd5 = 16;
    c_string arrdestd2[lengthd5];
    c_string_array_constructor(arrdestd2, lengthd5);

    constexpr int lengthd6 = 4;
    c_string arrdstd2B[lengthd6];
    c_string_array_constructor(arrdstd2B, lengthd6);
    c_string_copy_chararray(&arrdstd2B[0], "", 1);
    c_string_copy_chararray(&arrdstd2B[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdstd2B[2], " ", 1);
    c_string_copy_chararray(&arrdstd2B[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdstd2B[4], lengthd6 - 4, "", 1);

    strd2B.copy_string_array(&strd2B, arrdstd2B, lengthd6);
    strd2A.concatenation_c_vector_string(&strd2A, &strd2B);

    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strd2A.at(&strd2A, index), strd2B.at(&strd2B, index)))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 6\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strd2A.at(&strd2A, index), strd2B.at(&strd2B, index)) = "
		<< c_string_compare_c_string(strd2A.at(&strd2A, index), strd2B.at(&strd2B, index))
		<< "\t:: must be " << 0 << std::endl;
	}
    }

    c_vector_string_destructor(&strd2A);
    c_vector_string_destructor(&strd2B);
    c_string_array_destructor(arrdestd2, lengthd5);
    c_string_array_destructor(arrdstd2B, lengthd6);
    std::cout << ""; // for screen heap


    /*Check 7*/

    t_c_vector_string strd3A;
    t_c_vector_string strd3B;
    c_vector_string_constructor(&strd3A);
    c_vector_string_constructor(&strd3B);

    //std::string arrdstd3A[16]{ "", "Vahagn", };
    constexpr int lengthd7 = 16;
    c_string arrdstd3A[lengthd7];
    c_string_array_constructor(arrdstd3A, lengthd7);
    c_string_copy_chararray(&arrdstd3A[0], "", 1);
    c_string_copy_chararray(&arrdstd3A[1], "Vahagn", 6);
    c_string_array_set_char_array(&arrdstd3A[2], lengthd7 - 2, "", 1);

    //std::string arrdstd3B[4]{ " ", "Gishyan" };
    constexpr int lengthd8 = 4;
    c_string arrdstd3B[lengthd8];
    c_string_array_constructor(arrdstd3B, lengthd8);
    c_string_copy_chararray(&arrdstd3B[0], " ", 1);
    c_string_copy_chararray(&arrdstd3B[1], "Gishyan", 7);
    c_string_array_set_char_array(&arrdstd3B[2], lengthd8 - 2, "", 1);

    strd3A.copy_string_array(&strd3A, arrdstd3A, 2);
    strd3B.copy_string_array(&strd3B, arrdstd3B, 2);

    constexpr int lengthd9 = 4;
    c_string arrdstd3[lengthd9];
    c_string_array_constructor(arrdstd3, lengthd9);
    c_string_copy_chararray(&arrdstd3[0], "", 1);
    c_string_copy_chararray(&arrdstd3[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdstd3[2], " ", 1);
    c_string_copy_chararray(&arrdstd3[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdstd3[4], lengthd9 - 4, "", 1);

    strd3A.concatenation_c_vector_string(&strd3A, &strd3B);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(strd3A.at(&strd3A, index), arrdstd3 + index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 7\t" << std::endl;
	    std::cout << "\tc_string_compare_c_string(strd3A.at(" << index << "), arrdstd3 + "
		<< index << ") = " << c_string_compare_c_string(strd3A.at(&strd3A, index), arrdstd3 + index)
		<< "\t:: must be " << 0 << std::endl;
	}
    }

    c_vector_string_destructor(&strd3A);
    c_vector_string_destructor(&strd3B);
    c_string_array_destructor(arrdstd3A, lengthd7);
    c_string_array_destructor(arrdstd3B, lengthd8);
    c_string_array_destructor(arrdstd3, lengthd9);
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

    //t_c_vector_string_destructor(&strd0);
    //t_c_vector_string_destructor(&strd1);
    //t_c_vector_string_destructor(&strd2);

    if (result)
	std::cout << "TRUE" << std::endl;
}