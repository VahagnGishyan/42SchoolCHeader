#include "c_sarray_int.h"

void __c_sarray_int_constructor_convert_to(t_c_sarray_int* str)
{
    str->convert_to_intarray = c_sarray_int_convert_to_intarray;
}

void c_sarray_int_convert_to_intarray(t_c_sarray_int* str, int* arrint)
{
    int index;

    index = -1;
    while (++index < str->m_size)
	arrint[index] = str->m_array[index];
}
