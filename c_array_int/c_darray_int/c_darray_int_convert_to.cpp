#include "c_darray_int.h"

void c_darray_int::convert_to_intarray(t_c_darray_int* str, int* arrint)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	arrint[index] = str->m_array[index];
}
