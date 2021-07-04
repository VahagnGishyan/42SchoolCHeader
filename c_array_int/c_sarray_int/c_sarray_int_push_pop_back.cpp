#include "c_sarray_int.h"

void c_sarray_int::push_back(int value)
{
    m_array[m_size++] = value;
}

void c_sarray_int::pop_back()
{
    --m_size;
}
