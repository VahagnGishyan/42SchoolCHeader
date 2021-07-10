#include "c_darray_int.h"

void c_darray_int::copy_intarray(t_c_darray_int* str, int* arr, int size)
{
    int index;

    if (!str->resize(str, size))
	return;
    index = -1;
    while (++index < size)
    {
	str->m_array[index] = arr[index];
    }
    str->m_size = size;
}

void c_darray_int::copy_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint)
{
    int index;

    if (!str->resize(str, (*arrint).m_size))
	return;
    index = -1;
    while (++index < arrint->m_size)
	(*str).m_array[index] = (*arrint).m_array[index];
    (*str).m_size = (*arrint).m_size;
}
