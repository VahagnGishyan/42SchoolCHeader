#include "c_vector_int.h"

bool  c_vector_int::is_static_memory_null(c_vector_int* str)
{
    return (str->m_static_array == NULL);
}
bool  c_vector_int::dynamic_memory_null(c_vector_int* str)
{
    return (str->m_dynamic_array == NULL);
}
bool  c_vector_int::is_null(c_vector_int* str)
{
    return ((str->m_static_array == NULL) && (str->m_dynamic_array == NULL));
}
bool  c_vector_int::is_used_dynamic_memory(c_vector_int* str)
{
    return ((str->m_dynamic_array == NULL) && (str->m_dynamic_capacity) && (str->m_size > str->m_static_capacity));
}