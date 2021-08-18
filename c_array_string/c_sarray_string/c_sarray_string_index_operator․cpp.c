#include "c_sarray_string.h"

t_c_string* c_sarray_string_at(t_c_sarray_string* obj, int index)
{
    return (&obj->m_data[index]);
}

t_c_string* c_sarray_string_front(t_c_sarray_string* obj)
{
    return (&obj->m_data[0]);
}

t_c_string* c_sarray_string_back(t_c_sarray_string* obj)
{
    return (&obj->m_data[obj->m_size - 1]);
}