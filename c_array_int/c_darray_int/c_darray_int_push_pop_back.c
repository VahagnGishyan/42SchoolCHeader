#include "c_darray_int.h"

void __c_darray_int_constructor_push_pop(t_c_darray_int* str)
{
    str->push_back = c_darray_int_push_back;
    str->pop_back = c_darray_int_pop_back;
}

void c_darray_int_push_back(t_c_darray_int* str, int value)
{
    if (!c_darray_int_resize(str, str->m_size + 1))
	return;
    str->m_array[str->m_size++] = value;
}

void c_darray_int_pop_back(t_c_darray_int* str)
{
    --str->m_size;
}
