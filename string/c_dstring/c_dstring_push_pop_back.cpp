#include "c_dstring.h"

void c_dstring_push_back(t_c_dstring *str, char symbol)
{
    if (str->m_size >= str->m_capacity)
	c_dstring_resize(str, (int)(str->m_capacity * 1.3) + 1);
    str->m_array[str->m_size] = symbol;
    ++str->m_size;
}
void c_dstring_pop_back(t_c_dstring* str)
{
    --str->m_size;
}