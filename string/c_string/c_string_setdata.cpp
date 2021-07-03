#include "c_string.h"

void __c_string_constructor_setdata(t_c_string* str)
{
    str->setdata = c_string_setdata;
    str->tie_static_array = c_string_tie_static_array;
}

void  c_string_setdata(t_c_string* str, char* arr, int size, int length)
{
    str->m_static_array.setdata(&str->m_static_array, arr, size, length);
}

void  c_string_tie_static_array(t_c_string* str, char* arr, int length)
{
    str->m_static_array.setdata(&str->m_static_array, arr, 0, length);
}