#include "c_darray_int.h"

bool c_darray_int::resize(t_c_darray_int* str, int length)
{
    int* newarr;
    int  newlength;
    int size;

    if (length < 0)
    {
	str->clear(str);
	return (false);
    }
    if (str->m_capacity >= length)
	return true;
    newlength = length * 1.3;
    if ((newarr = (int*)malloc(newlength * sizeof(int))) == NULL)
	return NULL;
    intarray_copy_intarray(newarr, str->m_array, str->m_size);
    size = str->m_size;
    str->clear(str);
    str->m_array = newarr;
    str->m_size = size;
    str->m_capacity = newlength;
    return true;
}

void c_darray_int::clear(t_c_darray_int* str)
{
    if (str->m_array == NULL)
	return;
    free(str->m_array);
    str->m_array = NULL;
    str->m_size = 0;
    str->m_capacity = 0;
}
