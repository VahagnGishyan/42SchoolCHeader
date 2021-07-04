#include "c_sstring.h"

void c_sstring_constructor_compare_data(t_c_sstring* str)
{
    str->compare_chararray = c_sstring_compare_chararray;
    str->compare_c_sstring = c_sstring_compare_c_sstring;
}

int c_sstring_compare_chararray(t_c_sstring* str, char* arr, int size)
{
    return (ft_strncmp(str->m_array, arr, size));
}

int c_sstring_compare_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    return (ft_strncmp(str1->m_array, str2->m_array, max(str1->size(str1), str2->size(str2))));
}
