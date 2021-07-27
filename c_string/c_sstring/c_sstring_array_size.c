#include "c_sstring.h"

void c_sstring_constructor_array_size(t_c_sstring* str)
{
    str->size = c_sstring_size;
    str->capacity = c_sstring_capacity;
    str->is_empty = c_sstring_is_empty;
    str->is_null = c_sstring_is_null;
}

int c_sstring_size(struct c_sstring* str)
{
    return (str->m_size);
}
int c_sstring_capacity(struct c_sstring* str)
{
    return (str->m_capacity);
}
bool c_sstring_is_empty(struct c_sstring* str)
{
    return (!str->m_size);
}

bool  c_sstring_is_null(t_c_sstring* str)
{
    return (str->m_array == NULL);
}
