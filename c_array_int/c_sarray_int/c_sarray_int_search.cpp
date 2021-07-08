#include "c_sarray_int.h"



int* c_sarray_int::search_number(t_c_sarray_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (str->m_array[index] == number)
	    return (&str->m_array[index]);
    return (NULL);
}


int c_sarray_int::search_number_index(t_c_sarray_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (str->m_array[index] == number)
	    return (index);
    return (-1);
}
