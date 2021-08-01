#include "c_sarray_string.h"

void c_sarray_string::push_back(t_c_sarray_string* obj, c_string* value)
{
    if (!obj->resize(obj, obj->m_size + 1))
	return;
    obj->at(obj, obj->m_size)->copy_c_string(obj->at(obj, obj->m_size), value);
    ++obj->m_size;
}

void c_sarray_string::pop_back(t_c_sarray_string* obj)
{
    --obj->m_size;
}

//void c_sarray_string::push_back(t_c_sarray_string* obj, t_c_string* value)
//{
//    if (!obj->resize(obj, obj->m_size + 1))
//	return;
//    c_string_constructor(obj->at(obj, obj->m_size));
//    obj->at(obj, obj->m_size)->copy_c_string(obj->at(obj, obj->m_size), value);
//    ++obj->m_size;
//}
//
//void c_sarray_string::pop_back(t_c_sarray_string* obj)
//{
//    --obj->m_size;
//    c_string_destructor(obj->at(obj, obj->m_size));
//}