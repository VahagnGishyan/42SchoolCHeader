#include "Test_CString.h"

void Test_CString::Initialization()
{
    std::cout << "\tInitialization()\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;

    c_string strd0;
    c_string strd1;
    c_string strd2;
    c_string strd3;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);
    c_string_constructor(&strd3);

    /*Check 0*/
    char arrs0[1];
    strs0.setdata(&strs0,arrs0, 0, 1);
    if (strs0.size(&strs0) != 0 || strs0.capacity(&strs0) != 1)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.size() = " << strs0.size(&strs0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstr.capasity() = " << strs0.capacity(&strs0) << "\t:: must be 1" << std::endl;
    }

    /*Check 1*/
    char arrs1[1]{ 'a' };
    strs1.setdata(&strs1, arrs1, 0, 1);
    if (strs1.size(&strs1) != 0 || strs1.capacity(&strs1) != 1)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstrss.size() = " << strs1.size(&strs1) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrss.capasity() = " << strs1.capacity(&strs1) << "\t:: must be 1" << std::endl;
    }

    /*Check 2*/
    char arrs2[1]{ 'a' };
    strs2.setdata(&strs2, arrs2, 1, 1);
    char symbol_front2 = *strs2.front(&strs2);
    char symbol_back2 = *strs2.back(&strs2);
    if (strs2.size(&strs2) != 1 || strs2.capacity(&strs2) != 1 || symbol_front2 != 'a' || symbol_back2 != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrs.size() = " << strs2.size(&strs2) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrs.capasity() = " << strs2.capacity(&strs2) << "\t:: must be 1" << std::endl;
	std::cout << "\t*strs.front() = " << *strs2.front(&strs2) << "\t:: must be a" << std::endl;
	std::cout << "\t*strs.back() = " << *strs2.back(&strs2) << "\t\t:: must be a" << std::endl;
    }

    /*Check 3*/
    char arrs3[128]{ "abcde" };
    strs3.setdata(&strs3, arrs3, 5, 128);
    if (strs3.size(&strs3) != 5 || strs3.capacity(&strs3) != 128 || *strs3.front(&strs3) != 'a' || *strs3.back(&strs3) != 'e')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstrs.size() = " << strs3.size(&strs3) << "\t\t:: must be 5" << std::endl;
	std::cout << "\tstrs.capasity() = " << strs3.capacity(&strs3) << "\t:: must be 128" << std::endl;
	std::cout << "\t*strs.front() = " << *strs3.front(&strs3) << "\t:: must be a" << std::endl;
	std::cout << "\t*strs.back() = " << *strs3.back(&strs3) << "\t\t:: must be e" << std::endl;
    }

    /*Check 4*/
    char arrsd0[1];
    strd0.copy_chararray(&strd0, arrsd0, 0);
    if (strd0.size(&strd0) != 0 || strd0.capacity(&strd0) != 0)
    {
	result = false;
	std::cout << "ERROR" << std::endl;
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd0.size(&strd0) << "\t\t:: must be 0" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd0.capacity(&strd0) << "\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    char arrsd1[1]{ 'a' };
    strd1.copy_chararray(&strd1, arrsd1, 0);
    if (strd1.size(&strd1) != 0 || strd1.capacity(&strd1) != 0)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd1.size(&strd1) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd1.capacity(&strd1) << "\t:: must be 0" << std::endl;
    }

    /*Check 6*/
    char arrsd2[1]{ 'a' };
    strd2.copy_chararray(&strd2, arrsd2, 1);
    if (strd2.size(&strd2) != 1 || strd2.capacity(&strd2) < 1 || *strd2.front(&strd2) != 'a' || *strd2.back(&strd2) != 'a')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstrd.size() = " << strd2.size(&strd2) << "\t\t:: must be 1" << std::endl;
	std::cout << "\tstrd.capasity() = " << strd2.capacity(&strd2) << "\t:: must be >= 1" << std::endl;
	std::cout << "\t*strd.front() = " << *strd2.front(&strd2) << "\t:: must be a" << std::endl;
	std::cout << "\t*strd.back() = " << *strd2.back(&strd2) << "\t\t:: must be a" << std::endl;
    }

    /*Check 7*/
    char arrsd3[128]{ "abcde" };
    strd3.copy_chararray(&strd3, arrsd3, 5);
    if (strd3.size(&strd3) != 5 || strd3.capacity(&strd3) < 5 || *strd3.front(&strd3) != 'a' || *strd3.back(&strd3) != 'e')
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

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);
    c_string_destructor(&strd3);

    if (result)
	std::cout << "TRUE" << std::endl;
}