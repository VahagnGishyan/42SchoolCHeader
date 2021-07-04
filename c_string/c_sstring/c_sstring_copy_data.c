#include "c_sstring.h"

void c_sstring_constructor_copy_data(t_c_sstring* str)
{
    str->copy_chararray = c_sstring_copy_chararray;
    str->copy_c_sstring = c_sstring_copy_c_sstring;
}

void c_sstring_copy_chararray(t_c_sstring* str, char* arr, int size)
{
    str->m_size = ft_strlcpy(str->m_array, arr, size);
}
void c_sstring_copy_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    str1->m_size = ft_strlcpy(str1->m_array, str2->m_array, (size_t)str2->size);
}