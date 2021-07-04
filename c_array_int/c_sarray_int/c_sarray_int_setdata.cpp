#include "c_sarray_int.h"

void c_sarray_int::set_data(int* arr, int size, int capa)
{
    m_array = arr;
    m_size = size;
    m_capacity = capa;
}

void c_sarray_int::tie_static_array(int* arr, int capa)
{
    m_array = arr;
    m_size = 0;
    m_capacity = capa;
}

