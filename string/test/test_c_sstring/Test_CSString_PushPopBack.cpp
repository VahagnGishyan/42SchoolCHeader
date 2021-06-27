#include "Test_CSString.h"

void Test_CSString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;


    c_sstring str0;
    c_sstring str1;

    c_sstring_constructor(&str0);
    c_sstring_constructor(&str1);

    /*Check 0*/
    char arr0[1]{ 'a' };
    str0.setdata(&str0, arr0, 1, 1);
    str0.pop_back(&str0);
    if (!str0.is_empty(&str0))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.is_empty()     = " << str0.is_empty(&str0) << "\t:: must be true" << std::endl;
    }

    /*Check 1*/
    char arr1[128]{ "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
    str1.setdata(&str1, arr1, 25, 128);
    str1.push_back(&str1, 'b');
    if (*str1.back(&str1) != 'b')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "*str1.back()     = " << *str1.back(&str1) << "\t:: must be b" << std::endl;
    }

    c_sstring_destructor(&str0);
    c_sstring_destructor(&str1);

    if (result)
	std::cout << "TRUE" << std::endl;
}