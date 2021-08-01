#include "c_sarray_string.h"

bool c_sarray_string::reserve(t_c_sarray_string* obj, int length)
{
    return (length >= 0 && length <= obj->m_capacity);
}

bool c_sarray_string::resize(t_c_sarray_string* obj, int length)
{
    return (length >= 0 && length <= obj->m_capacity);
}

void c_sarray_string::clear(t_c_sarray_string* obj)
{
    if (m_data == NULL)
	return ;
    //int index;


    obj->m_data->clear(m_data);
    obj->m_size = 0;
 //   index = -1;
 //   while (--index < obj->m_capacity)
	//obj->m_data[index].clear();
}

void c_sarray_string::disconnect(t_c_sarray_string* obj)
{
    if (m_data == NULL)
	return;

    obj->clear(obj);
    obj->m_data = NULL;
    obj->m_capacity = 0;
}

//bool c_sarray_string::reserve(t_c_sarray_string* obj, int length)
//{
//    return (length >= 0 && length <= obj->m_capacity);
//}
//
//bool c_sarray_string::resize(t_c_sarray_string* obj, int length)
//{
//    return (length >= 0 && length <= obj->m_capacity);
//}
//
//void c_sarray_string::clear(t_c_sarray_string* obj)
//{
//    if (m_data == NULL)
//	return;
//    c_string_array_destructor(m_data, obj->m_size);
//    obj->m_size = 0;
//}
//
//void c_sarray_string::disconnect(t_c_sarray_string* obj)
//{
//    if (m_data == NULL)
//	return;
//
//    obj->clear(obj);
//    obj->m_data = NULL;
//    obj->m_capacity = 0;
//}