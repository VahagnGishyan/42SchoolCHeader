#include "c_vector_int.h"

void __c_vector_int_constructor_convert_to(t_c_vector_int* str)
{
    str->convert_to_intarray = c_vector_int_convert_to_intarray;
}

void c_vector_int_convert_to_intarray(t_c_vector_int* str, int* arrint)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	arrint[index] = *c_vector_int_at(str, index);
}
