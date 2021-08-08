#include "Test_CVectorInt.h"

void Test_CVectorInt::IndexOperators()
{
    std::cout << "\tIndexOperators()\t";

    bool result = true;

    c_vector_int strs0;
    c_vector_int strs1;
    c_vector_int strs2;
    c_vector_int strs3;
    c_vector_int strs4;

    c_vector_int_constructor(&strs0);
    c_vector_int_constructor(&strs1);
    c_vector_int_constructor(&strs2);
    c_vector_int_constructor(&strs3);
    c_vector_int_constructor(&strs4);

    //c_vector_int str0;
    //c_vector_int str1;
    //c_vector_int str2;
    //c_vector_int str3;
    //c_vector_int str4;

    //c_vector_int_constructor(&str0);
    //c_vector_int_constructor(&str1);
    //c_vector_int_constructor(&str2);
    //c_vector_int_constructor(&str3);
    //c_vector_int_constructor(&str4);

    /*Check 0*/
    int arrs0[1]{ 'a'};
    strs0.copy_intarray(&strs0, arrs0, 1);
    if (*strs0.at(&strs0, 0) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*strs.at(0)     = " << *strs0.at(&strs0, 0) << "\t:: must be a" << std::endl;
    }

    /*Check 2*/
    int arrs2[128]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
    strs2.copy_intarray(&strs2, arrs2, 25);
    for (int index = 0,  number = 1; index < 25; ++index)
    {
	if (*strs1.at(&strs2, index) != number++)
	{

	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strs.at("<<index<<") = " << *strs2.at(&strs2, index) << "\t::must be "<< number << std::endl;
	}
    }


    /*Check 3*/
    int arrs3[128]{ 1 };
    strs3.copy_intarray(&strs3, arrs3, 1);
    if (*strs3.front(&strs3) != *strs3.back(&strs3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*strs3.front()   = " << *strs3.front(&strs3) << "\t:: must be 1" << std::endl;
	std::cout << "\t*strs3.back()    = " << *strs3.back(&strs3) << "\t:: must be 1" << std::endl;
    }

    /*Check 4*/
    int arrs4[128]{ 0, 1, 2, 3, 4 };
    strs4.copy_intarray(&strs4, arrs4, 5);
    if (*strs4.front(&strs4) != 0 || * strs4.back(&strs4) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\t*strs3.front()   = " << *strs4.front(&strs4) << "\t:: must be 0" << std::endl;
	std::cout << "\t*strs3.back()    = " << *strs4.back(&strs4) << "\t:: must be 4" << std::endl;
    }

 //   /*Check 5*/
 //   int arrd0[1]{ 'a' };
 //   str0.copy_arrayint(&str0, arrd0, 1);
 //   if (*str0.at(&str0, 0) != 'a')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 5\t" << std::endl;
	//std::cout << "\t*str.at(0)     = " << *str0.at(&str0, 0) << "\t:: must be a" << std::endl;
 //   }

 //   /*Check 6*/
 //   int arrd1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
 //   str1.copy_intarray(&str1, arrd1, 25);
 //   if (*str1.at(&str1, 0) != 'a')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 6\t" << std::endl;
	//std::cout << "\t*str.at(0)     = " << *str1.at(&str1, 0) << "\t:: must be a" << std::endl;
 //   }

 //   /*Check 7*/
 //   int arrd2[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
 //   str2.copy_intarray(&str2, arrd2, 25);
 //   for (int index = 0; index < 25; ++index)
 //   {
	//if (*str1.at(&str2, index) != 'a')
	//{

	//    if (result)
	//    {
	//	std::cout << "ERROR" << std::endl;
	//	result = false;
	//    }
	//    std::cout << "\tCheck 7\t" << std::endl;
	//    std::cout << "\t*str.at(" << index << ") = " << *str2.at(&str2, index) << "\t::must be a" << std::endl;
	//}
 //   }


 //   /*Check 8*/
 //   int arrd3[128]{ "a" };
 //   str3.copy_intarray(&str3, arrd3, 1);
 //   if (*str3.front(&str3) != *str3.back(&str3))
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 8\t" << std::endl;
	//std::cout << "\t*str3.front()   = " << *str3.front(&str3) << "\t:: must be a" << std::endl;
	//std::cout << "\t*str3.back()    = " << *str3.back(&str3) << "\t:: must be a" << std::endl;
 //   }

 //   /*Check 9*/
 //   int arrd4[128]{ "abcde" };
 //   str4.copy_intarray(&str4, arrd4, 5);
 //   if (*str4.front(&str4) != 'a' || *str4.back(&str4) != 'e')
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 9\t" << std::endl;
	//std::cout << "\t*str3.front()   = " << *str4.front(&str4) << "\t:: must be a" << std::endl;
	//std::cout << "\t*str3.back()    = " << *str4.back(&str4) << "\t:: must be e" << std::endl;
 //   }

    //c_vector_int_destructor(&str0);
    //c_vector_int_destructor(&str1);
    //c_vector_int_destructor(&str2);
    //c_vector_int_destructor(&str3);
    //c_vector_int_destructor(&str4);

    c_vector_int_destructor(&strs0);
    c_vector_int_destructor(&strs1);
    c_vector_int_destructor(&strs2);
    c_vector_int_destructor(&strs3);
    c_vector_int_destructor(&strs4);

    if (result)
	std::cout << "TRUE" << std::endl;
}