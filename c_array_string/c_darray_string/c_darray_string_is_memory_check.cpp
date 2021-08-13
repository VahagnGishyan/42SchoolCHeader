#include "c_darray_string.h"

bool  c_darray_string::is_null(t_c_darray_string* obj)
{
    return(obj->m_data == NULL);
}