#include "c_string.h"

void __c_string_constructor_index_operators(t_c_string* str)
{
    str->at = c_string_at;
    str->front = c_string_front;
    str->back = c_string_back;
}

char* c_string_at(t_c_string* str, int index)
{
    if (index < str->m_static_array.m_capacity)
	return (&str->m_static_array.m_array[index]);
    return(&str->m_dynamic_array.m_array[index - str->m_static_array.m_capacity]);
}
char* c_string_front(t_c_string* str)
{
    if (c_string_is_null(str))
	return (NULL);
    if (c_string_is_static_memory_null(str))
	return (str->m_dynamic_array.front(&str->m_dynamic_array));
    if (c_string_is_dynamic_memory_null(str))
	return (str->m_dynamic_array.front(&str->m_dynamic_array));
    return (NULL);
}
char* c_string_back(t_c_string* str)
{
    if (c_string_is_null(str))
	return (NULL);
    if (c_string_is_static_memory_null(str))
	return (str->m_dynamic_array.back(&str->m_dynamic_array));
    if (c_string_is_dynamic_memory_null(str))
	return (str->m_dynamic_array.back(&str->m_dynamic_array));
    return (NULL);
}