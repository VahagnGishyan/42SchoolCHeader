#include "c_sarray_string.h"

void c_sarray_string_tie_static_array(t_c_sarray_string* obj, t_c_string* data, int capacity)
{
    obj->m_data = data;
    obj->m_size = 0;
    obj->m_capacity = capacity;
}

void c_sarray_string_set_data(t_c_sarray_string* obj, t_c_string* data, int size, int capacity)
{
    obj->m_data = data;
    obj->m_size = size;
    obj->m_capacity = capacity;
}