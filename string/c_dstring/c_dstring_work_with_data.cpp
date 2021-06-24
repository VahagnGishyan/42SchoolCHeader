#include "c_dstring.h"

char* get_array(t_c_dstring* str)
{
    return (str->m_array);
}
void  set_chararray(t_c_dstring* str, char* arr, int length)
{
    int index;

    str->resize(str, (int)(length * 1.3) + 1);
    index = 0;
    while (index < length || arr[index] != '\0')
    {
	*str->at(str, index) = arr[index];
    }
    str->m_size = length;
}
void  set_c_dstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    int index;

    str_main->resize(str_main, (int)(str_other->m_size * 1.3) + 1);
    index = 0;
    while (index < str_other->m_size || str_other->m_array[index] != '\0')
    {
	*str_main->at(str_main, index) = *str_other->at(str_other, index);
    }
    str_main->m_size = str_other->m_size;
}