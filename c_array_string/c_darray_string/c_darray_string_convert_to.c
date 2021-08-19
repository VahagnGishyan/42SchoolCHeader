#include "c_darray_string.h"

void  c_darray_string_convert_to_string_array(t_c_darray_string* data, t_c_string* arrstring)
{
    int index;

    index = -1;
    while (++index < c_darray_string_size(data))
	c_string_copy_c_string(arrstring + index, c_darray_string_at(data, index));
}