#include "Test_CSArrayString.h"

void Test_CSArrayString::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    t_c_sarray_string strs0;
    t_c_sarray_string strs1;
    t_c_sarray_string strs2A;
    t_c_sarray_string strs2B;
    t_c_sarray_string strs3A;
    t_c_sarray_string strs3B;

    //t_c_sarray_string strd0;
    //t_c_sarray_string strd1;
    //t_c_sarray_string strd2;

    c_sarray_string_constructor(&strs0);
    c_sarray_string_constructor(&strs1);
    c_sarray_string_constructor(&strs2A);
    c_sarray_string_constructor(&strs2B);
    c_sarray_string_constructor(&strs3A);
    c_sarray_string_constructor(&strs3B);

    //t_c_sarray_string_constructor(&strd0);
    //t_c_sarray_string_constructor(&strd1);
    //t_c_sarray_string_constructor(&strd2);

    /*Check 0*/

    constexpr int length0 = 16;
    c_string arrdest[length0];
    c_string_array_constructor(arrdest, length0);
    strs0.tie_static_array(&strs0, arrdest, length0);

    std::string arrdst0[16];
    strs0.tie_static_array(&strs0, arrdst0, 16);

    std::string arrsrc0[4]{ "", "Vahagn", " ", "Gishyan" };

    strs0.concatenation_string_array(&strs0, arrsrc0, 4);
    for (int index = 0; index < 4; ++index)
    {
	if (*strs0.at(&strs0, index) != arrsrc0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs0.at(" << index << ") = " << *strs0.at(&strs0, index) << "\t::must be "
		<< arrsrc0[index] << std::endl;
	}
    }

    /*Check 1*/
    std::string arrdst1[16]{"Sime"};
    std::string arrsrc1[4]{ "", "Vahagn", " ", "Gishyan" };
    std::string arr1[]{ "Sime", "", "Vahagn", " ", "Gishyan" };
    strs1.set_data(&strs1, arrdst1, 1, 16);
    strs1.concatenation_string_array(&strs1, arrsrc1, 4);
    for (int index = 0; index < 5; ++index)
    {
	if (*strs1.at(&strs1, index) != arr1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\t*strs1.at(" << index << ") = " << *strs1.at(&strs1, index) << "\t:: must be "
		<< arr1[index] << std::endl;
	}
    }

    /*Check 2*/
    std::string arrdst2A[16];
    std::string arrdst2B[4]{ "", "Vahagn", " ", "Gishyan" };
    strs2A.tie_static_array(&strs2A, arrdst2A, 16);
    strs2B.set_data(&strs2B, arrdst2A, 4, 4);
    strs2A.concatenation_c_sarray_string(&strs2A, &strs2B);
    for (int index = 0; index < 4; ++index)
    {
	if (*strs2A.at(&strs2A, index) != *strs2B.at(&strs2B, index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strs2.at(" << index << ") = " << *strs2A.at(&strs2A, index) << "\t:: must be "
		<< *strs2B.at(&strs2B, index) << std::endl;
	}
    }

    /*Check 3*/
    std::string arrdst3A[16]{ "", "Vahagn", };
    std::string arrdst3B[4]{ " ", "Gishyan" };
    strs3A.set_data(&strs3A, arrdst3A, 16, 2);
    strs3B.set_data(&strs3B, arrdst3A, 2, 2);
    strs3A.concatenation_c_sarray_string(&strs3A, &strs3B);
    for (int index = 0; index < 4; ++index)
    {
	if (*strs3A.at(&strs3A, index) != *strs3B.at(&strs3B, index))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t*strs3.at(" << index << ") = " << *strs3A.at(&strs3A, index) << "\t:: must be "
		<< *strs3B.at(&strs3B, index) << std::endl;
	}
    }

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

    c_sarray_string_destructor(&strs0);
    c_sarray_string_destructor(&strs1);
    c_sarray_string_destructor(&strs2A);
    c_sarray_string_destructor(&strs2B);
    c_sarray_string_destructor(&strs3A);
    c_sarray_string_destructor(&strs3B);

    //t_c_sarray_string_destructor(&strd0);
    //t_c_sarray_string_destructor(&strd1);
    //t_c_sarray_string_destructor(&strd2);

    if (result)
	std::cout << "TRUE" << std::endl;
}