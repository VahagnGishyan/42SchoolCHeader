#include "c_darray_string.h"

bool c_darray_string::resize(t_c_darray_string* obj, int length)
{
    t_c_string*	newarr;
    int		newlength;
    int		size;

    if (length < 0)
    {
	obj->clear(obj);
	return (false);
    }
    if (obj->capacity(obj) >= length)
	return true;

    newlength = length * 1.3;
    if ((newarr = (t_c_string*)malloc(newlength * sizeof(t_c_string))) == NULL)
	return NULL;

    c_string_array_constructor(newarr, newlength);
    c_string_array_copy_c_string_array(newarr, obj->m_data, obj->m_size);
    size = obj->m_size;
    obj->clear(obj);

    obj->m_data = newarr;
    obj->m_size = size;
    obj->m_capacity = newlength;
    return true;
}

void c_darray_string::clear(t_c_darray_string* obj)
{
    int index;

    if (obj->m_data == NULL)
	return;
    index = -1;
    while (++index < obj->m_capacity)
    {
	 c_string_clear(&obj->m_data[index]);
    }
    c_string_array_destructor(obj->m_data, obj->m_size);

    free(obj->m_data);
    obj->m_data = NULL;
    obj->m_size = 0;
    obj->m_capacity = 0;
}



//void c_darray_string::disconnect(t_c_darray_string* obj)
//{
//    if (m_data == NULL)
//	return;
//
//    obj->clear(obj);
//    obj->m_data = NULL;
//    obj->m_capacity = 0;
//}

//bool c_darray_string::reserve(t_c_darray_string* obj, int length)
//{
//    return (length >= 0 && length <= obj->m_capacity);
//}
//
//bool c_darray_string::resize(t_c_darray_string* obj, int length)
//{
//    return (length >= 0 && length <= obj->m_capacity);
//}
//
//void c_darray_string::clear(t_c_darray_string* obj)
//{
//    if (m_data == NULL)
//	return;
//    c_string_array_destructor(m_data, obj->m_size);
//    obj->m_size = 0;
//}
//
//void c_darray_string::disconnect(t_c_darray_string* obj)
//{
//    if (m_data == NULL)
//	return;
//
//    obj->clear(obj);
//    obj->m_data = NULL;
//    obj->m_capacity = 0;
//}