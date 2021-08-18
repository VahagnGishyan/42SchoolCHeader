#include "c_sarray_string.h"

int  c_sarray_string_size(t_c_sarray_string* obj)
{
    return(obj->m_size);
}

int  c_sarray_string_capacity(t_c_sarray_string* obj)
{
    return(obj->m_capacity);
}

bool c_sarray_string_is_empty(t_c_sarray_string* obj)
{
    return(obj->m_size == 0);
}