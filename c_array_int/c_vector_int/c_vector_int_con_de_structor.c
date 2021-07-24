#include "c_vector_int.h"

void c_vector_int_constructor(t_c_vector_int* str)
{
    str->m_size = 0;
    str->m_static_capacity = 0;
    str->m_static_array = 0;
    str->m_dynamic_capacity = 0;
    str->m_dynamic_array = 0;

    __c_vector_int_constructor_setdata(str);
    __c_vector_int_constructor_resize_clear_dymemory(str);
    __c_vector_int_constructor_array_size(str);
    __c_vector_int_constructor_index_operators(str);
    __c_vector_int_constructor_push_pop(str);
    __c_vector_int_constructor_copy_data(str);
    __c_vector_int_constructor_concatenation(str);
    __c_vector_int_constructor_search(str);
    __c_vector_int_constructor_convert_to(str);
    __c_vector_int_constructor_is_memory_check(str);
}

void c_vector_int_destructor(t_c_vector_int* str)
{
    str->clear(str);
}