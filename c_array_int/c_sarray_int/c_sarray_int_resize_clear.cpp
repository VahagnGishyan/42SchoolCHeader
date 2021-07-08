#include "c_sarray_int.h"

bool c_sarray_int::resize(t_c_sarray_int* str, int length)
{
    return (length >= 0 && length <= str->m_capacity);
}

void c_sarray_int::clear(t_c_sarray_int* str)
{
    str->m_size = 0;
}
