#include "c_darray_string.h"

t_c_string* c_darray_string_search_string(t_c_darray_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < c_darray_string_size(data))
	if (!c_string_compare_c_string(c_darray_string_at(data, index), obj))
	    return (c_darray_string_at(data, index));
    return (NULL);
}

int   c_darray_string_search_string_index(t_c_darray_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < c_darray_string_size(data))
	if (!c_string_compare_c_string(c_darray_string_at(data, index), obj))
	    return (index);
    return (NULL);
}
