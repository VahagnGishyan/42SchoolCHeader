#include "c_sstring.h"

int c_sstring_size(struct c_sstring* str)
{
    return (str->m_size);
}
int c_sstring_capasity(struct c_sstring* str)
{
    return (str->m_capacity);
}
bool c_sstring_is_empty(struct c_sstring* str)
{
    return (!str->m_size);
}
void c_sstring_clear(struct c_sstring* str)
{
    str->m_size = 0;
}