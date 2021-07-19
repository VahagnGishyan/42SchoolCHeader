#include "Test_CVectorInt.h"

void Test_CVectorInt::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;


    c_vector_int strs0;
    c_vector_int strs1;
    c_vector_int strs2;
    c_vector_int strs3;

    c_vector_int strd0;
    c_vector_int strd1;
    c_vector_int strd2;
    c_vector_int strd3; 
    c_vector_int strd4;

    c_vector_int_constructor(&strs0);
    c_vector_int_constructor(&strs1);
    c_vector_int_constructor(&strs2);
    c_vector_int_constructor(&strs3);

    c_vector_int_constructor(&strd0);
    c_vector_int_constructor(&strd1);
    c_vector_int_constructor(&strd2);
    c_vector_int_constructor(&strd3);
    c_vector_int_constructor(&strd4);

    /*Check 0*/
    int arrs0[1];
    strs0.copy_intarray(&strs0, arrs0, 0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 0)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.size(&strs0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity() = " << strs0.capacity(&strs0) << "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    int arrs1[1]{ 4 };
    strs1.copy_intarray(&strs1, arrs1, 0);
    if (strs1.size(&strs1) != 0 || strs1.capacity(&strs1) != 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrss.size() = " << strs1.size(&strs1) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrss.capasity() = " << strs1.capacity(&strs1) << "\t:: must be 0" << std::endl;
    }

    /*Check 2*/
    int arrs2[1]{ 4 };
    strs2.copy_intarray(&strs2, arrs2, 1);
    int symbol_front2 = *strs2.front(&strs2);
    int symbol_back2 = *strs2.back(&strs2);
    if (strs2.size(&strs2) != 1 || strs2.capacity(&strs2) >! 0 || symbol_front2 != 4 || symbol_back2 != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.size() = " << strs2.size(&strs2) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrs.capasity() = " << strs2.capacity(&strs2) << "\t:: must be positive" << std::endl;
	std::cout << "\t*strs.front() = " << *strs2.front(&strs2) << "\t:: must be 4" << std::endl;
	std::cout << "\t*strs.back() = " << *strs2.back(&strs2) << "\t\t:: must be 4" << std::endl;
    }

    /*Check 3*/
    int arrs3[128]{ 0, 1, 2, 3, 4 };
    strs3.copy_intarray(&strs3, arrs3, 5);
    if (strs3.size(&strs3) != 5 || strs3.capacity(&strs3) != (6) || *strs3.front(&strs3) != 0 || *strs3.back(&strs3) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.size() = " << strs3.size(&strs3) << "\t\t:: must be 5" << std::endl;
	std::cout << "\tstrs.capasity() = " << strs3.capacity(&strs3) << "\t:: must be positive" << std::endl;
	std::cout << "\t*strs.front() = " << *strs3.front(&strs3) << "\t:: must be 0" << std::endl;
	std::cout << "\t*strs.back() = " << *strs3.back(&strs3) << "\t:: must be 4" << std::endl;
    }

    /*Check 4*/
    int arrsd0[1];
    strd0.set_data(&strd0, arrsd0, 0, 1);
    if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 1)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd0.capacity(&strd0) << "\t:: must be 1" << std::endl;
    }

    /*Check 5*/
    int arrsd1[1]{ 4 };
    strd1.set_data(&strd1, arrsd1, 0, 1);
    if (strd1.size(&strd1) != 0 || strd1.capacity(&strd1) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd1.size(&strd1) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd1.capacity(&strd1) << "\t:: must be 1" << std::endl;
    }

    /*Check 6*/
    int arrsd2[1]{ 4 };
    strd2.set_data(&strd2, arrsd2, 1, 1);
    if (strd2.size(&strd2) != 1 || strd2.capacity(&strd2) < 1 || *strd2.front(&strd2) != 4 || *strd2.back(&strd2) != 4)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd2.size(&strd2) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd2.capacity(&strd2) << "\t:: must be 1" << std::endl;
	std::cout << "\t*strd.front() = " << *strd2.front(&strd2) << "\t:: must be 4" << std::endl;
	std::cout << "\t*strd.back() = " << *strd2.back(&strd2) << "\t\t:: must be 4" << std::endl;
    }

    /*Check 7*/
    int arrsd3[128]{ 1, 2, 3, 4, 5 };
    strd3.set_data(&strd3, arrsd3, 5, 5);
    if (strd3.size(&strd3) != 5 || strd3.capacity(&strd3) < 5 || *strd3.front(&strd3) != 1 || *strd3.back(&strd3) != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd3.size(&strd3) << "\t\t:: must be 5" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd3.capacity(&strd3) << "\t:: must be >= 5" << std::endl;
	std::cout << "\t*strd.front() = " << *strd3.front(&strd3) << "\t:: must be a" << std::endl;
	std::cout << "\t*strd.back() = " << *strd3.back(&strd3) << "\t\t:: must be e" << std::endl;
    }

    /*Check 8*/
    int arrsd4A[128]{ 1, 2, 3, 4, 5 };
    strd4.set_data(&strd4, arrsd4A, 5, 5);
    if (strd4.size(&strd4) != 5 || strd4.capacity(&strd4) < 5 || *strd4.front(&strd4) != 1 || *strd4.back(&strd4) != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd4.size(&strd4) << "\t\t:: must be 5" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd4.capacity(&strd4) << "\t:: must be >= 5" << std::endl;
	std::cout << "\t*strd.front() = " << *strd4.front(&strd4) << "\t:: must be a" << std::endl;
	std::cout << "\t*strd.back() = " << *strd4.back(&strd4) << "\t\t:: must be e" << std::endl;
    }

    c_vector_int_destructor(&strs0);
    c_vector_int_destructor(&strs1);
    c_vector_int_destructor(&strs2);
    c_vector_int_destructor(&strs3);

    c_vector_int_destructor(&strd0);
    c_vector_int_destructor(&strd1);
    c_vector_int_destructor(&strd2);
    c_vector_int_destructor(&strd3);
    c_vector_int_destructor(&strd4);

    if (result)
	std::cout << "TRUE" << std::endl;
}

//c_vector_int str;
//c_vector_int_constructor(&str);
//
//int arr[25];
//str.tie_static_array(&str, arr, 25);
//
//for (ushint index = 0; index < 25; ++index)
//    *str.at(&str, index) = index;
//str.set_size(&str, 25);
//for (ushint index = 0; index < 25; ++index)
//    std::cout << *str.at(&str, index) << " ";
//std::cout << std::endl;
//
//std::cout << "str size = " << str.size(&str) << std::endl;
//std::cout << "str static capacity = " << str.static_capacity(&str) << std::endl;
//std::cout << "str dynamic capacity = " << str.dynamic_capacity(&str) << std::endl;
//std::cout << "str capacity = " << str.capacity(&str) << std::endl;
//std::cout << std::endl;
//
//str.resize(&str, 50);
//for (ushint index = 25; index < 50; ++index)
//    *str.at(&str, index) = index;
//str.set_size(&str, 50);
//for (ushint index = 25; index < 50; ++index)
//    std::cout << *str.at(&str, index) << " ";
//std::cout << std::endl;
//
//std::cout << "str size = " << str.size(&str) << std::endl;
//std::cout << "str static capacity = " << str.static_capacity(&str) << std::endl;
//std::cout << "str dynamic capacity = " << str.dynamic_capacity(&str) << std::endl;
//std::cout << "str capacity = " << str.capacity(&str) << std::endl;
//
//c_vector_int_destructor(&str);