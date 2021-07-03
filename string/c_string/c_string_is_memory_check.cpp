#include "c_string.h"

void __c_string_constructor_is_check_memory(t_c_string* str)
{
    str->is_static_memory_null = c_string_is_static_memory_null;
    str->is_dynamic_memory_null = c_string_is_dynamic_memory_null;
    str->is_null = c_string_is_null;
    str->is_used_dynamic_memory = c_string_is_used_dynamic_memory;
}

bool  c_string_is_static_memory_null(t_c_string* str)
{
    return (str->m_static_array.is_null(&str->m_static_array));
}
bool  c_string_is_dynamic_memory_null(t_c_string* str)
{
    return (str->m_dynamic_array.is_null(&str->m_dynamic_array));
}
bool  c_string_is_null(t_c_string* str)
{
    return ((str->m_static_array.is_null(&str->m_static_array)) 
	&& (str->m_dynamic_array.is_null(&str->m_dynamic_array)));
}
bool  c_string_is_used_dynamic_memory(t_c_string* str)
{
    return (!(str->m_dynamic_array.is_null(&str->m_dynamic_array))  /* is dmemory char is not null */ 
	&& str->m_dynamic_array.m_capacity				    /* is dmemory capacity is not 0 */
	&& (str->m_size > str->m_static_array.m_capacity));		    /* is size > static capacity */
}
