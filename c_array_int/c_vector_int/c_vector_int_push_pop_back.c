#include "c_vector_int.h"

void __c_vector_int_constructor_push_pop(t_c_vector_int* str)
{
    str->push_back = c_vector_int_push_back;
    str->pop_back = c_vector_int_pop_back;
}

void c_vector_int_push_back(t_c_vector_int* str, int value)
{
    if (!c_vector_int_resize(str, str->m_size + 1))
	return;
    *c_vector_int_at(str, str->m_size++) = value;
}

void c_vector_int_pop_back(t_c_vector_int* str)
{
    --str->m_size;
}
