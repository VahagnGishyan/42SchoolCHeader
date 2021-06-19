#include "c_sstring.h"

void c_sstring_destructor(struct c_sstring* str)
{
    str->m_array = 0;
    str->m_size = 0;
    str->m_capasity = 0;
}