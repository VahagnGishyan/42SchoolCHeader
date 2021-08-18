#pragma once

#include "../../c_string/c_string/c_string.h"
#include "../../c_is_easy/supporting_functions/supporting_functions.h"

typedef struct c_sarray_string t_c_sarray_string;

struct c_sarray_string
{
    int		m_size;
    t_c_string*	m_data;
    int		m_capacity;
};

void c_sarray_string_constructor(t_c_sarray_string* obj);
void c_sarray_string_destructor(t_c_sarray_string* obj);

////Initialization
void c_sarray_string_tie_static_array(t_c_sarray_string* obj, t_c_string* data, int capacity);
void c_sarray_string_set_data(t_c_sarray_string* obj, t_c_string* data, int size, int capacity);

//ResizeClear
bool c_sarray_string_reserve(t_c_sarray_string* obj, int length);
bool c_sarray_string_resize(t_c_sarray_string* obj, int length);
void c_sarray_string_clear(t_c_sarray_string* obj);
void c_sarray_string_disconnect(t_c_sarray_string* obj);

//ArraySize
int  c_sarray_string_size(t_c_sarray_string* obj);
//int  static_capacity(t_c_sarray_string* obj);
//int  dynamic_capacity(t_c_sarray_string* obj);
int  c_sarray_string_capacity(t_c_sarray_string* obj);
bool c_sarray_string_is_empty(t_c_sarray_string* obj);

//IndexOperators
t_c_string* c_sarray_string_at(t_c_sarray_string* obj, int index);
t_c_string* c_sarray_string_front(t_c_sarray_string* obj);
t_c_string* c_sarray_string_back(t_c_sarray_string* obj);

//PushPopBack
void c_sarray_string_push_back(t_c_sarray_string* obj, t_c_string* value);
void c_sarray_string_pop_back(t_c_sarray_string* obj);

//CopyData
void c_sarray_string_copy_string_array(t_c_sarray_string* obj, t_c_string* arr, int size);
void c_sarray_string_copy_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrstring);

//Concatenation
void c_sarray_string_concatenation_string_array(t_c_sarray_string* obj, t_c_string* arr, int size);
void c_sarray_string_concatenation_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrint);

//Search
t_c_string* c_sarray_string_search_string(t_c_sarray_string* data, t_c_string* obj);
int   c_sarray_string_search_string_index(t_c_sarray_string* data, t_c_string* obj);

//ConvertToString
void  c_sarray_string_convert_to_string_array(t_c_sarray_string* obj, t_c_string* arrstring);

//is memory check
//bool  is_static_memory_null(t_c_sarray_string* obj);
//bool  is_dynamic_memory_null(t_c_sarray_string* obj);
bool  c_sarray_string_is_null(t_c_sarray_string* obj);
//bool  is_used_dynamic_memory(t_c_sarray_string* obj);