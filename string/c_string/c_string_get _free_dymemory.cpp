#include "c_string.h"

void __c_string_constructor_get_free_dymemory(t_c_string* str)
{
    str->resize = c_string_resize;
    str->clear = c_string_clear;
}

bool c_string_resize(t_c_string* str, int length)
{
    if (c_string_capacity(str) >= length)
	return true;
    return (str->m_dynamic_array.resize(&str->m_dynamic_array, length - str->m_static_array.m_capacity));
}

void c_string_clear(t_c_string* str)
{
    if (c_string_is_dynamic_memory_null(str))
	return;
    str->m_dynamic_array.clear(&str->m_dynamic_array);
    str->m_size = 0;
}

