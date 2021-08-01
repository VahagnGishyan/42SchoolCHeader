#include "c_sarray_string.h"

t_c_string* c_sarray_string::search_string(t_c_sarray_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < data->size(data))
	if (c_string_compare_c_string(m_data, obj))
	    return (data->at(data, index));
    return (NULL);
}

int   c_sarray_string::search_string_index(t_c_sarray_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < data->size(data))
	if (c_string_compare_c_string(m_data, obj))
	    return (index);
    return (NULL);
}
