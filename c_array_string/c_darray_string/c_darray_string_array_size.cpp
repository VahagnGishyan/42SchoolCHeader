#include "c_darray_string.h"

int  c_darray_string::size(t_c_darray_string* obj)
{
    return(obj->m_size);
}
int  c_darray_string::capacity(t_c_darray_string* obj)
{
    return(obj->m_capacity);
}
bool c_darray_string::is_empty(t_c_darray_string* obj)
{
    return(obj->m_size == 0);
}