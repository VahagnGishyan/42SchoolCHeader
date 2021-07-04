#include "c_sarray_int.h"

int* c_sarray_int::at(int index)
{
    return(&m_array[index]);
}

int* c_sarray_int::front()
{
    return(&m_array[0]);
}

int* c_sarray_int::back()
{
    return(&m_array[m_size - 1]);
}
