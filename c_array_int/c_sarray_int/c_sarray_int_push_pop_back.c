#include "c_sarray_int.h"

void __c_sarray_int_constructor_push_pop(t_c_sarray_int* str)
{
    str->push_back = c_sarray_int_push_back;
    str->pop_back = c_sarray_int_pop_back;
}

void c_sarray_int_push_back(t_c_sarray_int* str, int value)
{
    str->m_array[str->m_size++] = value;
}

void c_sarray_int_pop_back(t_c_sarray_int* str)
{
    --str->m_size;
}
