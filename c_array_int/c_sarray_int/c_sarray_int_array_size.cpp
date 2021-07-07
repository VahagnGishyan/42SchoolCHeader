#include "c_sarray_int.h"

int c_sarray_int::size(t_c_sarray_int* str)
{
    return (str->m_size);
}

int c_sarray_int::capacity(t_c_sarray_int* str)
{
    return (str->m_capacity);
}

bool c_sarray_int::is_empty(t_c_sarray_int* str)
{
    return (str->m_size == 0);
}