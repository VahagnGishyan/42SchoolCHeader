#include "Test_CVectorInt.h"

void Test_CVectorInt::ResizeClear()
{
    std::cout << "\tResizeClear()\t\t";

    bool result = true;


    c_vector_int strs0;
    c_vector_int strs1;
    c_vector_int strs2;
    c_vector_int strs3;

    c_vector_int strd0;
    c_vector_int strd1;
    //c_vector_int strd2;
    //c_vector_int strd3;

    c_vector_int_constructor(&strs0);
    c_vector_int_constructor(&strs1);
    c_vector_int_constructor(&strs2);
    c_vector_int_constructor(&strs3);

    c_vector_int_constructor(&strd0);
    c_vector_int_constructor(&strd1);
    //c_vector_int_constructor(&strd2);
    //c_vector_int_constructor(&strd3);


    /*Check 0*/
    int arrs0[1];
    strs0.copy_intarray(&strs0, arrs0, 0);
    if (strs0.resize(&strs0, 0) != true || strs0.resize(&strs0, 1) != true)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.resize(0) = " << strs0.resize(&strs0, 0) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstr.resize(1) = " << strs0.resize(&strs0, 1) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    int arrs1[1];
    strs1.copy_intarray(&strs1, arrs1, 0);
    if (strs1.resize(&strs1, -2) != false || strs1.resize(&strs1, 2) != true)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrss.resize(-2) = " << strs1.resize(&strs1, -2) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrss.resize(2) = " << strs1.resize(&strs1, 2) << "\t:: must be 1" << std::endl;
    }

    /*Check 2*/
    int arrs2[4]{ 4 };
    strs2.copy_intarray(&strs2, arrs2, 1);
    if (strs2.resize(&strs2, 0) != 1 || strs2.resize(&strs2, 3) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.resize(0) = " << strs2.resize(&strs2, 0) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrs.resize(3) = " << strs2.resize(&strs2, 3) << "\t:: must be 1" << std::endl;
    }

    /*Check 3*/
    int arrs3[1]{ 4 };
    strs3.copy_intarray(&strs3, arrs3, 1);
    if (strs3.resize(&strs3, -2) != 0 || strs3.resize(&strs3, 14) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.resize(-2) = " << strs3.resize(&strs3, -2) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrs.resize(14) = " << strs3.resize(&strs3, 14) << "\t:: must be 1" << std::endl;
    }

    /*Check 4*/
    int arrsd0[1];
    (&strd0, arrsd0, 0);
    if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd0.capacity(&strd0) << "\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    int arrd0[1];
    strd0.copy_intarray(&strd0, arrd0, 0);
    strd0.clear(&strd0);
    if (strd0.size(&strd0) != 0 || strd0.is_empty(&strd0) != true)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstr.is_empty(1) = " << strd0.is_empty(&strd0) << "\t:: must be true/1" << std::endl;
    }

    /*Check 6*/
    int arrd1[1]{4};
    strd1.copy_intarray(&strd1, arrd1, 1);
    strd1.clear(&strd1);
    if (strd1.size(&strd1) != 0 || strd1.is_empty(&strd1) != true)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr.size() = " << strd1.size(&strd1) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstr.is_empty(1) = " << strd1.is_empty(&strd1) << "\t:: must be true/1" << std::endl;
    }

    /*Check 7*/
    int arrsd1[128] = { 1, 2, 3, 4, 5, 6, 7 };
    strd0.set_data(&strd0, arrsd1, 0, 7);
    if (strd0.resize(&strd0, 0) != 1 || strd0.resize(&strd0, 1) != 1 
	    || strd0.resize(&strd0, 5) != 1 || strd0.resize(&strd0, 7) != 1
		|| strd0.resize(&strd0, -5) != 0 || strd0.resize(&strd0, -1) != 0)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd0.capacity(&strd0) << "\t:: must be 0" << std::endl;
    }



    //   /*Check 5*/
    //   char arrsd1[1]{ 'a' };
    //   strd1.copy_chararray(&strd1, arrsd1, 0);
    //   if (strd1.size(&strd1) != 0 || strd1.capacity(&strd1) != 0)
    //   {
	   //if (result)
	   //{
	   //    std::cout << "ERROR" << std::endl;
	   //    result = false;
	   //}
	   //std::cout << "\tCheck 5\t" << std::endl;
	   //std::cout << "\tstrd.size() = " << strd1.size(&strd1) << "\t\t:: must be 1" << std::endl;
	   //std::cout << "\tstrd.capasity() = " << strd1.capacity(&strd1) << "\t:: must be 0" << std::endl;
    //   }

    //   /*Check 6*/
    //   char arrsd2[1]{ 'a' };
    //   strd2.copy_chararray(&strd2, arrsd2, 1);
    //   if (strd2.size(&strd2) != 1 || strd2.capacity(&strd2) < 1 || *strd2.front(&strd2) != 'a' || *strd2.back(&strd2) != 'a')
    //   {
	   //if (result)
	   //{
	   //    std::cout << "ERROR" << std::endl;
	   //    result = false;
	   //}
	   //std::cout << "\tCheck 6\t" << std::endl;
	   //std::cout << "\tstrd.size() = " << strd2.size(&strd2) << "\t\t:: must be 1" << std::endl;
	   //std::cout << "\tstrd.capasity() = " << strd2.capacity(&strd2) << "\t:: must be >= 1" << std::endl;
	   //std::cout << "\t*strd.front() = " << *strd2.front(&strd2) << "\t:: must be a" << std::endl;
	   //std::cout << "\t*strd.back() = " << *strd2.back(&strd2) << "\t\t:: must be a" << std::endl;
    //   }

    //   /*Check 7*/
    //   char arrsd3[128]{ "abcde" };
    //   strd3.copy_chararray(&strd3, arrsd3, 5);
    //   if (strd3.size(&strd3) != 5 || strd3.capacity(&strd3) < 5 || *strd3.front(&strd3) != 'a' || *strd3.back(&strd3) != 'e')
    //   {
	   //if (result)
	   //{
	   //    std::cout << "ERROR" << std::endl;
	   //    result = false;
	   //}
	   //std::cout << "\tCheck 7\t" << std::endl;
	   //std::cout << "\tstrd.size() = " << strd3.size(&strd3) << "\t\t:: must be 5" << std::endl;
	   //std::cout << "\tstrd.capasity() = " << strd3.capacity(&strd3) << "\t:: must be >= 5" << std::endl;
	   //std::cout << "\t*strd.front() = " << *strd3.front(&strd3) << "\t:: must be a" << std::endl;
	   //std::cout << "\t*strd.back() = " << *strd3.back(&strd3) << "\t\t:: must be e" << std::endl;
    //   }

    c_vector_int_destructor(&strs0);
    c_vector_int_destructor(&strs1);
    c_vector_int_destructor(&strs2);
    c_vector_int_destructor(&strs3);

    c_vector_int_destructor(&strd0);
    c_vector_int_destructor(&strd1);
    //c_vector_int_destructor(&strd2);
    //c_vector_int_destructor(&strd3);

    if (result)
	std::cout << "TRUE" << std::endl;
}