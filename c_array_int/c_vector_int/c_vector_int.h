#pragma once

#include "../../header/42SchoolCHeader.h"

typedef struct c_vector_int t_c_vector_int;

struct  c_vector_int
{
    int	    m_size;
    int	    m_static_capacity;
    int*    m_static_array;
    int	    m_dynamic_capacity;
    int*    m_dynamic_array;

    ////Initialization
    void (*tie_static_array)(t_c_vector_int* str, int* arr, int capa);
    void (*set_data)(t_c_vector_int* str, int* arr, int size, int capacity);

    //ResizeClear
    void (*set_size)(t_c_vector_int* str, int size);
    bool (*resize)(t_c_vector_int* str, int length);
    void (*clear)(t_c_vector_int* str);

    //ArraySize
    int (*size)(t_c_vector_int* str);
    int (*static_capacity)(t_c_vector_int* str);
    int (*dynamic_capacity)(t_c_vector_int* str);
    int (*capacity)(t_c_vector_int* str);
    bool (*is_empty)(t_c_vector_int* str);

    //IndexOperators
    int* (*at)(t_c_vector_int* str, int index);
    int* (*front)(t_c_vector_int* str);
    int* (*back)(t_c_vector_int* str);

    //PushPopBack
    void (*push_back)(t_c_vector_int* str, int value);
    void (*pop_back)(t_c_vector_int* str);

    //CopyData
    void (*copy_intarray)(t_c_vector_int* str, int* arr, int size);
    void (*copy_c_vector_int)(t_c_vector_int* str, t_c_vector_int* arrint);

    //Concatenation
    void (*concatenation_intarray)(t_c_vector_int* str, int* arr, int size);
    void (*concatenation_c_vector_int)(t_c_vector_int* str, t_c_vector_int* arrint);

    //Search
    int* (*search_number)(t_c_vector_int* str, int number);
    int  (*search_number_index)(t_c_vector_int* str, int number);

    //ConvertToInt
    void (*convert_to_intarray)(t_c_vector_int* str, int* arrint);

    //is memory check
    bool  (*is_static_memory_null)(t_c_vector_int* str);
    bool  (*is_dynamic_memory_null)(t_c_vector_int* str);
    bool  (*is_null)(t_c_vector_int* str);
    bool  (*is_used_dynamic_memory)(t_c_vector_int* str);
};

void c_vector_int_constructor(t_c_vector_int* str);

void __c_vector_int_constructor_setdata(t_c_vector_int* str);
void __c_vector_int_constructor_resize_clear_dymemory(t_c_vector_int* str);
void __c_vector_int_constructor_array_size(t_c_vector_int* str);
void __c_vector_int_constructor_index_operators(t_c_vector_int* str);
void __c_vector_int_constructor_push_pop(t_c_vector_int* str);
void __c_vector_int_constructor_copy_data(t_c_vector_int* str);
void __c_vector_int_constructor_concatenation(t_c_vector_int* str);
void __c_vector_int_constructor_search(t_c_vector_int* str);
void __c_vector_int_constructor_convert_to(t_c_vector_int* str);
void __c_vector_int_constructor_is_memory_check(t_c_vector_int* str);

void c_vector_int_destructor(t_c_vector_int* str);

//Initialization
void c_vector_int_tie_static_array(t_c_vector_int* str, int* arr, int capa);
void c_vector_int_set_data(t_c_vector_int* str, int* arr, int size, int capacity);

//ResizeClear
void c_vector_int_set_size(t_c_vector_int* str, int size);
bool c_vector_int_resize(t_c_vector_int* str, int length);
void c_vector_int_clear(t_c_vector_int* str);

//ArraySize
int c_vector_int_size(t_c_vector_int* str);
int c_vector_int_static_capacity(t_c_vector_int* str);
int c_vector_int_dynamic_capacity(t_c_vector_int* str);
int c_vector_int_capacity(t_c_vector_int* str);
bool c_vector_int_is_empty(t_c_vector_int* str);

//IndexOperators
int* c_vector_int_at(t_c_vector_int* str, int index);
int* c_vector_int_front(t_c_vector_int* str);
int* c_vector_int_back(t_c_vector_int* str);

//PushPopBack
void c_vector_int_push_back(t_c_vector_int* str, int value);
void c_vector_int_pop_back(t_c_vector_int* str);

//CopyData
void c_vector_int_copy_intarray(t_c_vector_int* str, int* arr, int size);
void c_vector_int_copy_c_vector_int(t_c_vector_int* str, t_c_vector_int* arrint);

//Concatenation
void c_vector_int_concatenation_intarray(t_c_vector_int* str, int* arr, int size);
void c_vector_int_concatenation_c_vector_int(t_c_vector_int* str, t_c_vector_int* arrint);

//Search
int* c_vector_int_search_number(t_c_vector_int* str, int number);
int  c_vector_int_search_number_index(t_c_vector_int* str, int number);

//ConvertToInt
void c_vector_int_convert_to_intarray(t_c_vector_int* str, int* arrint);

//is memory check
bool  c_vector_int_is_static_memory_null(t_c_vector_int* str);
bool  c_vector_int_is_dynamic_memory_null(t_c_vector_int* str);
bool  c_vector_int_is_null(t_c_vector_int* str);
bool  c_vector_int_is_used_dynamic_memory(t_c_vector_int* str);

