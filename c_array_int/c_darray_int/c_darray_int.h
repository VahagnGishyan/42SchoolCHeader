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

typedef struct c_darray_int t_c_darray_int;

struct  c_darray_int
{
public:

    int	    m_size;
    int	    m_capacity;
    int*    m_array;

    c_darray_int();
    ~c_darray_int();

    //Initialization
    //void tie_static_array(t_c_darray_int* str, int* arr, int capa);
    //void copy_intarray(t_c_darray_int* str, int* arr, int size, int capacity);

    //ResizeClear
    bool resize(t_c_darray_int* str, int length);
    void clear(t_c_darray_int* str);

    //ArraySize
    int size(t_c_darray_int* str);
    int capacity(t_c_darray_int* str);
    bool is_empty(t_c_darray_int* str);

    //IndexOperators
    int* at(t_c_darray_int* str, int index);
    int* front(t_c_darray_int* str);
    int* back(t_c_darray_int* str);

    //PushPopBack
    void push_back(t_c_darray_int* str, int value);
    void pop_back(t_c_darray_int* str);

    //CopyData
    void copy_intarray(t_c_darray_int* str, int* arr, int size);
    void copy_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint);

    //Concatenation
    void concatenation_intarray(t_c_darray_int* str, int* arr, int size);
    void concatenation_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint);

    //Search
    int* search_number(t_c_darray_int* str, int number);
    int  search_number_index(t_c_darray_int* str, int number);

    //ConvertToInt
    void convert_to_intarray(t_c_darray_int* str, int* arrint);

    //is memory check
    bool is_null(c_darray_int* str);
};

void c_darray_int_constructor(t_c_darray_int* str);
void c_darray_int_destructor(t_c_darray_int* str);