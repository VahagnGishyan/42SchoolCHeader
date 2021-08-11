#include "c_sarray_string.h"

void  c_sarray_string::convert_to_string_array(t_c_sarray_string* data, t_c_string* arrstring)
{
    int index;

    index = -1;
    while (++index < data->size(data))
	c_string_copy_c_string(arrstring + index,  data->at(data, index));
}