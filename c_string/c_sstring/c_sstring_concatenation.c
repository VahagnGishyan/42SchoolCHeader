#include "c_sstring.h"

void c_sstring_constructor_concatenation(t_c_sstring* str)
{
    str->concatenation_chararray = c_sstring_concatenation_chararray;
    str->concatenation_c_sstring = c_sstring_concatenation_c_sstring;
}


void c_sstring_concatenation_chararray(t_c_sstring* str, char* arr, int size)
{
    int index;
    if (size >= str->m_capacity)
	return;
    index = 0;
    while (index != size && arr[index] != '\0')
    {
	str->push_back(str, arr[index]);
	++index;
    }
}
void c_sstring_concatenation_c_sstring(t_c_sstring* str1, t_c_sstring* str2)
{
    int index;
    int size;

    size = str2->size(str2);
    index = 0;
    while (index != size && (*str2->at(str2, index) != '\0'))
    {
	str1->push_back(str1 , *str2->at(str2, index));
	++index;
    }
}