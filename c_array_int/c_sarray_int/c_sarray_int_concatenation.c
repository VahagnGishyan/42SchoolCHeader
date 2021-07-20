#include "c_sarray_int.h"

void __c_sarray_int_constructor_concatenation(t_c_sarray_int* str)
{
    str->concatenation_intarray = c_sarray_int_concatenation_intarray;
    str->concatenation_c_sarray_int = c_sarray_int_concatenation_c_sarray_int;
}

void c_sarray_int_concatenation_intarray(t_c_sarray_int* str, int* arr, int size)
{
    int index;
    
    index = -1;
    while (++index < size)
	c_sarray_int_push_back(str, arr[index]);
}

void c_sarray_int_concatenation_c_sarray_int(t_c_sarray_int* str, t_c_sarray_int* arrint)
{
    int index;

    index = -1;
    while (++index < (*arrint).m_size)
	c_sarray_int_push_back(str,(*arrint).m_array[index]);
}
