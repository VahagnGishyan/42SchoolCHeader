#include "c_sstring.h"

bool c_sstring_is_alpha(struct c_sstring* str)
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
bool c_sstring_is_digit(struct c_sstring* str)
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
bool c_sstring_is_alnum(struct c_sstring* str)
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
bool c_sstring_is_print(struct c_sstring* str)
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