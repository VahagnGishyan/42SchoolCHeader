#include "Test_CString.h"

void Test_CString::ToLower()
{
    std::cout << "\tToLower()\t\t";

    bool result = true;

    c_string strs0A;
    c_string strs0B;
    c_string strs1A;
    c_string strs1B;
    c_string strs2A;
    c_string strs2B;
    c_string strs3A;
    c_string strs3B;
    c_string strs4A;
    c_string strs4B;
    c_string strs5A;
    c_string strs5B;

    c_string strd0A;
    c_string strd0B;
    c_string strd1A;
    c_string strd1B;
    c_string strd2A;
    c_string strd2B;
    c_string strd3A;
    c_string strd3B;
    c_string strd4A;
    c_string strd4B;
    c_string strd5A;
    c_string strd5B;

    c_string_constructor(&strs0A);
    c_string_constructor(&strs0B);
    c_string_constructor(&strs1A);
    c_string_constructor(&strs1B);
    c_string_constructor(&strs2A);
    c_string_constructor(&strs2B);
    c_string_constructor(&strs3A);
    c_string_constructor(&strs3B);
    c_string_constructor(&strs4A);
    c_string_constructor(&strs4B);
    c_string_constructor(&strs5A);
    c_string_constructor(&strs5B);

    c_string_constructor(&strd0A);
    c_string_constructor(&strd0B);
    c_string_constructor(&strd1A);
    c_string_constructor(&strd1B);
    c_string_constructor(&strd2A);
    c_string_constructor(&strd2B);
    c_string_constructor(&strd3A);
    c_string_constructor(&strd3B);
    c_string_constructor(&strd4A);
    c_string_constructor(&strd4B);
    c_string_constructor(&strd5A);
    c_string_constructor(&strd5B);

    /*Check 0*/
    char arr0A[1] = { 'V' };
    char arr0B[128];
    strs0A.setdata(&strs0A, arr0A, 1, 1);
    strs0A.to_lower_chararray(&strs0A, arr0B);
    strs0B.setdata(&strs0B, arr0B, 1, 128);
    std::string data0{ 'v' };
    for (ushint index = 0; index < strs0B.size(&strs0B); ++index)
    {
	if (*strs0B.at(&strs0B, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t!strs0.at(" << index << ") = " << *strs0B.at(&strs0B, index) << "\t:: must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arr1A[128] = { "VAHAGNGISHYAN" };
    char arr1B[128];
    strs1A.setdata(&strs1A, arr1A, std::strlen(arr1A), 128);
    strs1A.to_lower_chararray(&strs1A, arr1B);
    strs1B.setdata(&strs1B, arr1B, std::strlen(arr1B), 128);
    std::string data1{ "vahagngishyan" };
    for (ushint index = 1; index < strs1B.size(&strs1B); ++index)
    {
	if (*strs1B.at(&strs1B, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\t!strs1.at(" << index << ") = " << !strs1B.at(&strs1B, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arr2A[228] = { "VAHAGN GISHYAN" };
    char arr2B[228];
    strs2A.setdata(&strs2A, arr2A, std::strlen(arr2A), 228);
    strs2A.to_lower_chararray(&strs2A, arr2B);
    strs2B.setdata(&strs2B, arr2B, std::strlen(arr2B), 228);
    std::string data2{ "vahagn gishyan" };
    for (ushint index = 2; index < strs2B.size(&strs2B); ++index)
    {
	if (*strs2B.at(&strs2B, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t!strs2.at(" << index << ") = " << !strs2B.at(&strs2B, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    /*Check 3*/
    char arr3A[338] = { "VAhAGN gIsHyAn" };
    char arr3B[338];
    strs3A.setdata(&strs3A, arr3A, std::strlen(arr2A), 338);
    strs3A.to_lower_chararray(&strs3A, arr3B);
    strs3B.setdata(&strs3B, arr3B, std::strlen(arr2B), 338);
    std::string data3{ "vahagn gishyan" };
    for (ushint index = 3; index < strs3B.size(&strs3B); ++index)
    {
	if (*strs3B.at(&strs3B, index) != data3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t!strs3.at(" << index << ") = " << !strs3B.at(&strs3B, index) << "\t:: must be "
		<< data3[index] << std::endl;
	}
    }

    /*Check 4*/
    char arr4A[448] = { "VAHAGN GISHYAN 456" };
    char arr4B[448];
    strs4A.setdata(&strs4A, arr4A, std::strlen(arr4A), 448);
    strs4A.to_lower_chararray(&strs4A, arr4B);
    strs4B.setdata(&strs3B, arr4B, std::strlen(arr4B), 448);
    std::string data4{ "vahagn gishyan 456" };
    for (ushint index = 4; index < strs4B.size(&strs3B); ++index)
    {
	if (*strs4B.at(&strs3B, index) != data4[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\t!strs4.at(" << index << ") = " << !strs4B.at(&strs3B, index) << "\t:: must be "
		<< data4[index] << std::endl;
	}
    }

    /*Check 5*/
    char arr5A[558] = { "VAHAGN GISHYAN 556 ^&*" };
    char arr5B[558];
    strs5A.setdata(&strs5A, arr5A, std::strlen(arr5A), 558);
    strs5A.to_lower_chararray(&strs5A, arr5B);
    strs5B.setdata(&strs5B, arr5B, std::strlen(arr5B), 558);
    std::string data5{ "vahagn gishyan 556 ^&*" };
    for (ushint index = 5; index < strs5B.size(&strs5B); ++index)
    {
	if (*strs5B.at(&strs5B, index) != data5[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\t!strs5.at(" << index << ") = " << !strs5B.at(&strs5B, index) << "\t:: must be "
		<< data5[index] << std::endl;
	}
    }

    /*Check 0*/
    char arrd0A[1] = { 'V' };
    char arrd0B[128];
    strd0A.copy_chararray(&strd0A, arrd0A, 1);
    strd0A.to_lower_chararray(&strd0A, arrd0B);
    strd0B.copy_chararray(&strd0B, arrd0B, 1);
    std::string datad0{ 'v' };
    for (ushint index = 0; index < strd0B.size(&strd0B); ++index)
    {
	if (*strd0B.at(&strd0B, index) != datad0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strd0.at(" << index << ") = " << *strd0B.at(&strd0B, index) << "\t:: must be "
		<< datad0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arrd1A[128] = { "VAHAGNGISHYAN" };
    char arrd1B[128];
    strd1A.copy_chararray(&strd1A, arrd1A, std::strlen(arr1A));
    strd1A.to_lower_chararray(&strd1A, arrd1B);
    strd1B.copy_chararray(&strd1B, arrd1B, std::strlen(arr1B));
    std::string datad1{ "vahagngishyan" };
    for (ushint index = 1; index < strd1B.size(&strd1B); ++index)
    {
	if (*strd1B.at(&strd1B, index) != datad1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 1\t" << std::endl;
	    std::cout << "\t*strd1.at(" << index << ") = " << *strd1B.at(&strd1B, index) << "\t:: must be "
		<< datad1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arrd2A[228] = { "VAHAGN GISHYAN" };
    char arrd2B[228];
    strd2A.copy_chararray(&strd2A, arrd2A, std::strlen(arr2A));
    strd2A.to_lower_chararray(&strd2A, arrd2B);
    strd2B.copy_chararray(&strd2B, arrd2B, std::strlen(arr2B));
    std::string datad2{ "vahagn gishyan" };
    for (ushint index = 2; index < strd2B.size(&strd2B); ++index)
    {
	if (*strd2B.at(&strd2B, index) != datad2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\t*strd2.at(" << index << ") = " << *strd2B.at(&strd2B, index) << "\t:: must be "
		<< datad2[index] << std::endl;
	}
    }

    /*Check 3*/
    char arrd3A[338] = { "VAHAGN GISHYAN" };
    char arrd3B[338];
    strd3A.copy_chararray(&strd3A, arrd3A, std::strlen(arr2A));
    strd3A.to_lower_chararray(&strd3A, arrd3B);
    strd3B.copy_chararray(&strd3B, arrd3B, std::strlen(arr2B));
    std::string datad3{ "vahagn gishyan" };
    for (ushint index = 3; index < strd3B.size(&strd3B); ++index)
    {
	if (*strd3B.at(&strd3B, index) != datad3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t*strd3.at(" << index << ") = " << *strd3B.at(&strd3B, index) << "\t:: must be "
		<< datad3[index] << std::endl;
	}
    }

    /*Check 4*/
    char arrd4A[448] = { "VAHAGN GISHYAN 456" };
    char arrd4B[448];
    strd4A.copy_chararray(&strd4A, arrd4A, std::strlen(arr4A));
    strd4A.to_lower_chararray(&strd4A, arrd4B);
    strd4B.copy_chararray(&strd3B, arrd4B, std::strlen(arr4B));
    std::string datad4{ "vahagn gishyan 456" };
    for (ushint index = 4; index < strd4B.size(&strd3B); ++index)
    {
	if (*strd4B.at(&strd3B, index) != datad4[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\t*strd4.at(" << index << ") = " << *strd4B.at(&strd3B, index) << "\t:: must be "
		<< datad4[index] << std::endl;
	}
    }

    /*Check 5*/
    char arrd5A[558] = { "VAHAGN GISHYAN 556 ^&*" };
    char arrd5B[558];
    strd5A.copy_chararray(&strd5A, arrd5A, std::strlen(arr5A));
    strd5A.to_lower_chararray(&strd5A, arrd5B);
    strd5B.copy_chararray(&strd5B, arrd5B, std::strlen(arr5B));
    std::string datad5{ "vahagn gishyan 556 ^&*" };
    for (ushint index = 5; index < strd5B.size(&strd5B); ++index)
    {
	if (*strd5B.at(&strd5B, index) != datad5[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\t*strd5.at(" << index << ") = " << *strd5B.at(&strd5B, index) << "\t:: must be "
		<< datad5[index] << std::endl;
	}
    }

    c_string_destructor(&strd0A);
    c_string_destructor(&strd0B);
    c_string_destructor(&strd1A);
    c_string_destructor(&strd1B);
    c_string_destructor(&strd2A);
    c_string_destructor(&strd2B);
    c_string_destructor(&strd3A);
    c_string_destructor(&strd3B);
    c_string_destructor(&strd4A);
    c_string_destructor(&strd4B);
    c_string_destructor(&strd5A);
    c_string_destructor(&strd5B);

    c_string_destructor(&strs0A);
    c_string_destructor(&strs0B);
    c_string_destructor(&strs1A);
    c_string_destructor(&strs1B);
    c_string_destructor(&strs2A);
    c_string_destructor(&strs2B);
    c_string_destructor(&strs3A);
    c_string_destructor(&strs3B);
    c_string_destructor(&strs4A);
    c_string_destructor(&strs4B);
    c_string_destructor(&strs5A);
    c_string_destructor(&strs5B);

    if (result)
	std::cout << "TRUE" << std::endl;
}