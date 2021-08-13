#include "c_darray_string.h"

t_c_string* c_darray_string::at(t_c_darray_string* obj, int index)
{
    return (&obj->m_data[index]);
}
t_c_string* c_darray_string::front(t_c_darray_string* obj)
{
    return (&obj->m_data[0]);
}
t_c_string* c_darray_string::back(t_c_darray_string* obj)
{
    return (&obj->m_data[obj->m_size - 1]);
}