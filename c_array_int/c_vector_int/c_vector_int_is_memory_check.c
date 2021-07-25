#include "c_vector_int.h"

void __c_vector_int_constructor_is_memory_check(t_c_vector_int* str)
{
    str->is_static_memory_null = c_vector_int_is_static_memory_null;
    str->is_dynamic_memory_null = c_vector_int_is_dynamic_memory_null;
    str->is_null = c_vector_int_is_null;
    str->is_used_dynamic_memory = c_vector_int_is_used_dynamic_memory;
}

bool  c_vector_int_is_static_memory_null(t_c_vector_int* str)
{
    return (str->m_static_array == NULL);
}
bool  c_vector_int_is_dynamic_memory_null(t_c_vector_int* str)
{
    return (str->m_dynamic_array == NULL);
}
bool  c_vector_int_is_null(t_c_vector_int* str)
{
    return ((str->m_static_array == NULL) && (str->m_dynamic_array == NULL));
}
bool  c_vector_int_is_used_dynamic_memory(t_c_vector_int* str)
{
    return ((str->m_dynamic_array == NULL) && (str->m_dynamic_capacity) && (str->m_size > str->m_static_capacity));
}