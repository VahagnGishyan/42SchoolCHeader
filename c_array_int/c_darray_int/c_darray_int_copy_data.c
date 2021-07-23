#include "c_darray_int.h"

void __c_darray_int_constructor_copy_data(t_c_darray_int* str)
{
    str->copy_intarray = c_darray_int_copy_intarray;
    str->copy_c_darray_int = c_darray_int_copy_c_darray_int;
}

void c_darray_int_copy_intarray(t_c_darray_int* str, int* arr, int size)
{
    int index;

    if (!c_darray_int_resize(str, size))
	return;
    index = -1;
    while (++index < size)
    {
	str->m_array[index] = arr[index];
    }
    str->m_size = size;
}

void c_darray_int_copy_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint)
{
    int index;

    if (!c_darray_int_resize(str, (*arrint).m_size))
	return;
    index = -1;
    while (++index < arrint->m_size)
	(*str).m_array[index] = (*arrint).m_array[index];
    (*str).m_size = (*arrint).m_size;
}
