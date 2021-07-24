#include "c_vector_int.h"

void __c_vector_int_constructor_copy_data(t_c_vector_int* str)
{
    str->copy_intarray = c_vector_int_copy_intarray;
    str->copy_c_vector_int = c_vector_int_copy_c_vector_int;
}

void c_vector_int_copy_intarray(t_c_vector_int* str, int* arr, int size)
{
    int index;

    if (!c_vector_int_resize(str, size))
	return;
    index = -1;
    while (++index < size)
    {
	*c_vector_int_at(str, index) = arr[index];
    }
    str->m_size = size;
}

void c_vector_int_copy_c_vector_int(t_c_vector_int* str_main, t_c_vector_int* str_other)
{
    int index;

    if (!c_vector_int_resize(str_main, (*str_other).m_size))
	return;
    index = -1;
    while (++index < str_other->m_size)
	*c_vector_int_at(str_main, index) = *c_vector_int_at(str_other, index);
    (*str_main).m_size = (*str_other).m_size;
}
