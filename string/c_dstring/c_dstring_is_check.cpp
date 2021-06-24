#include "c_dstring.h"

bool c_dstring_is_alpha(t_c_dstring* str)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	if (!ft_isalpha(str->m_array[index]))
	    return (false);
	++index;
    }
    return (true);
}
bool c_dstring_is_digit(t_c_dstring* str)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	if (!ft_isdigit(str->m_array[index]))
	    return (false);
	++index;
    }
    return (true);
}
bool c_dstring_is_alnum(t_c_dstring* str)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	if (!ft_isalnum(str->m_array[index]))
	    return (false);
	++index;
    }
    return (true);
}
bool c_dstring_is_print(t_c_dstring* str)
{
    ushint index;

    index = 0;
    while (index != str->m_size)
    {
	if (!ft_isprint(str->m_array[index]))
	    return (false);
	++index;
    }
    return (true);
}