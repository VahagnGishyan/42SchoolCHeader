#include "c_sstring.h"

void c_sstring_to_upper_chararray(t_c_sstring* str, char* arr)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	arr[index] =ft_toupper(str->m_array[index]);
	++index;
    }
    arr[index] = '\0';
}
void c_sstring_to_upper_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    ushint index;

    index = 0;
    while (index != str1->m_size)
    {
	*str2->at(str2, index) = ft_toupper(str1->m_array[index]);
	++index;
    }
}
