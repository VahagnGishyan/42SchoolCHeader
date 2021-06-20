#include "c_sstring.h"

void c_sstring_constructor_compare_data(t_c_sstring* str)
{
    str->compare_chararray = c_sstring_compare_chararray;
    str->compare_c_sstring = c_sstring_compare_c_sstring;
}

int maxLength(int length1, int length2)
{
    return (length1 > length2 ? length1 : length2);
}

int c_sstring_compare_chararray(t_c_sstring* str, char* arr, int size)
{
    //return (std::strncmp(str->m_array, arr, size));
    return (ft_strncmp(str->m_array, arr, size));
}

int c_sstring_compare_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    int length;

    length = maxLength(str1->size(str1), str2->size(str2));
    return (ft_strncmp(str1->m_array, str2->m_array, length));
    //return (std::strncmp(str1->m_array, str2->m_array, length));
}
