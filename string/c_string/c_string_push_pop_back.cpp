#include "c_string.h"

void __c_string_constructor_push_pop(t_c_string* str)
{
    str->push_back = c_string_push_back;
    str->pop_back = c_string_pop_back;
}

void c_string_push_back(t_c_string *str, char symbol)
{
    if (str->m_size > str->m_static_array.m_capacity)
	str->m_static_array.push_back(&str->m_static_array, symbol);
    else
	str->m_dynamic_array.push_back(&str->m_dynamic_array, symbol);
    ++str->m_size;
}
void c_string_pop_back(t_c_string* str)
{
    --str->m_size;
}