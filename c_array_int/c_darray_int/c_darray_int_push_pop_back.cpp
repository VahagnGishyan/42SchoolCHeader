#include "c_darray_int.h"

void c_darray_int::push_back(t_c_darray_int* str, int value)
{
    if (!str->resize(str, str->m_size + 1))
	return;
    str->m_array[str->m_size++] = value;
}

void c_darray_int::pop_back(t_c_darray_int* str)
{
    --str->m_size;
}
