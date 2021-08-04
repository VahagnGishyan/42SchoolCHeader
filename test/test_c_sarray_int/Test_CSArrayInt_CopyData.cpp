#include "Test_CSArrayInt.h"

void Test_CSArrayInt::CopyData()
{
    std::cout << "\tCopyData()\t\t";

    bool result = true;

    c_sarray_int strs0;
    c_sarray_int strs2A;
    c_sarray_int strs2B;

    //c_sarray_int strd0;
    //c_sarray_int strd1;
    //c_sarray_int strd2A;
    //c_sarray_int strd2B;

    c_sarray_int_constructor(&strs0);
    c_sarray_int_constructor(&strs2B);
    c_sarray_int_constructor(&strs2A);

    //c_sarray_int_constructor(&strd0);
    //c_sarray_int_constructor(&strd1);
    //c_sarray_int_constructor(&strd2B);
    //c_sarray_int_constructor(&strd2A);

    /*Check 0*/
    int arrDest0[1];
    strs0.set_data(&strs0, arrDest0, 0, 1);
    int arrSorc0[1]{ 5 };
    strs0.copy_intarray(&strs0, arrSorc0, 1);
    if (*strs0.front(&strs0) != 5 || strs0.size(&strs0) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\t*strs0.front()   = " << *strs0.front(&strs0) << "\t:: must be 5" << std::endl;
	std::cout << "\tstrs0.size()     = " << strs0.size(&strs0) << "\t:: must be 1" << std::endl;
    }

    /*Check 2*/
    int arrSorc2A[128]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
    strs2A.set_data(&strs2A, arrSorc2A, 25, 228);
    strs2B.set_data(&strs2B, arrSorc2A, 0, 228);
    strs2B.copy_c_sarray_int(&strs2B, &strs2A);
    int number = 1;
    for (int index = 0; index < strs2B.size(&strs2B); ++index)
    {
	if (*strs2B.at(&strs2B, index) != number++)
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strs2.at("<<index<<") = " << *strs2B.at(&strs2B, index) << "\t::must be " << number << std::endl;
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
 //   strd2B.copy_c_sarray_int(&strd2B, &strd2A);
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

    c_sarray_int_destructor(&strs0);
    c_sarray_int_destructor(&strs2A);
    c_sarray_int_destructor(&strs2B);

    //c_sarray_int_destructor(&strd0);
    //c_sarray_int_destructor(&strd1);
    //c_sarray_int_destructor(&strd2A);
    //c_sarray_int_destructor(&strd2B);

    if (result)
	std::cout << "TRUE" << std::endl;
}