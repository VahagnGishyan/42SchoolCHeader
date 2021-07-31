#include "c_sarray_string.h"

void c_sarray_string::concatenation_string_array(t_c_sarray_string* obj, t_c_string* arr, int size)
{
    int index;

    if (!obj->resize(obj, obj->size(obj) + size))
	return;
    index = -1;
    while (++index < size)
	*obj->at(obj, index + obj->m_size) = arr[index];
    obj->m_size += size;
}
void c_sarray_string::concatenation_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrint)
{
    int index;

    if (!obj->resize(obj, obj->size(obj) + arrint->size(arrint)))
	return;
    index = -1;
    while (++index < arrint->size(arrint))
	*obj->at(obj, index + obj->m_size) = *arrint->at(arrint, index);
    obj->m_size += arrint->m_size;
}