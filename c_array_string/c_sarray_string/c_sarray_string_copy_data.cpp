#include "c_sarray_string.h"

void c_sarray_string::copy_string_array(t_c_sarray_string* obj, t_c_string* arr, int size)
{
    int index;

    obj->clear(obj);
    index = -1;
    while (++index < size)
	obj->push_back(obj, arr + index);
}
void c_sarray_string::copy_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrstring)
{
    int index;

    obj->clear(obj);
    index = -1;
    while (++index < arrstring->size(arrstring))
	obj->push_back(obj, arrstring->at(arrstring, index));
}