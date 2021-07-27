#include "c_sstring.h"

void c_sstring_constructor_convert_to(t_c_sstring* str)
{
    str->convert_to_int = c_sstring_convert_to_int;
    str->convert_to_chararray = c_sstring_convert_to_chararray;
}

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

void c_sstring_convert_to_int(t_c_sstring* str, int* value)
{
    *value = ft_atoi(str->m_array);
}