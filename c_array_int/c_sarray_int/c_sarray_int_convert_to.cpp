#include "c_sarray_int.h"

void c_sarray_int::convert_to_intarray(int* arrint)
{
    int index;

    index = -1;
    while (++index < m_size)
	arrint[index] = m_array[index];
}
