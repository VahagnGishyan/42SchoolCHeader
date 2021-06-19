#include "c_sstring.h"

void c_sstring_initaliaztion(t_c_sstring* str)
{
    str->constructor = c_sstring_constructor;
    str->constructor_empty = c_sstring_constructor_empty;
    str->destructor = c_sstring_destructor;

    str->size = c_sstring_size;
    str->capasity = c_sstring_capasity;
    str->is_empty = c_sstring_is_empty;
    str->clear = c_sstring_clear;

    str->at = c_sstring_at;
    str->front = c_sstring_front;
    str->back = c_sstring_back;

    str->push_back = c_sstring_push_back;
    str->pop_back = c_sstring_pop_back;

    str->copy_chararray = c_sstring_copy_chararray;
    str->copy_c_sstring = c_sstring_copy_c_sstring;
    str->concatenation_chararray = c_sstring_concatenation_chararray;
    str->concatenation_c_sstring = c_sstring_concatenation_c_sstring;

    str->compare_chararray = c_sstring_compare_chararray;
    str->compare_c_sstring = c_sstring_compare_c_sstring;

    str->search_char = c_sstring_search_char;
    str->search_chararray = c_sstring_search_chararray;
    str->search_c_sstring = c_sstring_search_c_sstring;

    str->is_alpha = c_sstring_is_alpha;
    str->is_digit = c_sstring_is_digit;
    str->is_alnum = c_sstring_is_alnum;
    str->is_print = c_sstring_is_print;

    str->to_upper_chararray = c_sstring_to_upper_chararray;
    str->to_upper_c_sstring = c_sstring_to_upper_c_sstring;
    str->to_lower_chararray = c_sstring_to_lower_chararray;
    str->to_lower_c_sstring = c_sstring_to_lower_c_sstring;

    str->convert_to_int = c_sstring_convert_to_int;
    str->convert_to_chararray = c_sstring_convert_to_chararray;
}

void c_sstring_constructor_empty(t_c_sstring* str, char* arr, int capasity)
{
    str->m_array = arr;
    str->m_size = 0;
    str->m_capasity = capasity;
    str->m_array[0] = '\0';
}

void c_sstring_constructor(t_c_sstring* str, char* arr, int size, int capasity)
{
    str->m_array = arr;
    str->m_size = size;
    str->m_capasity = capasity;
    if (str->m_size > 1)
	if (str->m_array[str->m_size - 1] == '\0')
	    str->pop_back(str);
}
