#include "Test_CString.h"

void Test_CString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;

    c_string strd0;
    c_string strd1;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);

    /*Check 0*/
    char arrs0[1]{ 'a' };
    strs0.setdata(&strs0, arrs0, 1, 1);
    strs0.pop_back(&strs0);
    if (!strs0.is_empty(&strs0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstrs.is_empty()     = " << strs0.is_empty(&strs0) << "\t:: must be true" << std::endl;
    }

    /*Check 1*/
    char arrs1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strs1.setdata(&strs1, arrs1, 25, 128);
    strs1.push_back(&strs1, 'b');
    if (*strs1.back(&strs1) != 'b')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "*strs1.back()     = " << *strs1.back(&strs1) << "\t:: must be b" << std::endl;
    }

    /*Check 2*/
    char arrd0[1]{ 'a' };
    strd0.copy_chararray(&strd0, arrd0, 1);
    strd0.pop_back(&strd0);
    if (!strd0.is_empty(&strd0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstrd.is_empty()     = " << strd0.is_empty(&strd0) << "\t:: must be true" << std::endl;
    }

    /*Check 3*/
    char arrd1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    strd1.copy_chararray(&strd1, arrd1, 25);
    strd1.push_back(&strd1, 'b');
    if (*strd1.back(&strd1) != 'b')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "*strd1.back()     = " << *strd1.back(&strd1) << "\t:: must be b" << std::endl;
    }


    c_string_destructor(&strs0);
    c_string_destructor(&strs1);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);

    if (result)
	std::cout << "TRUE" << std::endl;
}