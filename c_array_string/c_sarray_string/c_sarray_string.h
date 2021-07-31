#pragma once
#include "../../header/cpp_header.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "../../c_string/c_string/c_string.h"
#include "../../c_is_easy/supporting_functions/supporting_functions.h"

#ifdef __cplusplus
}
#endif

typedef struct c_sarray_string t_c_sarray_string;

struct c_sarray_string
{
    int		m_size;
    t_c_string*	m_data;
    int		m_capacity;

    c_sarray_string();
    ~c_sarray_string();

    ////Initialization
    void tie_static_array(t_c_sarray_string* obj, t_c_string* data, int capacity);
    void set_data(t_c_sarray_string* obj, t_c_string* data, int size, int capacity);

    //ResizeClear
    bool reserve(t_c_sarray_string* obj, int length);
    bool resize(t_c_sarray_string* obj, int length);
    void clear(t_c_sarray_string* obj);
    void disconnect(t_c_sarray_string* obj);

    //ArraySize
    int  size(t_c_sarray_string* obj);
    //int  static_capacity(t_c_sarray_string* obj);
    //int  dynamic_capacity(t_c_sarray_string* obj);
    int  capacity(t_c_sarray_string* obj);
    bool is_empty(t_c_sarray_string* obj);

    //IndexOperators
    t_c_string* at(t_c_sarray_string* obj, int index);
    t_c_string* front(t_c_sarray_string* obj);
    t_c_string* back(t_c_sarray_string* obj);

    //PushPopBack
    void push_back(t_c_sarray_string* obj, t_c_string* value);
    void pop_back(t_c_sarray_string* obj);

    //CopyData
    void copy_string_array(t_c_sarray_string* obj, t_c_string* arr, int size);
    void copy_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrstring);

    //Concatenation
    void concatenation_string_array(t_c_sarray_string* obj, t_c_string* arr, int size);
    void concatenation_c_sarray_string(t_c_sarray_string* obj, t_c_sarray_string* arrint);

    //Search
    t_c_string*  search_string(t_c_sarray_string* data, t_c_string* obj);
    int   search_string_index(t_c_sarray_string* data, t_c_string* obj);

    //ConvertToString
    void  convert_to_string_array(t_c_sarray_string* obj,t_c_string* arrstring);

    //is memory check
    //bool  is_static_memory_null(t_c_sarray_string* obj);
    //bool  is_dynamic_memory_null(t_c_sarray_string* obj);
    bool  is_null(t_c_sarray_string* obj);
    //bool  is_used_dynamic_memory(t_c_sarray_string* obj);
};

void c_sarray_string_constructor(c_sarray_string* obj);
void c_sarray_string_destructor(c_sarray_string* obj);