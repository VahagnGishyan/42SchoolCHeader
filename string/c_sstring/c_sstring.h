#pragma once
#include "../header/42SchoolCHeader.h"
#include "../libft/Libft.h"

typedef struct c_sstring t_c_sstring;

struct c_sstring
{
    char*   m_array;
    int	    m_size;
    int	    m_capacity;

    void (*constructor_empty)(t_c_sstring* str, char* arr, int capasity);
    void (*constructor)(t_c_sstring*, char* arr, int size, int capasity);
    void (*destructor)(t_c_sstring*);

    int (*size)(t_c_sstring*);
    int (*capacity)(t_c_sstring*);
    bool (*is_empty)(t_c_sstring*);
    void (*clear)(t_c_sstring*);

    char* (*at)(t_c_sstring*, int index);
    char* (*front)(t_c_sstring*);
    char* (*back)(t_c_sstring*);

    void (*push_back)(t_c_sstring*, char symbol);
    void (*pop_back)(t_c_sstring*);

    void (*copy_chararray)(t_c_sstring*, char* arr, int size);
    void (*copy_c_sstring)(t_c_sstring*, t_c_sstring* str);
    void (*concatenation_chararray)(t_c_sstring*, char* arr, int size);
    void (*concatenation_c_sstring)(t_c_sstring*, t_c_sstring* str);

    int (*compare_chararray)(t_c_sstring*, char* arr, int size);
    int (*compare_c_sstring)(t_c_sstring*, t_c_sstring* str);

    char* (*search_char)(t_c_sstring*, char symbol);
    char* (*search_chararray)(t_c_sstring*, char* arr, int size);
    char* (*search_c_sstring)(t_c_sstring*, t_c_sstring* str);

    bool (*is_alpha)(t_c_sstring*);
    bool (*is_digit)(t_c_sstring*);
    bool (*is_alnum)(t_c_sstring*);
    bool (*is_print)(t_c_sstring*);

    void (*to_upper_chararray)(t_c_sstring*, char* arr);
    void (*to_upper_c_sstring)(t_c_sstring*, t_c_sstring* str);
    void (*to_lower_chararray)(t_c_sstring*, char* arr);
    void (*to_lower_c_sstring)(t_c_sstring*, t_c_sstring* str);

    void (*convert_to_int)(t_c_sstring*, int* value);
    void (*convert_to_chararray)(t_c_sstring*, char* arr);
};

void c_sstring_initaliaztion(t_c_sstring* str);

void c_sstring_constructor_empty(t_c_sstring* str, char* arr, int capasity);
void c_sstring_constructor(t_c_sstring*, char* arr, int size, int capasity);
void c_sstring_destructor(t_c_sstring*);

int c_sstring_size(t_c_sstring*);
int c_sstring_capacity(t_c_sstring*);
bool c_sstring_is_empty(t_c_sstring*);
void c_sstring_clear(t_c_sstring*);

char* c_sstring_at(t_c_sstring*, int index);
char* c_sstring_front(t_c_sstring*);
char* c_sstring_back(t_c_sstring*);

void c_sstring_push_back(t_c_sstring*, char symbol);
void c_sstring_pop_back(t_c_sstring*);

void c_sstring_copy_chararray(t_c_sstring*, char* arr, int size);
void c_sstring_copy_c_sstring(t_c_sstring*, t_c_sstring* str);
void c_sstring_concatenation_chararray(t_c_sstring*, char* arr, int size);
void c_sstring_concatenation_c_sstring(t_c_sstring*, t_c_sstring* str);

int c_sstring_compare_chararray(t_c_sstring*, char* arr, int size);
int c_sstring_compare_c_sstring(t_c_sstring*, t_c_sstring* str);

char* c_sstring_search_char(t_c_sstring*, char symbol);
char* c_sstring_search_chararray(t_c_sstring*, char* arr, int size);
char* c_sstring_search_c_sstring(t_c_sstring*, t_c_sstring* str);

bool c_sstring_is_alpha(t_c_sstring*);
bool c_sstring_is_digit(t_c_sstring*);
bool c_sstring_is_alnum(t_c_sstring*);
bool c_sstring_is_print(t_c_sstring*);

void c_sstring_to_upper_chararray(t_c_sstring*, char* arr);
void c_sstring_to_upper_c_sstring(t_c_sstring*, t_c_sstring* str);
void c_sstring_to_lower_chararray(t_c_sstring*, char* arr);
void c_sstring_to_lower_c_sstring(t_c_sstring*, t_c_sstring* str);

void c_sstring_convert_to_int(t_c_sstring*, int* value);
void c_sstring_convert_to_chararray(t_c_sstring*, char* arr);