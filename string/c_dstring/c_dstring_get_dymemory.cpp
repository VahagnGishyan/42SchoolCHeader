#include "c_dstring.h"

bool get_dymemory(char** ptr, int size)
{
    ptr[0] = (char*)malloc(size);
    return(ptr == NULL);
}

bool c_dstring_resize(t_c_dstring* str, int length)
{
    char* newstring;

    if (str->m_capacity >= length)
	return true;
    newstring = NULL;
    if (get_dymemory(&newstring, length))
	return false;
    ft_strlcpy(newstring, str->m_array, str->m_size);
    c_dstring_clear(str);
    str->m_array = newstring;
    str->m_capacity = length;
    return true;
}