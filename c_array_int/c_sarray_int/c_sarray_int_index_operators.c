#include "c_sarray_int.h"

void __c_sarray_int_constructor_index_operators(t_c_sarray_int* str)
{
    str->at = c_sarray_int_at;
    str->front = c_sarray_int_front;
    str->back = c_sarray_int_back;
}

int* c_sarray_int_at(t_c_sarray_int* str, int index)
{
    return(&str->m_array[index]);
}

int* c_sarray_int_front(t_c_sarray_int* str)
{
    return(&str->m_array[0]);
}

int* c_sarray_int_back(t_c_sarray_int* str)
{
    return(&str->m_array[str->m_size - 1]);
}
