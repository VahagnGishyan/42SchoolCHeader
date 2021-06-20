#include "c_sstring.h"

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