#include "Test_CSString.h"

void Test_CSString::Compare()
{
    std::cout << "\tCompare()\t\t";

    bool result = true;

    c_sstring str0;
    c_sstring str1;
    c_sstring str2;
    c_sstring str3;
    c_sstring str4A;
    c_sstring str4B;
    c_sstring str5A;
    c_sstring str5B;
    c_sstring str6A;
    c_sstring str6B;
    c_sstring str7A;
    c_sstring str7B;

    c_sstring_constructor(&str0);
    c_sstring_constructor(&str1);
    c_sstring_constructor(&str2);
    c_sstring_constructor(&str3);
    c_sstring_constructor(&str4A);
    c_sstring_constructor(&str4B);
    c_sstring_constructor(&str5A);
    c_sstring_constructor(&str5B);
    c_sstring_constructor(&str6A);
    c_sstring_constructor(&str6B);
    c_sstring_constructor(&str7A);
    c_sstring_constructor(&str7B);

    /*Check 0*/
    char arr0A[1] = { 'V' };
    char arr0B[1] = { 'V' };
    str0.setdata(&str0,arr0A, 1, 128);
    if (str0.compare_chararray(&str0,arr0A, 1) || str0.compare_chararray(&str0, arr0B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 0\t" << std::endl;
	std::cout << "\tstr.compare_chararray(arrA)  = " << str0.compare_chararray(&str0, arr0A, 1) <<
		    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_chararray(arrB)  = " << str0.compare_chararray(&str0, arr0B, 1) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 1*/
    char arr1A[1] = { 'V' };
    char arr1B[1] = { 'A' };
    str1.setdata(&str1, arr1A, 1, 128);
    if (str1.compare_chararray(&str1, arr1A, 1) || !str1.compare_chararray(&str1, arr1B, 1))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 1\t" << std::endl;
	std::cout << "\tstr.compare_chararray(arrA)  = " << str1.compare_chararray(&str1, arr1A, 1) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_chararray(arrB)  = " << str1.compare_chararray(&str1, arr1B, 1) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 2*/
    char arr2A[128] = { "VAHAGN" };
    char arr2B[128] = { "VAHAGN" };
    str2.setdata(&str2, arr2A, 6, 228);
    if (str2.compare_chararray(&str2, arr2A, 6) || str2.compare_chararray(&str2, arr2B, 6))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 2\t" << std::endl;
	std::cout << "\tstr.compare_chararray(arrA)  = " << str2.compare_chararray(&str2, arr2A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_chararray(arrB)  = " << str2.compare_chararray(&str2, arr2B, 6) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 3*/
    char arr3A[128] = { "VAHAGN" };
    char arr3B[128] = { "VAHAGNA" };
    str3.setdata(&str3, arr3A, 6, 338);
    if (str3.compare_chararray(&str3, arr3A, 6) || !str3.compare_chararray(&str3, arr3B, 7))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 3\t" << std::endl;
	std::cout << "\tstr.compare_chararray(arrA)  = " << str3.compare_chararray(&str3, arr3A, 6) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_chararray(arrB)  = " << str3.compare_chararray(&str3, arr3B, 7) <<
	    "\t:: must be !0" << std::endl;
    }

    /*Check 4*/
    char arr4A[4] = { 'V' };
    char arr4B[4] = { 'V' };
    str4A.setdata(&str4A, arr4A, 1, 428);
    str4B.setdata(&str4B, arr4B, 1, 428);
    if (str4A.compare_c_sstring(&str4A, &str4B) || str4B.compare_c_sstring(&str4B, &str4A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 4\t" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strB)  = " << str4A.compare_c_sstring(&str4A, &str4B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strA)  = " << str4B.compare_c_sstring(&str4B, &str4A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 5*/
    char arr5A[1] = { 'V' };
    char arr5B[1] = { 'A' };
    str5A.setdata(&str5A,arr5A, 1, 1);
    str5B.setdata(&str5B, arr5B, 1, 1);
    if (!str5A.compare_c_sstring(&str5A, &str5B) || !str5B.compare_c_sstring(&str5B, &str5A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 5\t" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strB)  = " << str5A.compare_c_sstring(&str5A, &str5B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strA)  = " << str5B.compare_c_sstring(&str5B, &str5A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 6*/
    char arr6A[128] = { "VAHAGN" };
    char arr6B[128] = { "VAHAGN" };
    str6A.setdata(&str6A, arr6A, 6, 128);
    str6B.setdata(&str6B, arr6B, 6, 128);
    if (str6A.compare_c_sstring(&str6A, &str6B) || str6B.compare_c_sstring(&str6B, &str6A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 6\t" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strB)   = " << str6A.compare_c_sstring(&str6A, &str6B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strA)   = " << str6B.compare_c_sstring(&str6B, &str6A) <<
	    "\t:: must be 0" << std::endl;
    }

    /*Check 7*/
    char arr7A[128] = { "VAHAGN" };
    char arr7B[128] = { "VAHAGNA" };
    str7A.setdata(&str7A, arr7A, 6, 128);
    str7B.setdata(&str7B, arr7B, 7, 128);
    if (!str7A.compare_c_sstring(&str7A, &str7B) || !str7B.compare_c_sstring(&str7B, &str7A))
    {
	if (result)
	{
	    std::cout << "ERROR" << std::endl;
	    result = false;
	}
	std::cout << "\tCheck 7\t" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strB)  = " << str7A.compare_c_sstring(&str7A, &str7B) <<
	    "\t:: must be 0" << std::endl;
	std::cout << "\tstr.compare_c_sstring(strA)  = " << str7B.compare_c_sstring(&str7B, &str7A) <<
	    "\t:: must be 0" << std::endl;
    }

    c_sstring_destructor(&str0);
    c_sstring_destructor(&str1);
    c_sstring_destructor(&str2);
    c_sstring_destructor(&str3);
    c_sstring_destructor(&str4A);
    c_sstring_destructor(&str4B);
    c_sstring_destructor(&str5A);
    c_sstring_destructor(&str5B);
    c_sstring_destructor(&str6A);
    c_sstring_destructor(&str6B);
    c_sstring_destructor(&str7A);
    c_sstring_destructor(&str7B);

    if (result)
	std::cout << "TRUE" << std::endl;
}