#include "c_darray_int.h"

void __c_darray_int_constructor_resize_clear_dymemory(t_c_darray_int* str)
{
    str->resize = c_darray_int_resize;
    str->clear = c_darray_int_clear;
}

bool c_darray_int_resize(t_c_darray_int* str, int length)
{
    int* newarr;
    int  newlength;
    int size;

    if (length < 0)
    {
	c_darray_int_clear(str);
	return (false);
    }
    if (str->m_capacity >= length)
	return true;
    newlength = length * 1.3;
    if ((newarr = (int*)malloc(newlength * sizeof(int))) == NULL)
	return NULL;
    int_array_copy_int_array(newarr, str->m_array, str->m_size);
    size = str->m_size;
    c_darray_int_clear(str);
    str->m_array = newarr;
    str->m_size = size;
    str->m_capacity = newlength;
    return true;
}

void c_darray_int_clear(t_c_darray_int* str)
{
    if (str->m_array == NULL)
	return;
    free(str->m_array);
    str->m_array = NULL;
    str->m_size = 0;
    str->m_capacity = 0;
}
