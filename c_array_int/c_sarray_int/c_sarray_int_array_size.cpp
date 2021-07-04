#include "c_sarray_int.h"

int c_sarray_int::size()
{
    return (m_size);
}

int c_sarray_int::capacity()
{
    return (m_capacity);
}

bool c_sarray_int::is_empty()
{
    return (m_size == 0);
}