#include "c_darray_string.h"

void c_darray_string_push_back(t_c_darray_string* obj, t_c_string* value)
{
    if (!c_darray_string_resize(obj, obj->m_size + 1))
	return;
    c_darray_string_at(obj, obj->m_size)->copy_c_string(c_darray_string_at(obj, obj->m_size), value);
    ++obj->m_size;
}

void c_darray_string_pop_back(t_c_darray_string* obj)
{
    --obj->m_size;
}

//void c_darray_string_push_back(t_c_darray_string* obj, t_c_string* value)
//{
//    if (!c_darray_string_resize(obj, obj->m_size + 1))
//	return;
//    c_string_constructor(c_darray_string_at(obj, obj->m_size));
//    c_darray_string_at(obj, obj->m_size)->copy_c_string(c_darray_string_at(obj, obj->m_size), value);
//    ++obj->m_size;
//}
//
//void c_darray_string_pop_back(t_c_darray_string* obj)
//{
//    --obj->m_size;
//    c_string_destructor(c_darray_string_at(obj, obj->m_size));
//}