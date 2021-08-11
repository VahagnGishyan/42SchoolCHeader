#include "Test_CSArrayString.h"

void Test_CSArrayString::ConvertToIntArray()
{
    std::cout << "\tConvertToCharArray()\t";

    bool result = true;

    t_c_sarray_string strs0;

    //t_c_sarray_string strd0;
    //t_c_sarray_string strd1;
    //t_c_sarray_string strd2;
    //t_c_sarray_string strd3;
    //t_c_sarray_string strd4A;
    //t_c_sarray_string strd4B;
    //t_c_sarray_string strd5A;
    //t_c_sarray_string strd5B;
    //t_c_sarray_string strd6A;
    //t_c_sarray_string strd6B;
    //t_c_sarray_string strd7A;
    //t_c_sarray_string strd7B;

    c_sarray_string_constructor(&strs0);

    //t_c_sarray_string_constructor(&strd0);
    //t_c_sarray_string_constructor(&strd1);
    //t_c_sarray_string_constructor(&strd2);
    //t_c_sarray_string_constructor(&strd3);
    //t_c_sarray_string_constructor(&strd4A);
    //t_c_sarray_string_constructor(&strd4B);
    //t_c_sarray_string_constructor(&strd5A);
    //t_c_sarray_string_constructor(&strd5B);
    //t_c_sarray_string_constructor(&strd6A);
    //t_c_sarray_string_constructor(&strd6B);
    //t_c_sarray_string_constructor(&strd7A);
    //t_c_sarray_string_constructor(&strd7B);

    /*Check 0*/
    //std::string arrdst1[16]{ "", "Vahagn", " ", "Gishyan" };
    constexpr int length0 = 16;
    c_string arrdst1[length0];
    c_string_array_constructor(arrdst1, length0);
    c_string_copy_chararray(&arrdst1[0], "", 1);
    c_string_copy_chararray(&arrdst1[1], "Vahagn", 6);
    c_string_copy_chararray(&arrdst1[2], " ", 1);
    c_string_copy_chararray(&arrdst1[3], "Gishyan", 7);
    c_string_array_set_char_array(&arrdst1[4], length0 - 4, "", 1);
    strs0.set_data(&strs0, arrdst1, 4, 16);

    //std::string arrdata[16];
    t_c_string arrdata[32];
    c_string_array_constructor(arrdata, 32);

    strs0.convert_to_string_array(&strs0, arrdata);
    for (int index = 0; index < 4; ++index)
    {
	if (c_string_compare_c_string(&arrdata[index], &arrdst1[index]))
	{
	    if (result)
	    {
		std::cout << "ERROR" << std::endl;
		result = false;
	    }
	    std::cout << "\tCheck 0\t" << std::endl;
	    std::cout << "\tc_string_compare_chararray(&arrdata[index], &arrdst1[index]) = " 
		<< c_string_compare_c_string(&arrdata[index], &arrdst1[index])
		<< "\t:: must be " << 0 << std::endl;
	}
    }

    c_sarray_string_destructor(&strs0);

    c_string_array_destructor(arrdst1, length0);
    c_string_array_destructor(arrdata, 32);

    //t_c_sarray_string_destructor(&strd0);
    //t_c_sarray_string_destructor(&strd1);
    //t_c_sarray_string_destructor(&strd2);
    //t_c_sarray_string_destructor(&strd3);
    //t_c_sarray_string_destructor(&strd4A);
    //t_c_sarray_string_destructor(&strd4B);
    //t_c_sarray_string_destructor(&strd5A);
    //t_c_sarray_string_destructor(&strd5B);
    //t_c_sarray_string_destructor(&strd6A);
    //t_c_sarray_string_destructor(&strd6B);
    //t_c_sarray_string_destructor(&strd7A);
    //t_c_sarray_string_destructor(&strd7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}