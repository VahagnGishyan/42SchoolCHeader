#include "c_vector_int.h"

void c_vector_int::convert_to_intarray(t_c_vector_int* str, int* arrint)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	arrint[index] = *str->at(str, index);
}
