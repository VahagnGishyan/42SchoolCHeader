#include "c_sstring.h"

void c_sstring_constructor_to_upper_lower(t_c_sstring* str)
{
    str->to_upper_chararray = c_sstring_to_upper_chararray;
    str->to_upper_c_sstring = c_sstring_to_upper_c_sstring;
    str->to_lower_chararray = c_sstring_to_lower_chararray;
    str->to_lower_c_sstring = c_sstring_to_lower_c_sstring;
}

void c_sstring_to_upper_chararray(t_c_sstring* str, char* arr)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	arr[index] = ft_toupper(str->m_array[index]);
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

void c_sstring_to_lower_chararray(t_c_sstring* str, char* arr)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	arr[index] = ft_tolower(str->m_array[index]);
	++index;
    }
    arr[index] = '\0';
}
void c_sstring_to_lower_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    ushint index;

    index = 0;
    while (index != str1->m_size)
    {
	*str2->at(str2, index) = ft_tolower(str1->m_array[index]);
	++index;
    }
}
