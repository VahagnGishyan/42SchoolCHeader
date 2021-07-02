#include "c_string.h"

void __c_string_constructor_convert_to(t_c_string* str)
{
    str->convert_to_int = c_string_convert_to_int;
    str->convert_to_chararray = c_string_convert_to_chararray;
    str->convert_to_dstring = c_string_convert_to_dstring;
}

void c_string_convert_to_int(t_c_string* str, int* value)
{
    if (!c_string_is_used_dynamic_memory(str))
    {
	(str->m_static_array.convert_to_int(&str->m_static_array, value));
	return ;
    }

    t_c_dstring d_str;
    c_dstring_constructor(&d_str);
    
    c_string_convert_to_dstring(str, &d_str);
    d_str.convert_to_int(&d_str, value);
    
    c_dstring_destructor(&d_str);
}

void c_string_convert_to_chararray(t_c_string* str, char* arr)
{
    if (!c_string_is_used_dynamic_memory(str))
    {
	(str->m_static_array.convert_to_chararray(&str->m_static_array, arr));
	return;
    }
    t_c_dstring d_str;
    c_dstring_constructor(&d_str);
    c_string_convert_to_dstring(str, &d_str);
    d_str.convert_to_chararray(&d_str, arr);
    c_dstring_destructor(&d_str);
}

void  c_string_convert_to_dstring(t_c_string* str_main, t_c_dstring* str_other)
{
    int index;
    
    if (!str_main->m_size)
	return;
    if (!str_other->resize(str_other, str_main->m_size))
	return;
    index = -1;
    str_other->resize(str_other, str_main->m_size);
    while (++index < str_main->m_size)
	*str_other->at(str_other, index) = *str_main->at(str_main, index);
}