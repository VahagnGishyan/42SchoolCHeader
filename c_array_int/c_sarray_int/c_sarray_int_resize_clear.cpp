#include "c_sarray_int.h"

bool c_sarray_int::resize(int length)
{
    return (length <= m_capacity);
}

void c_sarray_int::clear()
{
    m_size = 0;
}
