#include "c_sstring.h"

void c_sstring_constructor_push_pop(t_c_sstring* str)
{
    str->push_back = c_sstring_push_back;
    str->pop_back = c_sstring_pop_back;
}

void c_sstring_push_back(t_c_sstring* str, char symbol)
{
    str->m_array[str->m_size] = symbol;
    ++str->m_size;
}
void c_sstring_pop_back(t_c_sstring* str)
{
    str->m_array[str->m_size - 1] = 0;
    --str->m_size;
}