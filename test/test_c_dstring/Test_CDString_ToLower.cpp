#include "Test_CDString.h"

void Test_CDString::ToLower()
{
    std::cout << "\tToLower()\t\t";
    bool result = true;

    c_dstring str0A;
    c_dstring str0B;
    c_dstring str1A;
    c_dstring str1B;
    c_dstring str2A;
    c_dstring str2B;
    c_dstring str3A;
    c_dstring str3B;
    c_dstring str4A;
    c_dstring str4B;
    c_dstring str5A;
    c_dstring str5B;

    c_dstring_constructor(&str0A);
    c_dstring_constructor(&str0B);
    c_dstring_constructor(&str1A);
    c_dstring_constructor(&str1B);
    c_dstring_constructor(&str2A);
    c_dstring_constructor(&str2B);
    c_dstring_constructor(&str3A);
    c_dstring_constructor(&str3B);
    c_dstring_constructor(&str4A);
    c_dstring_constructor(&str4B);
    c_dstring_constructor(&str5A);
    c_dstring_constructor(&str5B);

    /*Check 0*/
    char arr0A[1] = { 'V' };
    char arr0B[128];
    str0A.setdata(&str0A, arr0A, 1);
    str0A.to_lower_chararray(&str0A, arr0B);
    str0B.setdata(&str0B, arr0B, 1);
    std::string data0{ 'v' };
    for (int index = 0; index < str0B.size(&str0B); ++index)
    {
	if (*str0B.at(&str0B, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*str0.at(" << index << ") = " << *str0B.at(&str0B, index) << "\t:: must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arr1A[128] = { "VAHAGNGISHYAN" };
    char arr1B[128];
    str1A.setdata(&str1B, arr1A, std::strlen(arr1A));
    str1A.to_lower_chararray(&str1B, arr1B);
    str1B.setdata(&str1B, arr1B, std::strlen(arr1B));
    std::string data1{ "vahagngishyan" };
    for (int index = 1; index < str1B.size(&str1B); ++index)
    {
	if (*str1B.at(&str1B, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\t*str1.at(" << index << ") = " << *str1B.at(&str1B, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arr2A[228] = { "VAHAGN GISHYAN" };
    char arr2B[228];
    str2A.setdata(&str2A, arr2A, std::strlen(arr2A));
    str2A.to_lower_chararray(&str2A, arr2B);
    str2B.setdata(&str2B, arr2B, std::strlen(arr2B));
    std::string data2{ "vahagn gishyan" };
    for (int index = 2; index < str2B.size(&str2B); ++index)
    {
	if (*str2B.at(&str2B, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*str2.at(" << index << ") = " << *str2B.at(&str2A, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    /*Check 3*/
    char arr3A[338] = { "VAHAGN GISHYAN" };
    char arr3B[338];
    str3A.setdata(&str3A, arr3A, std::strlen(arr2A));
    str3A.to_lower_chararray(&str3A, arr3B);
    str3B.setdata(&str3B, arr3B, std::strlen(arr3B));
    std::string data3{ "vahagn gishyan" };
    for (int index = 3; index < str3B.size(&str3B); ++index)
    {
	if (*str3B.at(&str3B, index) != data3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t*str3.at(" << index << ") = " << *str3B.at(&str3B, index) << "\t:: must be "
		<< data3[index] << std::endl;
	}
    }

    /*Check 4*/
    char arr4A[448] = { "VAHAGN GISHYAN 456" };
    char arr4B[448];
    str4A.setdata(&str4A, arr4A, std::strlen(arr4A));
    str4A.to_lower_chararray(&str4A, arr4B);
    str4B.setdata(&str4B, arr4B, std::strlen(arr4B));
    std::string data4{ "vahagn gishyan 456" };
    for (int index = 4; index < str4B.size(&str4B); ++index)
    {
	if (*str4B.at(&str4B, index) != data4[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\t*str4.at(" << index << ") = " << *str4B.at(&str4B, index) << "\t:: must be "
		<< data4[index] << std::endl;
	}
    }

    /*Check 5*/
    char arr5A[558] = { "VAHAGN GISHYAN 556 ^&*" };
    char arr5B[558];
    str5A.setdata(&str5A, arr5A, std::strlen(arr5A));
    str5A.to_lower_chararray(&str5A, arr5B);
    str5B.setdata(&str5B, arr5B, std::strlen(arr5B));
    std::string data5{ "vahagn gishyan 556 ^&*" };
    for (int index = 5; index < str5B.size(&str5B); ++index)
    {
	if (*str5B.at(&str5B, index) != data5[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\t*str5.at(" << index << ") = " << *str5B.at(&str5B, index) << "\t:: must be "
		<< data5[index] << std::endl;
	}
    }

    c_dstring_destructor(&str0A);
    c_dstring_destructor(&str0B);
    c_dstring_destructor(&str1A);
    c_dstring_destructor(&str1B);
    c_dstring_destructor(&str2A);
    c_dstring_destructor(&str2B);
    c_dstring_destructor(&str3A);
    c_dstring_destructor(&str3B);
    c_dstring_destructor(&str4A);
    c_dstring_destructor(&str4B);
    c_dstring_destructor(&str5A);
    c_dstring_destructor(&str5B);

    if (result)
	std::cout << "TRUE" << std::endl;
}