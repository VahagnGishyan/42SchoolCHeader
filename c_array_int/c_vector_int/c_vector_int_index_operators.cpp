#include "c_vector_int.h"

int* c_vector_int::at(t_c_vector_int* str, int index)
{
    if(index < str->m_static_capacity)
	return(&str->m_static_array[index]);
    return(&str->m_dynamic_array[index - str->m_static_capacity]);
}

int* c_vector_int::front(t_c_vector_int* str)
{
    return(str->at(str, 0));
}

int* c_vector_int::back(t_c_vector_int* str)
{
    return(str->at(str, m_size - 1));
}
