#include "c_dstring.h"

void c_dstring_constructor(t_c_dstring* str)
{
    str->resize = c_dstring_resize;
    str->clear = c_dstring_clear;

    str->size = c_dstring_size;
    str->capacity = c_dstring_capacity;
    str->is_empty = c_dstring_is_empty;
    str->is_null = c_dstring_is_null;

    str->at = c_dstring_at;
    str->front = c_dstring_front;
    str->back = c_dstring_back;

    str->push_back = c_dstring_push_back;
    str->pop_back = c_dstring_pop_back;

    str->copy_chararray = c_dstring_copy_chararray;
    str->copy_c_sstring = c_dstring_copy_c_sstring;

    str->concatenation_chararray = c_dstring_concatenation_chararray;
    str->concatenation_c_sstring = c_dstring_concatenation_c_sstring;

    str->compare_c_sstring = c_dstring_compare_c_sstring;

    str->search_char = c_dstring_search_char;
    str->search_chararray = c_dstring_search_chararray;
    str->search_c_sstring = c_dstring_search_c_sstring;

    str->is_alpha = c_dstring_is_alpha;
    str->is_digit = c_dstring_is_digit;
    str->is_alnum = c_dstring_is_alnum;
    str->is_print = c_dstring_is_print;

    str->to_upper_chararray = c_dstring_to_upper_chararray;
    str->to_upper_c_sstring = c_dstring_to_upper_c_sstring;
    str->to_lower_chararray = c_dstring_to_lower_chararray;
    str->to_lower_c_sstring = c_dstring_to_lower_c_sstring;

    str->convert_to_int = c_dstring_convert_to_int;
    str->convert_to_chararray = c_dstring_convert_to_chararray;
}

void c_dstring_destructor(t_c_dstring* str)
{
    str->clear(str);
}