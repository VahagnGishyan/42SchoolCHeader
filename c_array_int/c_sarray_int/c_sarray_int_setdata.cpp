#include "c_sarray_int.h"

void c_sarray_int::set_data(t_c_sarray_int* str, int* arr, int size, int capa)
{
    str->m_array = arr;
    str->m_size = size;
    str->m_capacity = capa;
}

void c_sarray_int::tie_static_array(t_c_sarray_int* str, int* arr, int capa)
{
    str->m_array = arr;
    str->m_size = 0;
    str->m_capacity = capa;
}

