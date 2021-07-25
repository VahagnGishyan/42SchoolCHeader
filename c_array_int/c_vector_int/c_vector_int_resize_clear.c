#include "c_vector_int.h"

void __c_vector_int_constructor_resize_clear_dymemory(t_c_vector_int* str)
{
    str->set_size = c_vector_int_set_size;
    str->resize = c_vector_int_resize;
    str->clear = c_vector_int_clear;
}

void c_vector_int_set_size(t_c_vector_int* str, int size)
{
    str->m_size = size;
}

bool c_vector_int_resize(t_c_vector_int* str, int length)
{
    int* newarr;
    int  newlength;
    int size;

    if (length < 0)
    {
	c_vector_int_clear(str);
	return (false);
    }
    if (str->m_static_capacity + str->m_dynamic_capacity >= length)
	return true;
    newlength = length * 1.3;
    if ((newarr = (int*)malloc(newlength * sizeof(int))) == NULL)
	return NULL;
    intarray_set_default_number(newarr, newlength, 0);
    intarray_copy_intarray(newarr, str->m_dynamic_array, str->m_size - str->m_static_capacity);
    size = str->m_size;
    c_vector_int_clear(str);
    str->m_dynamic_array = newarr;
    str->m_size = size;
    str->m_dynamic_capacity = newlength;
    return true;
}

void c_vector_int_clear(t_c_vector_int* str)
{
    if (str->m_dynamic_array == NULL)
	return;
    free(str->m_dynamic_array);
    str->m_dynamic_array = NULL;
    str->m_size = 0;
    str->m_dynamic_capacity = 0;
}
