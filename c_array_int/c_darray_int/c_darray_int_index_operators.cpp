#include "c_darray_int.h"

int* c_darray_int::at(t_c_darray_int* str, int index)
{
    return(&str->m_array[index]);
}

int* c_darray_int::front(t_c_darray_int* str)
{
    return(&str->m_array[0]);
}

int* c_darray_int::back(t_c_darray_int* str)
{
    return(&str->m_array[m_size - 1]);
}
