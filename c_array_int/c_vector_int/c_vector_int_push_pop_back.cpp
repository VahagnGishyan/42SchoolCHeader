#include "c_vector_int.h"

void c_vector_int::push_back(t_c_vector_int* str, int value)
{
    if (!str->resize(str, str->m_size + 1))
	return;
    *str->at(str, str->m_size++) = value;
}

void c_vector_int::pop_back(t_c_vector_int* str)
{
    --str->m_size;
}
