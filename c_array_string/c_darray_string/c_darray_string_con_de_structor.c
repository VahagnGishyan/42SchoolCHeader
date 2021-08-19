#include "c_darray_string.h"

void c_darray_string_constructor(t_c_darray_string* obj)
{
    obj->m_size = 0;
    obj->m_data = 0;
    obj->m_capacity = 0;
}
void c_darray_string_destructor(t_c_darray_string* obj)
{
    c_darray_string_clear(obj);
}