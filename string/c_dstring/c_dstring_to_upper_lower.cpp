#include "c_dstring.h"

void c_dstring_to_upper_chararray(t_c_dstring* str, char* arr)
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
void c_dstring_to_upper_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    ushint index;

    index = 0;
    while (index != str_main->m_size)
    {
	*str_other->at(str_other, index) = ft_toupper(str_main->m_array[index]);
	++index;
    }
}
void c_dstring_to_lower_chararray(t_c_dstring* str, char* arr)
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
void c_dstring_to_lower_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    ushint index;

    index = 0;
    while (index != str_main->m_size)
    {
	*str_other->at(str_other, index) = ft_tolower(str_main->m_array[index]);
	++index;
    }
}