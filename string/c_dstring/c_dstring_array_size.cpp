#include "c_dstring.h"

int c_dstring_size(t_c_dstring* str)
{
    return (str->m_size);
}
int c_dstring_capacity(t_c_dstring* str)
{
    return (str->m_capacity);
}
bool c_dstring_is_empty(t_c_dstring* str)
{
    return (str->m_size == 0);
}
bool c_dstring_is_null(t_c_dstring* str)
{
    return (str->m_array == NULL);
}