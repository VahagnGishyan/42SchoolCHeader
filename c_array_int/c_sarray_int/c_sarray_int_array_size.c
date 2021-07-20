#include "c_sarray_int.h"

void __c_sarray_int_constructor_array_size(t_c_sarray_int* str)
{
    str->size = c_sarray_int_size;
    str->capacity = c_sarray_int_capacity;
    str->is_empty = c_sarray_int_is_empty;
}

int c_sarray_int_size(t_c_sarray_int* str)
{
    return (str->m_size);
}

int c_sarray_int_capacity(t_c_sarray_int* str)
{
    return (str->m_capacity);
}

bool c_sarray_int_is_empty(t_c_sarray_int* str)
{
    return (str->m_size == 0);
}