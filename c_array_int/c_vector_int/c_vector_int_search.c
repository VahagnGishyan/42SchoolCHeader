#include "c_vector_int.h"

void __c_vector_int_constructor_search(t_c_vector_int* str)
{
    str->search_number = c_vector_int_search_number;
    str->search_number_index = c_vector_int_search_number_index;
}

int* c_vector_int_search_number(t_c_vector_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (*str->at(str, index) == number)
	    return (str->at(str, index));
    return (NULL);
}

int c_vector_int_search_number_index(t_c_vector_int* str, int number)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	if (*str->at(str, index) == number)
	    return (index);
    return (-1);
}
