#include "c_sarray_string.h"

void c_sarray_string_constructor(t_c_sarray_string* obj)
{
    obj->m_size = 0;
    obj->m_data = 0;
    obj->m_capacity = 0;
}
void c_sarray_string_destructor(t_c_sarray_string* obj)
{
    c_sarray_string_clear(obj);
}