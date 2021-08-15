#include "c_vector_string.h"

t_c_string* c_vector_string::search_string(t_c_vector_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < data->size(data))
	if (!c_string_compare_c_string(data->at(data, index), obj))
	    return (data->at(data, index));
    return (NULL);
}

int   c_vector_string::search_string_index(t_c_vector_string* data, t_c_string* obj)
{
    int index;

    index = -1;
    while (++index < data->size(data))
	if (!c_string_compare_c_string(data->at(data, index), obj))
	    return (index);
    return (NULL);
}
