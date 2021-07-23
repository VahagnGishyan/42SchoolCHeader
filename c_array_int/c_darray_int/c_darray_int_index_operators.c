#include "c_darray_int.h"

void __c_darray_int_constructor_index_operators(t_c_darray_int* str)
{
    str->at = c_darray_int_at;
    str->front = c_darray_int_front;
    str->back = c_darray_int_back;
}

int* c_darray_int_at(t_c_darray_int* str, int index)
{
    return(&str->m_array[index]);
}

int* c_darray_int_front(t_c_darray_int* str)
{
    return(&str->m_array[0]);
}

int* c_darray_int_back(t_c_darray_int* str)
{
    return(&str->m_array[str->m_size - 1]);
}
