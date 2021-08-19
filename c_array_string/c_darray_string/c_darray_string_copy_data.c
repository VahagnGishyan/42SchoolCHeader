#include "c_darray_string.h"

void c_darray_string_copy_string_array(t_c_darray_string* obj, t_c_string* arr, int size)
{
    int index;

    c_darray_string_clear(obj);
    if (!c_darray_string_resize(obj, size))
	return;
    index = -1;
    while (++index < size)
	c_darray_string_push_back(obj, arr + index);
}
void c_darray_string_copy_c_darray_string(t_c_darray_string* obj, t_c_darray_string* arrstring)
{
    int index;

    c_darray_string_clear(obj);
    if (!c_darray_string_resize(obj, arrstring->m_size))
	return;
    index = -1;
    while (++index < c_darray_string_size(arrstring))
	c_darray_string_push_back(obj, c_darray_string_at(arrstring, index));
}