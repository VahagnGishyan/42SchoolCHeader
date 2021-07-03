#include "c_string.h"

void __c_string_constructor_search(t_c_string* str)
{
    str->search_char = c_string_search_char;
    str->search_chararray = c_string_search_chararray;
    str->search_c_string = c_string_search_c_string;
}

char* c_string_search_char(t_c_string* str, char symbol)
{
    c_dstring d_str;
    char* result;

    c_dstring_constructor(&d_str);
    c_string_convert_to_dstring(str, &d_str);
    result = ft_strchr(d_str.m_array, symbol);
    c_dstring_destructor(&d_str);
    return (result);
}
char* c_string_search_chararray(t_c_string* str, char* arr, int size)
{
    c_dstring d_str;
    char* result;

    c_dstring_constructor(&d_str);
    c_string_convert_to_dstring(str, &d_str);
    result = (ft_strnstr(d_str.m_array, arr, size));
    c_dstring_destructor(&d_str);
    return (result);
}
char* c_string_search_c_string(t_c_string* str_main, t_c_string* str_other)
{
    c_dstring d_str_main;
    c_dstring d_str_other;
    char* result;

    c_dstring_constructor(&d_str_main);
    c_dstring_constructor(&d_str_other);
    c_string_convert_to_dstring(str_main, &d_str_main);
    c_string_convert_to_dstring(str_other, &d_str_other);
    result = (ft_strnstr(d_str_main.m_array, d_str_other.m_array, str_other->m_size));
    c_dstring_destructor(&d_str_main);
    c_dstring_destructor(&d_str_other);
    return (result);
}