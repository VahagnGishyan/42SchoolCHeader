#include "c_darray_int.h"

void __c_darray_int_constructor_array_size(t_c_darray_int* str)
{
    str->size = c_darray_int_size;
    str->capacity = c_darray_int_capacity;
    str->is_empty = c_darray_int_is_empty;
}

int c_darray_int_size(t_c_darray_int* str)
{
    return (str->m_size);
}

int c_darray_int_capacity(t_c_darray_int* str)
{
    return (str->m_capacity);
}

bool c_darray_int_is_empty(t_c_darray_int* str)
{
    return (str->m_size == 0);
}