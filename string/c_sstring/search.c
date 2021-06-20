#include "c_sstring.h"


char* c_sstring_search_char(t_c_sstring* str, char symbol)
{
    return (ft_strchr(str->m_array, symbol));
}
char* c_sstring_search_chararray(t_c_sstring* str, char* arr, int size)
{
    return (ft_strnstr(str->m_array, arr, size));
}
char* c_sstring_search_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    return (ft_strnstr(str1->m_array, str2->m_array, str2->m_size));
}
