#include "c_vector_int.h"

int c_vector_int::size(t_c_vector_int* str)
{
    return (str->m_size);
}

int c_vector_int::static_capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

int c_vector_int::dynamic_capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

int c_vector_int::capacity(t_c_vector_int* str)
{
    return (str->m_static_capacity + str->m_dynamic_capacity);
}

bool c_vector_int::is_empty(t_c_vector_int* str)
{
    return (str->m_size == 0);
}