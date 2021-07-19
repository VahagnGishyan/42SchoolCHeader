#include "Test_CVectorInt.h"

void Test_CVectorInt::ArraySize()
{
    std::cout << "\tArraySize()\t\t";

    bool result = true;

    c_vector_int strs0;
    c_vector_int strs1;
    c_vector_int strs2;
    c_vector_int strs3;

    //c_vector_int strd0;
    //c_vector_int strd1;
    //c_vector_int strd2;
    //c_vector_int strd3;

    c_vector_int_constructor(&strs0);
    c_vector_int_constructor(&strs1);
    c_vector_int_constructor(&strs2);
    c_vector_int_constructor(&strs3);

    //c_vector_int_constructor(&strd0);
    //c_vector_int_constructor(&strd1);
    //c_vector_int_constructor(&strd2);
    //c_vector_int_constructor(&strd3);


    /*Check 0*/
    int arrs0[1];
    strs0.copy_intarray(&strs0, arrs0, 0);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 0 || !strs0.is_empty(&strs0))
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs0.size(&strs0) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs0.capacity(&strs0) << "\t:: must be poitive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs0.is_empty(&strs0) << "\t:: must be false" << std::endl;
    }

    /*Check 1*/
    int arrs1[1]{ 4 };
    strs1.copy_intarray(&strs1, arrs1, 0);
    strs1.clear(&strs1);
    if (strs1.size(&strs1) != 0 || strs1.capacity(&strs1) != 0 || !strs1.is_empty(&strs1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs1.size(&strs1) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs1.capacity(&strs1) << "\t:: must be poistive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs1.is_empty(&strs1) << "\t:: must be false" << std::endl;
    }

    /*Check 2*/
    int arrs2[1]{ 4 };
    strs2.copy_intarray(&strs2, arrs2, 1);
    strs2.clear(&strs2);
    if (strs2.size(&strs2) != 0 || strs2.capacity(&strs2) >! 0 || !strs2.is_empty(&strs2))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs2.size(&strs2) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs2.capacity(&strs2) << "\t:: must be poitive" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs2.is_empty(&strs2) << "\t:: must be false" << std::endl;
    }

    /*Check 3*/
    int arrs3[128]{ 0, 1, 2, 3, 4 };
    strs3.copy_intarray(&strs3, arrs3, 5);
    strs3.clear(&strs3);
    if (strs3.size(&strs3) != 0 || strs3.capacity(&strs3) > !0 || !strs3.is_empty(&strs3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.size()      = " << strs3.size(&strs3) << "\t:: must be 0" << std::endl;
	std::cout << "\tstrs.capasity()  = " << strs3.capacity(&strs3) << "\t:: must be positve" << std::endl;
	std::cout << "\t!strs.is_empty() = " << !strs3.is_empty(&strs3) << "\t:: must be false" << std::endl;
    }

 //   /*Check 4*/
 //   char arrd0[1];
 //   strd0.copy_chararray(&strd0, arrd0, 0);
 //   if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 0 || !strd0.is_empty(&strd0) || !strd0.is_null(&strd0))
 //   {
	//result = false;
	//std::cout << "ERROR" << std::endl;
	//std::cout << "\tCheck 4\t" << std::endl;
	//std::cout << "\tstrd.size()      = " << strd0.size(&strd0) << "\t:: must be 0" << std::endl;
	//std::cout << "\tstrd.capasity()  = " << strd0.capacity(&strd0) << "\t:: must be 0" << std::endl;
	//std::cout << "\t!strd.is_empty() = " << !strd0.is_empty(&strd0) << "\t:: must be false/0" << std::endl;
	//std::cout << "\t!strd.is_null() = " << !strd0.is_null(&strd0) << "\t:: must be false/0" << std::endl;
 //   }

 //   /*Check 5*/
 //   char arrd1[1]{ 'a' };
 //   strd1.copy_chararray(&strd1, arrd1, 0);
 //   strd1.clear(&strd1);
 //   if (strd1.size(&strd1) != 0 || strd1.capacity(&strd1) != 0 || !strd1.is_empty(&strd1) || !strd1.is_null(&strd1))
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 5\t" << std::endl;
	//std::cout << "\tstrd.size()      = " << strd1.size(&strd1) << "\t:: must be 0" << std::endl;
	//std::cout << "\tstrd.capasity()  = " << strd1.capacity(&strd1) << "\t:: must be 0" << std::endl;
	//std::cout << "\t!strd.is_empty() = " << !strd1.is_empty(&strd1) << "\t:: must be false" << std::endl;
 //   }

 //   /*Check 6*/
 //   char arrd2[1]{ 'a' };
 //   strd2.copy_chararray(&strd2, arrd2, 1);
 //   strd2.clear(&strd2);
 //   if (strd2.size(&strd2) != 0 || strd2.capacity(&strd2) != 0 || !strd2.is_empty(&strd2) || !strd2.is_null(&strd2))
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 6\t" << std::endl;
	//std::cout << "\tstrd.size()      = " << strd2.size(&strd2) << "\t:: must be 0" << std::endl;
	//std::cout << "\tstrd.capasity()  = " << strd2.capacity(&strd2) << "\t:: must be 0" << std::endl;
	//std::cout << "\t!strd.is_empty() = " << !strd2.is_empty(&strd2) << "\t:: must be false" << std::endl;
 //   }

 //   /*Check 7*/
 //   char arrd3[128]{ "abcde" };
 //   strd3.copy_chararray(&strd3, arrd3, 5);
 //   strd3.clear(&strd3);
 //   if (strd3.size(&strd3) != 0 || strd3.capacity(&strd3) != 0 || !strd3.is_empty(&strd3) || !strd3.is_null(&strd3))
 //   {
	//if (result)
	//{
	//    std::cout << "ERROR" << std::endl;
	//    result = false;
	//}
	//std::cout << "\tCheck 7\t" << std::endl;
	//std::cout << "\tstrd.size()      = " << strd3.size(&strd3) << "\t:: must be 0" << std::endl;
	//std::cout << "\tstrd.capasity()  = " << strd3.capacity(&strd3) << "\t:: must be 0" << std::endl;
	//std::cout << "\t!strd.is_empty() = " << !strd3.is_empty(&strd3) << "\t:: must be false" << std::endl;
 //   }

    c_vector_int_destructor(&strs0);
    c_vector_int_destructor(&strs1);
    c_vector_int_destructor(&strs2);
    c_vector_int_destructor(&strs3);

    //c_vector_int_destructor(&strd0);
    //c_vector_int_destructor(&strd1);
    //c_vector_int_destructor(&strd2);
    //c_vector_int_destructor(&strd3);

    if (result)
	std::cout << "TRUE" << std::endl;
}