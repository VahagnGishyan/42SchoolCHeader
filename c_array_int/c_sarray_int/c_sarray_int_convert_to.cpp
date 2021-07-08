#include "c_sarray_int.h"

void c_sarray_int::convert_to_intarray(t_c_sarray_int* str, int* arrint)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	arrint[index] = str->m_array[index];
}
