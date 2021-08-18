#include "c_sarray_string.h"

void c_sarray_string_copy_string_array(t_c_sarray_string* obj, t_c_string* arr, int size)
{
    int index;

    c_sarray_string_clear(obj);
    index = -1;
    while (++index < size)
	c_sarray_string_push_back(obj, arr + index);
}
void c_sarray_string_copy_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrstring)
{
    int index;

    c_sarray_string_clear(obj);
    index = -1;
    while (++index < c_sarray_string_size(arrstring))
	c_sarray_string_push_back(obj, c_sarray_string_at(arrstring, index));
}