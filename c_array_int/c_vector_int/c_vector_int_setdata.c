#include "c_vector_int.h"

void __c_vector_int_constructor_setdata(t_c_vector_int* str)
{
    str->set_data = c_vector_int_set_data;
    str->tie_static_array = c_vector_int_tie_static_array;
}

void c_vector_int_set_data(t_c_vector_int* str, int* arr, int size, int capa)
{
    str->m_static_array = arr;
    str->m_size = size;
    str->m_static_capacity = capa;
}

void c_vector_int_tie_static_array(t_c_vector_int* str, int* arr, int capa)
{
    str->m_static_array = arr;
    str->m_size = 0;
    str->m_static_capacity = capa;
}


