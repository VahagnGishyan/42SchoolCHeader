#include "Test_CDString.h"

void Test_CDString::ConvertToCharArray()
{
    std::cout << "\tConvertToCharArray()\t";

    bool result = true;

    c_dstring str0;
    c_dstring str1;
    c_dstring str2;
    c_dstring str3;
    c_dstring str4A;
    c_dstring str4B;
    c_dstring str5A;
    c_dstring str5B;
    c_dstring str6A;
    c_dstring str6B;
    c_dstring str7A;
    c_dstring str7B;

    c_dstring_constructor(&str0);
    c_dstring_constructor(&str1);
    c_dstring_constructor(&str2);
    c_dstring_constructor(&str3);
    c_dstring_constructor(&str4A);
    c_dstring_constructor(&str4B);
    c_dstring_constructor(&str5A);
    c_dstring_constructor(&str5B);
    c_dstring_constructor(&str6A);
    c_dstring_constructor(&str6B);
    c_dstring_constructor(&str7A);
    c_dstring_constructor(&str7B);

    /*Check 0*/
    char arr0[1] = { '5' };
    str0.setdata(&str0, arr0, 1);
    char ptr0[128];
    str0.convert_to_chararray(&str0, ptr0);
    if (*ptr0 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << *ptr0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    char arr1[128] = { "5" };
    str1.setdata(&str1, arr1, std::strlen(arr1));
    char ptr1[128];
    str1.convert_to_chararray(&str1, ptr1);
    if (*ptr1 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << *ptr1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 2*/
    char arr2[228] = { "51286" };
    str2.setdata(&str2, arr2, std::strlen(arr2));
    char ptr2[228];
    str2.convert_to_chararray(&str2, ptr2);
    std::string data2{ "51286" };
    for (ushint index = 0; index < std::strlen(ptr2); ++index)
    {
	if (ptr2[index] != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tstr2.convert_to_chararray(" << index << ") = " << ptr2[index] << "\t::must be "
		<< data2[index] << std::endl;
	}
    }


    /*Check 3*/
    char arr3[338] = { "AAAAVVVAAA1386A" };
    str3.setdata(&str3, arr3, std::strlen(arr3));
    char ptr3[338];
    str3.convert_to_chararray(&str3, ptr3);
    std::string data3{ "AAAAVVVAAA1386A" };
    for (ushint index = 0; index < std::strlen(ptr3); ++index)
    {
	if (ptr3[index] != data3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\tstr3.convert_to_int(...) = " << ptr3[index] << "\t:: must be "
		<< data3[index] << std::endl;
	}
    }

    c_dstring_destructor(&str0);
    c_dstring_destructor(&str1);
    c_dstring_destructor(&str2);
    c_dstring_destructor(&str3);
    c_dstring_destructor(&str4A);
    c_dstring_destructor(&str4B);
    c_dstring_destructor(&str5A);
    c_dstring_destructor(&str5B);
    c_dstring_destructor(&str6A);
    c_dstring_destructor(&str6B);
    c_dstring_destructor(&str7A);
    c_dstring_destructor(&str7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}