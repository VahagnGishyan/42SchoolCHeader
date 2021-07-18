#include "Test_CSArrayInt.h"

void Test_CSArrayInt::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    c_sarray_int strs0;
    c_sarray_int strs1;

    c_sarray_int_constructor(&strs0);
    c_sarray_int_constructor(&strs1);

    /*Check 0*/
    int arrs0[1]{ 4 };
    strs0.set_data(&strs0, arrs0, 1, 1);
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
    int arrs1[128]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
    strs1.set_data(&strs1, arrs1, 25, 128);
    strs1.push_back(&strs1, 26);
    if (*strs1.back(&strs1) != 26)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "*strs1.back()     = " << *strs1.back(&strs1) << "\t:: must be 26" << std::endl;
    }


    c_sarray_int_destructor(&strs0);
    c_sarray_int_destructor(&strs1);

    if (result)
	std::cout << "TRUE" << std::endl;
}