#include "c_sarray_int.h"

int* c_sarray_int::at(t_c_sarray_int* str, int index)
{
    return(&str->m_array[index]);
}

int* c_sarray_int::front(t_c_sarray_int* str)
{
    return(&str->m_array[0]);
}

int* c_sarray_int::back(t_c_sarray_int* str)
{
    return(&str->m_array[m_size - 1]);
}
