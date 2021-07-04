#include "c_sstring.h"

void c_sstring_constructor_index_operators(t_c_sstring* str)
{
    str->at = c_sstring_at;
    str->front = c_sstring_front;
    str->back = c_sstring_back;
}

char* c_sstring_at(t_c_sstring* str, int index)
{
    return (&str->m_array[index]);
}
char* c_sstring_front(t_c_sstring* str)
{
    return (&str->m_array[0]);
}
char* c_sstring_back(t_c_sstring* str)
{
    return (&str->m_array[str->m_size - 1]);
}