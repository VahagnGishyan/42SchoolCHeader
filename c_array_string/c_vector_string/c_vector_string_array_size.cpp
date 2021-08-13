#include "c_vector_string.h"

int  c_vector_string::size(t_c_vector_string* obj)
{
    return(obj->m_size);
}
int  c_vector_string::static_capacity(t_c_vector_string* obj)
{
    return(obj->m_static_capacity);
}
int  c_vector_string::dynamic_capacity(t_c_vector_string* obj)
{
    return(obj->m_dynamic_capacity);
}
int  c_vector_string::capacity(t_c_vector_string* obj)
{
    return(obj->m_static_capacity + m_dynamic_capacity);
}
bool c_vector_string::is_empty(t_c_vector_string* obj)
{
    return(obj->m_size == 0);
}