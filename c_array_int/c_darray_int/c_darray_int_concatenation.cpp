#include "c_darray_int.h"



void c_darray_int::concatenation_intarray(t_c_darray_int* str, int* arr, int size)
{
    int index;
    
    if (!str->resize(str, str->m_size + size))
	return;
    index = -1;
    while (++index < size)
	*str->at(str, str->m_size + index) = arr[index];
}


void c_darray_int::concatenation_c_darray_int(t_c_darray_int* str_main, t_c_darray_int* str_other)
{
    int index;

    if (!str_main->resize(str_main, str_main->m_size + str_other->m_size))
	return;
    index = -1;
    while (++index < (*str_other).m_size)
	str_main->push_back(str_main,(*str_other).m_array[index]);
}
