#pragma once

#include "../header/cpp_header.h"

#ifdef __cplusplus
extern "C" 
{
    #endif

    #include "../header/42SchoolCHeader.h"

    #ifdef __cplusplus
}
#endif

typedef struct c_dstring t_c_dstring;

struct c_dstring
{
    char*		m_array;
    int			m_size;
    int			m_capacity;

    c_dstring();
    ~c_dstring();

    char* (*get_array)(t_c_dstring* str);
    void  (*set_chararray)(t_c_dstring* str, char* arr, int length);
    void  (*set_c_dstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    bool  (*resize)(t_c_dstring* str, int length);
    void  (*clear)(t_c_dstring* str);

    int   (*size)(t_c_dstring* str);
    int   (*capacity)(t_c_dstring* str);
    bool  (*is_empty)(t_c_dstring* str);
    bool  (*is_null)(t_c_dstring* str);

    char* (*at)(t_c_dstring* str, int index);
    char* (*front)(t_c_dstring* str);
    char* (*back)(t_c_dstring* str);

    void  (*push_back)(t_c_dstring* str, char symbol);
    void  (*pop_back)(t_c_dstring* str);

    void  (*copy_chararray)(t_c_dstring* str, char* arr, int size);
    void  (*copy_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    void  (*concatenation_chararray)(t_c_dstring* str, char* arr, int size);
    void  (*concatenation_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    int   (*compare_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    char* (*search_char)(t_c_dstring* str, char symbol);
    char* (*search_chararray)(t_c_dstring* str, char* arr, int size);
    char* (*search_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    bool  (*is_alpha)(t_c_dstring* str);
    bool  (*is_digit)(t_c_dstring* str);
    bool  (*is_alnum)(t_c_dstring*str);
    bool  (*is_print)(t_c_dstring*str);

    void  (*to_upper_chararray)(t_c_dstring* str, char* arr);
    void  (*to_upper_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);
    void  (*to_lower_chararray)(t_c_dstring* str, char* arr);
    void  (*to_lower_c_sstring)(t_c_dstring* str_main, t_c_dstring* str_other);

    void  (*convert_to_int)(t_c_dstring*, int* value);
    void  (*convert_to_chararray)(t_c_dstring*, char* arr);
};



void c_dstring_constructor(t_c_dstring* str);
void c_dstring_destructor(t_c_dstring* str);

char* get_array(t_c_dstring* str);
void  set_chararray(t_c_dstring* str, char* arr, int length);
void  set_c_dstring(t_c_dstring* str_main, t_c_dstring* str_other);

bool  c_dstring_resize(t_c_dstring* str, int length);
void  c_dstring_clear(t_c_dstring* str);


int   c_dstring_size(t_c_dstring* str);
int   c_dstring_capacity(t_c_dstring* str);
bool  c_dstring_is_empty(t_c_dstring* str);
bool  c_dstring_is_null(t_c_dstring* str);

char* c_dstring_at(t_c_dstring* str, int index);
char* c_dstring_front(t_c_dstring* str);
char* c_dstring_back(t_c_dstring* str);

void  c_dstring_push_back(t_c_dstring* str, char symbol);
void  c_dstring_pop_back(t_c_dstring* str);

void  c_dstring_copy_chararray(t_c_dstring* str, char* arr, int size);
void  c_dstring_copy_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);

void  c_dstring_concatenation_chararray(t_c_dstring* str, char* arr, int size);
void  c_dstring_concatenation_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);

int   c_dstring_compare_chararray(t_c_dstring* str, char* arr, int size);
int   c_dstring_compare_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);

char* c_dstring_search_char(t_c_dstring* str, char symbol);
char* c_dstring_search_chararray(t_c_dstring* str, char* arr, int size);
char* c_dstring_search_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);

bool  c_dstring_is_alpha(t_c_dstring* str);
bool  c_dstring_is_digit(t_c_dstring* str);
bool  c_dstring_is_alnum(t_c_dstring* str);
bool  c_dstring_is_print(t_c_dstring* str);

void  c_dstring_to_upper_chararray(t_c_dstring* str, char* arr);
void  c_dstring_to_upper_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);
void  c_dstring_to_lower_chararray(t_c_dstring* str, char* arr);
void  c_dstring_to_lower_c_sstring(t_c_dstring* str_main, t_c_dstring* str_other);

void  c_dstring_convert_to_int(t_c_dstring*, int* value);
void  c_dstring_convert_to_chararray(t_c_dstring*, char* arr);