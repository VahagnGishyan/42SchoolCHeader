#include "c_dstring.h"

void c_dstring_clear(t_c_dstring* str)
{
    if (c_dstring_is_null(str))
	return;
    free(str->m_array);
    str->m_array = NULL;
}