//#include "Test_CSArrayString.h"
//
//void Test_CSArrayString::ConvertToIntArray()
//{
//    std::cout << "\tConvertToCharArray()\t";
//
//    bool result = true;
//
//    t_c_sarray_string strs0;
//
//    //t_c_sarray_string strd0;
//    //t_c_sarray_string strd1;
//    //t_c_sarray_string strd2;
//    //t_c_sarray_string strd3;
//    //t_c_sarray_string strd4A;
//    //t_c_sarray_string strd4B;
//    //t_c_sarray_string strd5A;
//    //t_c_sarray_string strd5B;
//    //t_c_sarray_string strd6A;
//    //t_c_sarray_string strd6B;
//    //t_c_sarray_string strd7A;
//    //t_c_sarray_string strd7B;
//
//    c_sarray_string_constructor(&strs0);
//
//    //t_c_sarray_string_constructor(&strd0);
//    //t_c_sarray_string_constructor(&strd1);
//    //t_c_sarray_string_constructor(&strd2);
//    //t_c_sarray_string_constructor(&strd3);
//    //t_c_sarray_string_constructor(&strd4A);
//    //t_c_sarray_string_constructor(&strd4B);
//    //t_c_sarray_string_constructor(&strd5A);
//    //t_c_sarray_string_constructor(&strd5B);
//    //t_c_sarray_string_constructor(&strd6A);
//    //t_c_sarray_string_constructor(&strd6B);
//    //t_c_sarray_string_constructor(&strd7A);
//    //t_c_sarray_string_constructor(&strd7B);
//
//    /*Check 0*/
//    std::string arrdst1[16]{ "", "Vahagn", " ", "Gishyan" };
//    strs0.set_data(&strs0, arrdst1, 4, 16);
//    std::string arrdata[16];
//    strs0.convert_to_string_array(&strs0, arrdata);
//    for (int index = 0; index < 4; ++index)
//    {
//	if (arrdata[index] != arrdst1[index])
//	{
//	    if (result)
//	    {
//		std::cout << "ERROR" << std::endl;
//		result = false;
//	    }
//	    std::cout << "\tCheck 0\t" << std::endl;
//	    std::cout << "\tstr0.convert_to_intarray(...) = " << arrdata[index] << "\t:: must be " << arrdst1[index] << std::endl;
//	}
//    }
//
//    c_sarray_string_destructor(&strs0);
//
//    //t_c_sarray_string_destructor(&strd0);
//    //t_c_sarray_string_destructor(&strd1);
//    //t_c_sarray_string_destructor(&strd2);
//    //t_c_sarray_string_destructor(&strd3);
//    //t_c_sarray_string_destructor(&strd4A);
//    //t_c_sarray_string_destructor(&strd4B);
//    //t_c_sarray_string_destructor(&strd5A);
//    //t_c_sarray_string_destructor(&strd5B);
//    //t_c_sarray_string_destructor(&strd6A);
//    //t_c_sarray_string_destructor(&strd6B);
//    //t_c_sarray_string_destructor(&strd7A);
//    //t_c_sarray_string_destructor(&strd7B);
//
//    if (result)
//	std::cout << "TRUE" << std::endl;
//}