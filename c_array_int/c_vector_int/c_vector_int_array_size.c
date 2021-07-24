#include "c_vector_int.h"

void __c_vector_int_constructor_array_size(t_c_vector_int* str)
{
    str->size = c_vector_int_size;
    str->static_capacity = c_vector_int_static_capacity;
    str->dynamic_capacity = c_vector_int_dynamic_capacity;
    str->capacity = c_vector_int_capacity;
    str->is_empty = c_vector_int_is_empty;
}

int c_vector_int_size(t_c_vector_int* str)
{
    return (str->m_size);
}

int c_vector_int_static_capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

int c_vector_int_dynamic_capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

int c_vector_int_capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

bool c_vector_int_is_empty(t_c_vector_int* str)
{
    return (str->m_size == 0);
}