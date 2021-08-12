#include "c_darray_string.h"

void c_darray_string_constructor(c_darray_string* obj)
{
    obj->m_size = 0;
    obj->m_data = 0;
    obj->m_capacity = 0;
}
void c_darray_string_destructor(c_darray_string* obj)
{
    obj->clear(obj);
}