#include "c_darray_int.h"

void __c_darray_int_constructor_concatenation(t_c_darray_int* str)
{
    str->concatenation_intarray = c_darray_int_concatenation_intarray;
    str->concatenation_c_darray_int = c_darray_int_concatenation_c_darray_int;
}

void c_darray_int_concatenation_intarray(t_c_darray_int* str, int* arr, int size)
{
    int index;
    
    if (!c_darray_int_resize(str, str->m_size + size))
	return;
    index = -1;
    while (++index < size)
	*c_darray_int_at(str, str->m_size + index) = arr[index];
}

void c_darray_int_concatenation_c_darray_int(t_c_darray_int* str_main, t_c_darray_int* str_other)
{
    int index;

    if (!c_darray_int_resize(str_main, str_main->m_size + str_other->m_size))
	return;
    index = -1;
    while (++index < (*str_other).m_size)
	c_darray_int_push_back(str_main,(*str_other).m_array[index]);
}
