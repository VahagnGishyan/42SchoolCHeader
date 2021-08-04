#include "Test_CDArrayInt.h"

void Test_CDArrayInt::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    c_darray_int strs0;
    c_darray_int strs1;
    c_darray_int strs2;

    //c_darray_int strd0;
    //c_darray_int strd1;
    //c_darray_int strd2;

    c_darray_int_constructor(&strs0);
    c_darray_int_constructor(&strs1);
    c_darray_int_constructor(&strs2);

    //c_darray_int_constructor(&strd0);
    //c_darray_int_constructor(&strd1);
    //c_darray_int_constructor(&strd2);

    /*Check 0*/
    int arrs0A[128] = { 1, 2, 3, 4, 5 };
    int arrs0B[128] = {6, 7, 8, 9, 0};
    strs0.copy_intarray(&strs0, arrs0A, 5);
    strs0.concatenation_intarray(&strs0, arrs0B, 5);
    std::array<int, 10> data0{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    for (int index = 0; index < 10; ++index)
    {
	if (*strs0.at(&strs0, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs0.at(" << index << ") = " << *strs0.at(&strs0, index) << "\t::must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    int arrs1A[128]{ 0 };
    int arrs1B[1]{ 1 };
    strs1.copy_intarray(&strs1, arrs1A, 1);
    strs1.concatenation_intarray(&strs1, arrs1B, 1);
    std::array<int, 2> data1{ 0, 1 };
    for (int index = 0; index < 2; ++index)
    {
	if (*strs1.at(&strs1, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs1.at(" << index << ") = " << *strs1.at(&strs1, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    int arrs2A[128] = {1};
    int arrs2B[8]{ 2, 3, 4, 5, 6, 7, 8 };
    strs2.copy_intarray(&strs2, arrs2A, 1);
    strs2.concatenation_intarray(&strs2, arrs2B, 7);
    std::array<int, 8> data2{ 1, 2, 3, 4, 5, 6, 7, 8 };
    for (int index = 0; index < 8; ++index)
    {
	if (*strs2.at(&strs2, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs2.at(" << index << ") = " << *strs2.at(&strs2, index) << "\t:: must be "
		<< data2[index] << std::endl;
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

    c_darray_int_destructor(&strs0);
    c_darray_int_destructor(&strs1);
    c_darray_int_destructor(&strs2);

    //c_darray_int_destructor(&strd0);
    //c_darray_int_destructor(&strd1);
    //c_darray_int_destructor(&strd2);

    if (result)
	std::cout << "TRUE" << std::endl;
}