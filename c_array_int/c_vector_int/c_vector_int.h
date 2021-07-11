#pragma once

#include "../../header/cpp_header.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "../../header/42SchoolCHeader.h"

#ifdef __cplusplus
}
#endif

typedef struct c_vector_int t_c_vector_int;

struct  c_vector_int
{
public:

    int	    m_size;
    int	    m_static_capacity;
    int*    m_static_array;
    int	    m_dynamic_capacity;
    int*    m_dynamic_array;

    c_vector_int();
    ~c_vector_int();

    //Initialization
    void tie_static_array(t_c_vector_int* str, int* arr, int capa);
    void set_data(t_c_vector_int* str, int* arr, int size, int capacity);

    //ResizeClear
    void set_size(t_c_vector_int* str, int size);
    bool resize(t_c_vector_int* str, int length);
    void clear(t_c_vector_int* str);

    //ArraySize
    int size(t_c_vector_int* str);
    int static_capacity(t_c_vector_int* str);
    int dynamic_capacity(t_c_vector_int* str);
    int capacity(t_c_vector_int* str);
    bool is_empty(t_c_vector_int* str);

    //IndexOperators
    int* at(t_c_vector_int* str, int index);
    int* front(t_c_vector_int* str);
    int* back(t_c_vector_int* str);

    //PushPopBack
    void push_back(t_c_vector_int* str, int value);
    void pop_back(t_c_vector_int* str);

    //CopyData
    void copy_intarray(t_c_vector_int* str, int* arr, int size);
    void copy_c_vector_int(t_c_vector_int* str, t_c_vector_int* arrint);

    //Concatenation
    void concatenation_intarray(t_c_vector_int* str, int* arr, int size);
    void concatenation_c_vector_int(t_c_vector_int* str, t_c_vector_int* arrint);

    //Search
    int* search_number(t_c_vector_int* str, int number);
    int  search_number_index(t_c_vector_int* str, int number);

    //ConvertToInt
    void convert_to_intarray(t_c_vector_int* str, int* arrint);

    //is memory check
    bool  is_static_memory_null(c_vector_int* str);
    bool  dynamic_memory_null(c_vector_int* str);
    bool  is_null(c_vector_int* str);
    bool  is_used_dynamic_memory(c_vector_int* str);
};

void c_vector_int_constructor(t_c_vector_int* str);
void c_vector_int_destructor(t_c_vector_int* str);

