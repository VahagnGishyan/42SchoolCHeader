#include "c_sarray_int.h"



void c_sarray_int::concatenation_intarray(t_c_sarray_int* str, int* arr, int size)
{
    int index;
    
    index = -1;
    while (++index < size)
	str->push_back(str, arr[index]);
}


void c_sarray_int::concatenation_c_sarray_int(t_c_sarray_int* str, t_c_sarray_int* arrint)
{
    int index;

    index = -1;
    while (++index < (*arrint).m_size)
	push_back(str,(*arrint).m_array[index]);
}
