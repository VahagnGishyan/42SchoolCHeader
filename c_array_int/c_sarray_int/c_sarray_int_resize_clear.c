#include "c_sarray_int.h"

void __c_sarray_int_constructor_resize_clear_dymemory(t_c_sarray_int* str)
{
    str->resize = c_sarray_int_resize;
    str->clear = c_sarray_int_clear;
}

bool c_sarray_int_resize(t_c_sarray_int* str, int length)
{
    return (length >= 0 && length <= str->m_capacity);
}

void c_sarray_int_clear(t_c_sarray_int* str)
{
    str->m_size = 0;
}


