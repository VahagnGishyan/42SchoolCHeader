#include "Test_CDString.h"

void Test_CDString::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    c_dstring str0;
    c_dstring str1;
    c_dstring str2;

    c_dstring_constructor(&str0);
    c_dstring_constructor(&str1);
    c_dstring_constructor(&str2);

    /*Check 0*/
    char arr0A[128] = "Vahagn ";
    char arr0B[128] = "Gishyan";
    str0.setdata(&str0, arr0A, 7);
    str0.concatenation_chararray(&str0, arr0B, 7);
    std::string data0{ "Vahagn Gishyan" };
    for (int index = 0; index < 14; ++index)
    {
	if (*str0.at(&str0, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*str0.at(" << index << ") = " << *str0.at(&str0, index) << "\t::must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arr1A[128]{ 'V' };
    char arr1B[1]{ 'G' };
    str1.setdata(&str1, arr1A, 1);
    str1.concatenation_chararray(&str1, arr1B, 1);
    std::string data1{ "VG" };
    for (int index = 0; index < 2; ++index)
    {
	if (*str1.at(&str1, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*str1.at(" << index << ") = " << *str1.at(&str1, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arr2A[128] = "V";
    char arr2B[8]{ "GISHYAN" };
    str2.setdata(&str2, arr2A, 1);
    str2.concatenation_chararray(&str2, arr2B, 7);
    std::string data2{ "VGISHYAN" };
    for (int index = 0; index < 8; ++index)
    {
	if (*str2.at(&str2, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*str2.at(" << index << ") = " << *str2.at(&str2, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    c_dstring_destructor(&str0);
    c_dstring_destructor(&str1);
    c_dstring_destructor(&str2);

    if (result)
	std::cout << "TRUE" << std::endl;
}