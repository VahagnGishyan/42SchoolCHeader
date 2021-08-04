#include "Test_CString.h"

void Test_CString::Concatenation()
{
    std::cout << "\tConcatenation()\t\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;

    c_string strd0;
    c_string strd1;
    c_string strd2;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);

    /*Check 0*/
    char arrs0A[128] = "Vahagn ";
    char arrs0B[128] = "Gishyan";
    strs0.setdata(&strs0, arrs0A, 7, 128);
    strs0.concatenation_chararray(&strs0, arrs0B, 7);
    std::string data0{ "Vahagn Gishyan" };
    for (int index = 0; index < 14; ++index)
    {
	if (*strs0.at(&strs0, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs0.at(" << index << ") = " << *strs0.at(&strs0, index) << "\t::must be a"
		<< data0[index] << std::endl;
	}
    }

    /*Check 1*/
    char arrs1A[128]{ 'V' };
    char arrs1B[1]{ 'G' };
    strs1.setdata(&strs1, arrs1A, 1, 128);
    strs1.concatenation_chararray(&strs1, arrs1B, 1);
    std::string data1{ "VG" };
    for (int index = 0; index < 2; ++index)
    {
	if (*strs1.at(&strs1, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs1.at(" << index << ") = " << *strs1.at(&strs1, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 2*/
    char arrs2A[128] = "V";
    char arrs2B[8]{ "GISHYAN" };
    strs2.setdata(&strs2, arrs2A, 1, 128);
    strs2.concatenation_chararray(&strs2, arrs2B, 7);
    std::string data2{ "VGISHYAN" };
    for (int index = 0; index < 8; ++index)
    {
	if (*strs2.at(&strs2, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\t*strs2.at(" << index << ") = " << *strs2.at(&strs2, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    /*Check 3*/
    char arrd0A[128] = "Vahagn ";
    char arrd0B[128] = "Gishyan";
    strd0.copy_chararray(&strd0, arrd0A, 7);
    strd0.concatenation_chararray(&strd0, arrd0B, 7);
    std::string data3{ "Vahagn Gishyan" };
    for (int index = 0; index < 14; ++index)
    {
	if (*strd0.at(&strd0, index) != data0[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\t*strd0.at(" << index << ") = " << *strd0.at(&strd0, index) << "\t::must be "
		<< data0[index] << std::endl;
	}
    }

    /*Check 4*/
    char arrd1A[128]{ 'V' };
    char arrd1B[1]{ 'G' };
    strd1.copy_chararray(&strd1, arrd1A, 1);
    strd1.concatenation_chararray(&strd1, arrd1B, 1);
    std::string data4{ "VG" };
    for (int index = 0; index < 2; ++index)
    {
	if (*strd1.at(&strd1, index) != data1[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 4\t" << std::endl;
	    std::cout << "\t*strd1.at(" << index << ") = " << *strd1.at(&strd1, index) << "\t:: must be "
		<< data1[index] << std::endl;
	}
    }

    /*Check 5*/
    char arrd2A[128] = "V";
    char arrd2B[8]{ "GISHYAN" };
    strd2.copy_chararray(&strd2, arrd2A, 1);
    strd2.concatenation_chararray(&strd2, arrd2B, 7);
    std::string data5{ "VGISHYAN" };
    for (int index = 0; index < 8; ++index)
    {
	if (*strd2.at(&strd2, index) != data2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 5\t" << std::endl;
	    std::cout << "\t*strd2.at(" << index << ") = " << *strd2.at(&strd2, index) << "\t:: must be "
		<< data2[index] << std::endl;
	}
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);

    if (result)
	std::cout << "TRUE" << std::endl;
}