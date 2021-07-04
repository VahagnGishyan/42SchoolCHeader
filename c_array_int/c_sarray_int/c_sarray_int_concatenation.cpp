#include "c_sarray_int.h"



void c_sarray_int::concatenation_intarray(int* arr, int size)
{
    int index;
    
    index = -1;
    while (++index < size)
	push_back(arr[index]);
}


void c_sarray_int::concatenation_c_sarray_int(c_sarray_int* arrint)
{
    int index;

    index = -1;
    while (++index < (*arrint).m_size)
	push_back((*arrint).m_array[index]);
}
