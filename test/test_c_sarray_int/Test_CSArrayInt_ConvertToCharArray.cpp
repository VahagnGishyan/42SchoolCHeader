#include "Test_CSArrayInt.h"

void Test_CSArrayInt::ConvertToIntArray()
{
    std::cout << "\tConvertToCharArray()\t";

    bool result = true;

    c_sarray_int strs0;
    c_sarray_int strs1;
    c_sarray_int strs2;

    //c_sarray_int strd0;
    //c_sarray_int strd1;
    //c_sarray_int strd2;
    //c_sarray_int strd3;
    //c_sarray_int strd4A;
    //c_sarray_int strd4B;
    //c_sarray_int strd5A;
    //c_sarray_int strd5B;
    //c_sarray_int strd6A;
    //c_sarray_int strd6B;
    //c_sarray_int strd7A;
    //c_sarray_int strd7B;

    c_sarray_int_constructor(&strs0);
    c_sarray_int_constructor(&strs1);
    c_sarray_int_constructor(&strs2);

    //c_sarray_int_constructor(&strd0);
    //c_sarray_int_constructor(&strd1);
    //c_sarray_int_constructor(&strd2);
    //c_sarray_int_constructor(&strd3);
    //c_sarray_int_constructor(&strd4A);
    //c_sarray_int_constructor(&strd4B);
    //c_sarray_int_constructor(&strd5A);
    //c_sarray_int_constructor(&strd5B);
    //c_sarray_int_constructor(&strd6A);
    //c_sarray_int_constructor(&strd6B);
    //c_sarray_int_constructor(&strd7A);
    //c_sarray_int_constructor(&strd7B);

    /*Check 0*/
    int arrs0[1] = { 5 };
    strs0.set_data(&strs0, arrs0, 1, 1);
    int ptrs0[128];
    strs0.convert_to_intarray(&strs0, ptrs0);
    if (*ptrs0 != 5)
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr0.convert_to_intarray(...) = " << *ptrs0 << "\t:: must be " << 5 << std::endl;
    }


    /*Check 1*/
    int arrs1[128] = { 5 };
    strs1.set_data(&strs1, arrs1, 1, 128);
    int ptrs1[128];
    strs1.convert_to_intarray(&strs1, ptrs1);
    if (*ptrs1 != 5)
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
    int arrs2[228] = { 5, 1, 2, 8, 6 };
    strs2.set_data(&strs2, arrs2, 5, 228);
    int ptrs2[228];
    strs2.convert_to_intarray(&strs2, ptrs2);
    std::array<int, 5> datas2{ 5, 1, 2, 8, 6 };
    for (ushint index = 0; index < 5; ++index)
    {
	if (ptrs2[index] != datas2[index])
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 2\t" << std::endl;
	    std::cout << "\tstr2.convert_to_intarray(" << index << ") = " << ptrs2[index] << "\t::must be "
		<< datas2[index] << std::endl;
	}
    }

    c_sarray_int_destructor(&strs0);
    c_sarray_int_destructor(&strs1);
    c_sarray_int_destructor(&strs2);

    //c_sarray_int_destructor(&strd0);
    //c_sarray_int_destructor(&strd1);
    //c_sarray_int_destructor(&strd2);
    //c_sarray_int_destructor(&strd3);
    //c_sarray_int_destructor(&strd4A);
    //c_sarray_int_destructor(&strd4B);
    //c_sarray_int_destructor(&strd5A);
    //c_sarray_int_destructor(&strd5B);
    //c_sarray_int_destructor(&strd6A);
    //c_sarray_int_destructor(&strd6B);
    //c_sarray_int_destructor(&strd7A);
    //c_sarray_int_destructor(&strd7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}