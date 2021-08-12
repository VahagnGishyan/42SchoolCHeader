#include "c_darray_string.h"

//void c_darray_string::tie_static_array(t_c_darray_string* obj, t_c_string* data, int capacity)
//{
//    obj->m_data = data;
//    obj->m_size = 0;
//    obj->m_capacity = capacity;
//}
void c_darray_string::set_data(t_c_darray_string* obj, t_c_string* data, int size)
{
    int index;

    if (!obj->resize(obj, size))
	return;
    index = -1;
    while (++index < size)
	c_string_copy_c_string(obj->m_data + index, data + index);
    obj->m_size = size;
}