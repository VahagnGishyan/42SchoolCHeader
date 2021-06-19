#include "c_sstring.h"

void c_sstring_copy_chararray(t_c_sstring* str, char* arr, int size)
{
    ushint index;

    index = 0;
    while (index != size)
    {
	str->m_array[index] = arr[index];
	++index;
    }
    str->m_size = size;
    if (*str->back(str) == '\0')
    {
	str->pop_back(str);
    }

}
void c_sstring_copy_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    ushint index;
    ushint size;

    index = 0;
    size = str2->size(str2);
    while (index != size)
    {
	str1->m_array[index] = *(str2->at(str2, index));
	++index;
    }
    str2->m_size = size;
}