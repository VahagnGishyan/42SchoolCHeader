#include "c_vector_string.h"

void c_vector_string_constructor(c_vector_string* obj)
{
    obj->m_size = 0;
    obj->m_static_data = 0;
    obj->m_static_capacity = 0;
    obj->m_dynamic_data = 0;
    obj->m_dynamic_capacity = 0;
}
void c_vector_string_destructor(c_vector_string* obj)
{
    obj->clear(obj);
}