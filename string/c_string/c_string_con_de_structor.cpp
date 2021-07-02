#include "c_string.h"

void c_string_constructor(t_c_string* str)
{
    __c_string_constructor_array_size(str);
    __c_string_constructor_compare_data(str);
    __c_string_constructor_concatenation(str);
    __c_string_constructor_convert_to(str);
    __c_string_constructor_copy_data(str);
    __c_string_constructor_get_free_dymemory(str);
    __c_string_constructor_index_operators(str);
    __c_string_constructor_is_check(str);
    __c_string_constructor_is_check_memory(str);
    __c_string_constructor_push_pop(str);
    __c_string_constructor_search(str);
    __c_string_constructor_to_upper_lower(str);
    __c_string_constructor_setdata(str);
}

void c_string_destructor(t_c_string* str)
{
    c_sstring_destructor(&str->m_static_array);
    c_dstring_destructor(&str->m_dynamic_array);
}