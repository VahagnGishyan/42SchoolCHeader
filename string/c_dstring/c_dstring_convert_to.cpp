#include "c_dstring.h"

void c_dstring_convert_to_int(t_c_dstring* str, int* value)
{
    *value = ft_atoi(str->m_array);
}
void c_dstring_convert_to_chararray(t_c_dstring* str, char* arr)
{
    int index;

    if (str->m_size < 1)
	return;
    index = 0;
    while (index < str->m_size)
    {
	arr[index] = str->m_array[index];
	++index;
    }
    arr[index] = '\0';
}