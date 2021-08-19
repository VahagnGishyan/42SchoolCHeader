#include "c_darray_string.h"

int  c_darray_string_size(t_c_darray_string* obj)
{
    return(obj->m_size);
}
int  c_darray_string_capacity(t_c_darray_string* obj)
{
    return(obj->m_capacity);
}
bool c_darray_string_is_empty(t_c_darray_string* obj)
{
    return(obj->m_size == 0);
}