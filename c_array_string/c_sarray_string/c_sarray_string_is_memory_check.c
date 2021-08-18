#include "c_sarray_string.h"

bool  c_sarray_string_is_null(t_c_sarray_string* obj)
{
    return(obj->m_data == NULL);
}