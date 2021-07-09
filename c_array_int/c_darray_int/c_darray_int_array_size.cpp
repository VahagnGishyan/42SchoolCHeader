#include "c_darray_int.h"

int c_darray_int::size(t_c_darray_int* str)
{
    return (str->m_size);
}

int c_darray_int::capacity(t_c_darray_int* str)
{
    return (str->m_capacity);
}

bool c_darray_int::is_empty(t_c_darray_int* str)
{
    return (str->m_size == 0);
}