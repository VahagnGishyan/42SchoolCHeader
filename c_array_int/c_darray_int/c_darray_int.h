#pragma once

#include "../../header/42SchoolCHeader.h"

typedef struct c_darray_int t_c_darray_int;

struct  c_darray_int
{

    int	    m_size;
    int	    m_capacity;
    int*    m_array;

    //Initialization
    //void tie_static_array(t_c_darray_int* str, int* arr, int capa);
    //void copy_intarray(t_c_darray_int* str, int* arr, int size, int capacity);

    //ResizeClear
    bool (*resize)(t_c_darray_int* str, int length);
    void (*clear)(t_c_darray_int* str);

    //ArraySize
    int (*size)(t_c_darray_int* str);
    int (*capacity)(t_c_darray_int* str);
    bool (*is_empty)(t_c_darray_int* str);

    //IndexOperators
    int* (*at)(t_c_darray_int* str, int index);
    int* (*front)(t_c_darray_int* str);
    int* (*back)(t_c_darray_int* str);

    //PushPopBack
    void (*push_back)(t_c_darray_int* str, int value);
    void (*pop_back)(t_c_darray_int* str);

    //CopyData
    void (*copy_intarray)(t_c_darray_int* str, int* arr, int size);
    void (*copy_c_darray_int)(t_c_darray_int* str, t_c_darray_int* arrint);

    //Concatenation
    void (*concatenation_intarray)(t_c_darray_int* str, int* arr, int size);
    void (*concatenation_c_darray_int)(t_c_darray_int* str, t_c_darray_int* arrint);

    //Search
    int* (*search_number)(t_c_darray_int* str, int number);
    int  (*search_number_index)(t_c_darray_int* str, int number);

    //ConvertToInt
    void (*convert_to_intarray)(t_c_darray_int* str, int* arrint);

    //is memory check
    bool (*is_null)(t_c_darray_int* str);
};

void c_darray_int_constructor(t_c_darray_int* str);

void __c_darray_int_constructor_resize_clear_dymemory(t_c_darray_int* str);
void __c_darray_int_constructor_array_size(t_c_darray_int* str);
void __c_darray_int_constructor_index_operators(t_c_darray_int* str);
void __c_darray_int_constructor_push_pop(t_c_darray_int* str);
void __c_darray_int_constructor_copy_data(t_c_darray_int* str);
void __c_darray_int_constructor_concatenation(t_c_darray_int* str);
void __c_darray_int_constructor_search(t_c_darray_int* str);
void __c_darray_int_constructor_convert_to(t_c_darray_int* str);

void c_darray_int_destructor(t_c_darray_int* str);

//ResizeClear
bool c_darray_int_resize(t_c_darray_int* str, int length);
void c_darray_int_clear(t_c_darray_int* str);

//ArraySize
int c_darray_int_size(t_c_darray_int* str);
int c_darray_int_capacity(t_c_darray_int* str);
bool c_darray_int_is_empty(t_c_darray_int* str);

//IndexOperators
int* c_darray_int_at(t_c_darray_int* str, int index);
int* c_darray_int_front(t_c_darray_int* str);
int* c_darray_int_back(t_c_darray_int* str);

//PushPopBack
void c_darray_int_push_back(t_c_darray_int* str, int value);
void c_darray_int_pop_back(t_c_darray_int* str);

//CopyData
void c_darray_int_copy_intarray(t_c_darray_int* str, int* arr, int size);
void c_darray_int_copy_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint);

//Concatenation
void c_darray_int_concatenation_intarray(t_c_darray_int* str, int* arr, int size);
void c_darray_int_concatenation_c_darray_int(t_c_darray_int* str, t_c_darray_int* arrint);

//Search
int* c_darray_int_search_number(t_c_darray_int* str, int number);
int  c_darray_int_search_number_index(t_c_darray_int* str, int number);

//ConvertToInt
void c_darray_int_convert_to_intarray(t_c_darray_int* str, int* arrint);

//is memory check
bool c_darray_int_is_null(t_c_darray_int* str);