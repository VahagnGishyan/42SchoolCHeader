#include "c_sstring.h"

void c_sstring_constructor_setdata(t_c_sstring* str)
{
    str->setdata = c_sstring_setdata;
    str->setdata_empty = c_sstring_setdata_empty;
}

void c_sstring_setdata_empty(t_c_sstring* str, char* arr, int capasity)
{
    str->m_array = arr;
    str->m_size = 0;
    str->m_capacity = capasity;
    str->m_array[0] = '\0';
}

void c_sstring_setdata(t_c_sstring* str, char* arr, int size, int capasity)
{
    str->m_array = arr;
    str->m_size = size;
    str->m_capacity = capasity;
    if (str->m_size > 1)
	if (str->m_array[str->m_size - 1] == '\0')
	    str->pop_back(str);
}
