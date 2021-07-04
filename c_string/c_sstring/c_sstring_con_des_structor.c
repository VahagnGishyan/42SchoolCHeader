#include "c_sstring.h"

void c_sstring_constructor(t_c_sstring* str)
{
    c_sstring_constructor_array_size(str);
    c_sstring_constructor_compare_data(str);
    c_sstring_constructor_concatenation(str);
    c_sstring_constructor_convert_to(str);
    c_sstring_constructor_copy_data(str);
    c_sstring_constructor_index_operators(str);
    c_sstring_constructor_is_check(str);
    c_sstring_constructor_push_pop(str);
    c_sstring_constructor_search(str);
    c_sstring_constructor_setdata(str);
    c_sstring_constructor_to_upper_lower(str);
}

void c_sstring_destructor(t_c_sstring* str)
{
    str->m_size = 0;
}


