#include "c_sstring.h"

void c_sstring_constructor_is_check(t_c_sstring* str)
{
    str->is_alpha = c_sstring_is_alpha;
    str->is_digit = c_sstring_is_digit;
    str->is_alnum = c_sstring_is_alnum;
    str->is_print = c_sstring_is_print;
}

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