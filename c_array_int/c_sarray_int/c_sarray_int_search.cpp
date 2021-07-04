#include "c_sarray_int.h"



int* c_sarray_int::search_number(int number)
{
    int index;

    index = 0;
    while (++index < m_size)
	if (m_array[index] == number)
	    return (&m_array[index]);
    return (NULL);
}


int c_sarray_int::search_number_index(int number)
{
    int index;

    index = 0;
    while (++index < m_size)
	if (m_array[index] == number)
	    return (index);
    return (-1);
}
