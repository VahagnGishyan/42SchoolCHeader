#include "c_sarray_int.h"

void c_sarray_int::push_back(t_c_sarray_int* str, int value)
{
    str->m_array[str->m_size++] = value;
}

void c_sarray_int::pop_back(t_c_sarray_int* str)
{
    --str->m_size;
}
