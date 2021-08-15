#include "c_vector_string.h"

t_c_string* c_vector_string::at(t_c_vector_string* obj, int index)
{
    if (index < obj->m_static_capacity)
	return(&obj->m_static_data[index]);
    return(&obj->m_dynamic_data[index - obj->m_static_capacity]);
}
t_c_string* c_vector_string::front(t_c_vector_string* obj)
{
    return (obj->at(obj, 0));
}
t_c_string* c_vector_string::back(t_c_vector_string* obj)
{
    return (obj->at(obj, obj->m_size - 1));
}