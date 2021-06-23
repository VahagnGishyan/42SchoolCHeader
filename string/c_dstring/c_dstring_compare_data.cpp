#include "c_dstring.h"

int c_dstring_compare_chararray(t_c_dstring* str, char* arr, int size)
{
    return(ft_strncmp(str->m_array, arr, size));
}
int c_dstring_compare_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    return(ft_strncmp(str_main->m_array, str_other->m_array, str_other->m_size));
}