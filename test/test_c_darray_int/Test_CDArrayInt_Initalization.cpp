#include "Test_CDArrayInt.h"

void Test_CDArrayInt::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;


    c_darray_int strs0;
    c_darray_int strs1;
    c_darray_int strs2;
    c_darray_int strs3;

    //c_darray_int strd0;
    //c_darray_int strd1;
    //c_darray_int strd2;
    //c_darray_int strd3;

    c_darray_int_constructor(&strs0);
    c_darray_int_constructor(&strs1);
    c_darray_int_constructor(&strs2);
    c_darray_int_constructor(&strs3);

    //c_darray_int_constructor(&strd0);
    //c_darray_int_constructor(&strd1);
    //c_darray_int_constructor(&strd2);
    //c_darray_int_constructor(&strd3);

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
    char symbol_front2 = *strs2.front(&strs2);
    char symbol_back2 = *strs2.back(&strs2);
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

 //   /*Check 4*/
 //   int arrsd0[1];
 //    (&strd0, arrsd0, 0);
 //   if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 0)
 //   {
	//result = false;
	//std::cout << "ERROR" << std::endl;
	//std::cout << "\tCheck 4\t" << std::endl;
	//std::cout << "\tstrd.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	//std::cout << "\tstrd.capasity() = " << strd0.capacity(&strd0) << "\t:: must be 0" << std::endl;
 //   }

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

    c_darray_int_destructor(&strs0);
    c_darray_int_destructor(&strs1);
    c_darray_int_destructor(&strs2);
    c_darray_int_destructor(&strs3);

    //c_darray_int_destructor(&strd0);
    //c_darray_int_destructor(&strd1);
    //c_darray_int_destructor(&strd2);
    //c_darray_int_destructor(&strd3);

    if (result)
	std::cout << "TRUE" << std::endl;
}