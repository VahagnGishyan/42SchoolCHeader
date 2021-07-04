#include "Test_CString.h"

void Test_CString::ConvertToInt()
{
    std::cout << "\tConvertToInt()\t\t";

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
    int x0; 
    strs0.convert_to_int(&strs0, &x0);
    if (x0 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << x0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    char arrs1[128] = { "5" };
    strs1.setdata(&strs1, arrs1, std::strlen(arrs1), 128);
    int x1;
    strs1.convert_to_int(&strs1, &x1);
    if (x1 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << x1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 2*/
    char arrs2[228] = { "51286" };
    strs2.setdata(&strs2, arrs2, std::strlen(arrs2), 228);
    int x2;
    strs2.convert_to_int(&strs2, &x2);
    if (x2 != 51286)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr2.convert_to_int(...) = " << x2 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 3*/
    char arrs3[338] = { "51386A" };
    strs3.setdata(&strs3, arrs3, std::strlen(arrs3), 338);
    int x3;
    strs3.convert_to_int(&strs3, &x3);
    if (x3 != std::stoi(arrs3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr3.convert_to_int(...) = " << x3 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 4*/
    char arrd0[1] = { '5' };
    strd0.copy_chararray(&strd0, arrd0, 1);
    int xd0;
    strd0.convert_to_int(&strd0, &xd0);
    if (xd0 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstr0.convert_to_int(...) = " << xd0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 5*/
    char arrd1[128] = { "5" };
    strd1.copy_chararray(&strd1, arrd1, std::strlen(arrd1));
    int xd1;
    strd1.convert_to_int(&strd1, &xd1);
    if (xd1 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr1.convert_to_int(...) = " << xd1 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 6*/
    char arrd2[228] = { "51286" };
    strd2.copy_chararray(&strd2, arrd2, std::strlen(arrd2));
    int xd2;
    strd2.convert_to_int(&strd2, &xd2);
    if (xd2 != 51286)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstr2.convert_to_int(...) = " << xd2 << "\t:: must be " << 5 << std::endl;
    }

    /*Check 7*/
    char arrd3[338] = { "51386A" };
    strd3.copy_chararray(&strd3, arrd3, std::strlen(arrd3));
    int xd3;
    strd3.convert_to_int(&strd3, &xd3);
    if (xd3 != std::stoi(arrd3))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr3.convert_to_int(...) = " << xd3 << "\t:: must be " << 5 << std::endl;
    }

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


    if (result)
	std::cout << "TRUE" << std::endl;
}