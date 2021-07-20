#include "c_sarray_int.h"

void __c_sarray_int_constructor_copy_data(t_c_sarray_int* str)
{
    str->copy_intarray = c_sarray_int_copy_intarray;
    str->copy_c_sarray_int = c_sarray_int_copy_c_sarray_int;
}

void c_sarray_int_copy_intarray(t_c_sarray_int* str, int* arr, int size)
{
    int index;

    index = -1;
    while (++index < size)
    {
	str->m_array[index] = arr[index];
    }
    str->m_size = size;
}


void c_sarray_int_copy_c_sarray_int(t_c_sarray_int* str, t_c_sarray_int* arrint)
{
    int index;

    index = -1;
    while (++index < arrint->m_size)
	(*str).m_array[index] = (*arrint).m_array[index];
    (*str).m_size = (*arrint).m_size;
}
