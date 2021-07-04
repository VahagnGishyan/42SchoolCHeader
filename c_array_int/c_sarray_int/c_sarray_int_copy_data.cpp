#include "c_sarray_int.h"

void c_sarray_int::copy_intarray(int* arr, int size)
{
    int index;

    index = -1;
    while (++index < size)
    {
	m_array[index] = arr[index];
    }
    m_size = size;
}


void c_sarray_int::copy_c_sarray_int(c_sarray_int* arrint)
{
    int index;

    index = -1;
    while (++index < arrint->m_size)
	m_array[index] = (*arrint).m_array[index];
    m_size = (*arrint).m_size;
}
