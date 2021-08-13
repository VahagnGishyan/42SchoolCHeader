#include "c_vector_string.h"

void c_vector_string::concatenation_string_array(t_c_vector_string* obj, t_c_string* arr, int size)
{
    int index;

    if (!obj->resize(obj, obj->size(obj) + size))
	return;
    index = -1;
    while (++index < size)
	c_string_copy_c_string(obj->at(obj, index + obj->m_size), arr + index);
    obj->m_size += size;
}
void c_vector_string::concatenation_c_vector_string(t_c_vector_string* obj, t_c_vector_string* arrint)
{
    int index;

    if (!obj->resize(obj, obj->size(obj) + arrint->size(arrint)))
	return;
    index = -1;
    while (++index < arrint->size(arrint))
	c_string_copy_c_string(obj->at(obj, index + obj->m_size), arrint->at(arrint, index));
    obj->m_size += arrint->m_size;
}