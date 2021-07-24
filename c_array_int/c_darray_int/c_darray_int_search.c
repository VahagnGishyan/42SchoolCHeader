#include "c_darray_int.h"

void __c_darray_int_constructor_search(t_c_darray_int* str)
{
    str->search_number = c_darray_int_search_number;
    str->search_number_index = c_darray_int_search_number_index;
}

int* c_darray_int_search_number(t_c_darray_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (str->m_array[index] == number)
	    return (&str->m_array[index]);
    return (NULL);
}

int c_darray_int_search_number_index(t_c_darray_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (str->m_array[index] == number)
	    return (index);
    return (-1);
}
