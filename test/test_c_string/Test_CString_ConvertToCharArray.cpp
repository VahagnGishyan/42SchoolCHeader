#include "Test_CString.h"

void Test_CString::ConvertToCharArray()
{
    std::cout << "\tConvertToCharArray()\t";

    bool result = true;

    c_string strs0;
    c_string strs1;
    c_string strs2;
    c_string strs3;
    c_string strs4A;
    c_string strs4B;
    c_string strs5A;
    c_string strs5B;
    c_string strs6A;
    c_string strs6B;
    c_string strs7A;
    c_string strs7B;

    c_string strd0;
    c_string strd1;
    c_string strd2;
    c_string strd3;
    c_string strd4A;
    c_string strd4B;
    c_string strd5A;
    c_string strd5B;
    c_string strd6A;
    c_string strd6B;
    c_string strd7A;
    c_string strd7B;

    c_string_constructor(&strs0);
    c_string_constructor(&strs1);
    c_string_constructor(&strs2);
    c_string_constructor(&strs3);
    c_string_constructor(&strs4A);
    c_string_constructor(&strs4B);
    c_string_constructor(&strs5A);
    c_string_constructor(&strs5B);
    c_string_constructor(&strs6A);
    c_string_constructor(&strs6B);
    c_string_constructor(&strs7A);
    c_string_constructor(&strs7B);

    c_string_constructor(&strd0);
    c_string_constructor(&strd1);
    c_string_constructor(&strd2);
    c_string_constructor(&strd3);
    c_string_constructor(&strd4A);
    c_string_constructor(&strd4B);
    c_string_constructor(&strd5A);
    c_string_constructor(&strd5B);
    c_string_constructor(&strd6A);
    c_string_constructor(&strd6B);
    c_string_constructor(&strd7A);
    c_string_constructor(&strd7B);

    /*Check 0*/
    char arrs0[1] = { '5' };
    strs0.setdata(&strs0, arrs0, 1, 1);
    char ptrs0[128];
    strs0.convert_to_chararray(&strs0, ptrs0);
    if (*ptrs0 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << *ptrs0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    char arrs1[128] = { "5" };
    strs1.setdata(&strs1, arrs1, std::strlen(arrs1), 128);
    char ptrs1[128];
    strs1.convert_to_chararray(&strs1, ptrs1);
    if (*ptrs1 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << *ptrs1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 2*/
    char arrs2[228] = { "51286" };
    strs2.setdata(&strs2, arrs2, std::strlen(arrs2), 228);
    char ptrs2[228];
    strs2.convert_to_chararray(&strs2, ptrs2);
    std::string datas2{ "51286" };
    for (ushint index = 0; index < std::strlen(ptrs2); ++index)
    {
	if (ptrs2[index] != datas2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tstr2.convert_to_chararray(" << index << ") = " << ptrs2[index] << "\t::must be "
		<< datas2[index] << std::endl;
	}
    }


    /*Check 3*/
    char arrs3[338] = { "AAAAVVVAAA1386A" };
    strs3.setdata(&strs3, arrs3, std::strlen(arrs3), 338);
    char ptrs3[338];
    strs3.convert_to_chararray(&strs3, ptrs3);
    std::string datas3{ "AAAAVVVAAA1386A" };
    for (ushint index = 0; index < std::strlen(ptrs3); ++index)
    {
	if (ptrs3[index] != datas3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\tstr3.convert_to_int(...) = " << ptrs3[index] << "\t:: must be "
		<< datas3[index] << std::endl;
	}
    }

    /*Check 0*/
    char arrd0[1] = { '5' };
    strd0.copy_chararray(&strd0, arrd0, 1);
    char ptrd0[128];
    strd0.convert_to_chararray(&strd0, ptrd0);
    if (*ptrd0 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << *ptrd0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    char arrd1[128] = { "5" };
    strd1.copy_chararray(&strd1, arrd1, std::strlen(arrs1));
    char ptrd1[128];
    strd1.convert_to_chararray(&strd1, ptrd1);
    if (*ptrd1 != '5')
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << *ptrd1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 2*/
    char arrd2[228] = { "51286" };
    strd2.copy_chararray(&strd2, arrd2, std::strlen(arrs2));
    char ptrd2[228];
    strd2.convert_to_chararray(&strd2, ptrd2);
    std::string datadd2{ "51286" };
    for (ushint index = 0; index < std::strlen(ptrd2); ++index)
    {
	if (ptrd2[index] != datadd2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tstr2.convert_to_chararray(" << index << ") = " << ptrd2[index] << "\t::must be "
		<< datadd2[index] << std::endl;
	}
    }


    /*Check 3*/
    char arrd3[338] = { "AAAAVVVAAA1386A" };
    strd3.copy_chararray(&strd3, arrd3, std::strlen(arrs3));
    char ptrd3[338];
    strd3.convert_to_chararray(&strd3, ptrd3);
    std::string datad3{ "AAAAVVVAAA1386A" };
    for (ushint index = 0; index < std::strlen(ptrd3); ++index)
    {
	if (ptrd3[index] != datad3[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 3\t" << std::endl;
	    std::cout << "\tstr3.convert_to_int(...) = " << ptrd3[index] << "\t:: must be "
		<< datad3[index] << std::endl;
	}
    }

    c_string_destructor(&strs0);
    c_string_destructor(&strs1);
    c_string_destructor(&strs2);
    c_string_destructor(&strs3);
    c_string_destructor(&strs4A);
    c_string_destructor(&strs4B);
    c_string_destructor(&strs5A);
    c_string_destructor(&strs5B);
    c_string_destructor(&strs6A);
    c_string_destructor(&strs6B);
    c_string_destructor(&strs7A);
    c_string_destructor(&strs7B);

    c_string_destructor(&strd0);
    c_string_destructor(&strd1);
    c_string_destructor(&strd2);
    c_string_destructor(&strd3);
    c_string_destructor(&strd4A);
    c_string_destructor(&strd4B);
    c_string_destructor(&strd5A);
    c_string_destructor(&strd5B);
    c_string_destructor(&strd6A);
    c_string_destructor(&strd6B);
    c_string_destructor(&strd7A);
    c_string_destructor(&strd7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}