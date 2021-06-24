#include "c_dstring.h"

char* c_dstring_search_char(t_c_dstring* str, char symbol)
{
    return (ft_strchr(str->m_array, symbol));
}
char* c_dstring_search_chararray(t_c_dstring* str, char* arr, int size)
{
    return (ft_strnstr(str->m_array, arr, size));
}
char* c_dstring_search_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    return (ft_strnstr(str_main->m_array, str_other->m_array, str_other->m_size));
}