#include "test_string.h"

void Test_CSString::PushPopBack()
{
    std::cout << "\tPushPoPBack()\t\t";

    bool result = true;

    /*Check 0*/
    char arr0[1]{ 'a' };
    c_sstring str0;
    c_sstring_initaliaztion(&str0);
    str0.constructor(&str0, arr0, 1, 1);
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
    c_sstring str1;
    c_sstring_initaliaztion(&str1);
    str1.constructor(&str1, arr1, 25, 128);
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

    str0.destructor(&str0);
    str1.destructor(&str1);

    if (result)
	std::cout << "TRUE" << std::endl;
}