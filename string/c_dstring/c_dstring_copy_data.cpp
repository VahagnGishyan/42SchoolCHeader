#include "c_dstring.h"

void c_dstring_copy_chararray(t_c_dstring* str, char* arr, int size)
{
    if (str->m_capacity <= size)
	c_dstring_resize(str, (int)(size * 1.3) + 1);
    ft_memcpy(str->m_array, arr, size);
}
void c_dstring_copy_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other)
{
    if (str_other->m_capacity <= str_other->m_size)
	c_dstring_resize(str_main, (int)(str_other->m_size * 1.3) + 1);
    ft_memcpy(str_other->m_array, str_other->m_array, str_other->m_size);
}
