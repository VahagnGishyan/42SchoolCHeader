#include "c_darray_string.h"

void c_darray_string::copy_string_array(t_c_darray_string* obj, t_c_string* arr, int size)
{
    int index;

    obj->clear(obj);
    if (!resize(obj, size))
	return;
    index = -1;
    while (++index < size)
	obj->push_back(obj, arr + index);
}
void c_darray_string::copy_c_darray_string(t_c_darray_string* obj, t_c_darray_string* arrstring)
{
    int index;

    obj->clear(obj);
    if (!resize(obj, arrstring->m_size))
	return;
    index = -1;
    while (++index < arrstring->size(arrstring))
	obj->push_back(obj, arrstring->at(arrstring, index));
}