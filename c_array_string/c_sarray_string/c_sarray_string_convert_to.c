#include "c_sarray_string.h"

void  c_sarray_string_convert_to_string_array(t_c_sarray_string* data, t_c_string* arrstring)
{
    int index;

    index = -1;
    while (++index < c_sarray_string_size(data))
	c_string_copy_c_string(arrstring + index, c_sarray_string_at(data, index));
}