#include "c_vector_int.h"

void __c_vector_int_constructor_index_operators(t_c_vector_int* str)
{
    str->at = c_vector_int_at;
    str->front = c_vector_int_front;
    str->back = c_vector_int_back;
}

int* c_vector_int_at(t_c_vector_int* str, int index)
{
    if(index < str->m_static_capacity)
	return(&str->m_static_array[index]);
    return(&str->m_dynamic_array[index - str->m_static_capacity]);
}

int* c_vector_int_front(t_c_vector_int* str)
{
    return(c_vector_int_at(str, 0));
}

int* c_vector_int_back(t_c_vector_int* str)
{
    return(c_vector_int_at(str, str->m_size - 1));
}
