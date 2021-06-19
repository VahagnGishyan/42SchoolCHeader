#include "c_sstring.h"

void c_sstring_convert_to_chararray(t_c_sstring* str, char* arr)
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