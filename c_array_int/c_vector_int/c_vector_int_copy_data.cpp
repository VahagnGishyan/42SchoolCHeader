#include "c_vector_int.h"

void c_vector_int::copy_intarray(t_c_vector_int* str, int* arr, int size)
{
    int index;

    if (!str->resize(str, size))
	return;
    index = -1;
    while (++index < size)
    {
	*str->at(str, index) = arr[index];
    }
    str->m_size = size;
}

void c_vector_int::copy_c_vector_int(t_c_vector_int* str_main, t_c_vector_int* str_other)
{
    int index;

    if (!str_main->resize(str_main, (*str_other).m_size))
	return;
    index = -1;
    while (++index < str_other->m_size)
	*(*str_main).at(str_main, index) = *(*str_other).at(str_other, index);
    (*str_main).m_size = (*str_other).m_size;
}
