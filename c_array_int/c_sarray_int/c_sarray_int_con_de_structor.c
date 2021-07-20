#include "c_sarray_int.h"

void c_sarray_int_constructor(t_c_sarray_int* str)
{
    str->m_array = 0;
    str->m_size = 0;
    str->m_capacity = 0;

    __c_sarray_int_constructor_setdata(str);
    __c_sarray_int_constructor_resize_clear_dymemory(str);
    __c_sarray_int_constructor_array_size(str);
    __c_sarray_int_constructor_index_operators(str);
    __c_sarray_int_constructor_push_pop(str);
    __c_sarray_int_constructor_copy_data(str);
    __c_sarray_int_constructor_concatenation(str);
    __c_sarray_int_constructor_search(str);
    __c_sarray_int_constructor_convert_to(str);
}

void c_sarray_int_destructor(t_c_sarray_int* str)
{
    c_sarray_int_clear(str);
}