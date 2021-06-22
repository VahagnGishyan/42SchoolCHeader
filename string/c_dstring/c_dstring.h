#pragma once

#include <vector>
#include "../header/42SchoolCHeader.h"

typedef struct c_dstring t_c_dstring;

struct c_dstring
{
private:
    char*		m_data;
    int			m_size;
    int			m_capasity;
public:

    c_dstring();
    ~c_dstring();

    char* resize(int index);
    void clear();

    void constructor_empty(t_c_dstring* str, int capasity);
    void constructor(t_c_dstring*, char* arr, int size, int capasity);
    void destructor(t_c_dstring*);

    int size(t_c_dstring*);
    int capacity(t_c_dstring*);
    bool is_empty(t_c_dstring*);
    void clear(t_c_dstring*);

    char* at(t_c_dstring*, int index);
    char* front(t_c_dstring*);
    char* back(t_c_dstring*);

    void push_back(t_c_dstring*, char symbol);
    void pop_back(t_c_dstring*);

    //void copy_chararray(t_c_dstring*, char* arr, int size);
    //void copy_c_sstring(t_c_dstring*, t_c_dstring* str);
    //void concatenation_chararray(t_c_dstring*, char* arr, int size);
    //void concatenation_c_sstring(t_c_dstring*, t_c_dstring* str);

    //int compare_chararray(t_c_dstring*, char* arr, int size);
    //int compare_c_sstring(t_c_dstring*, t_c_dstring* str);

    //char* search_char(t_c_dstring*, char symbol);
    //char* search_chararray(t_c_dstring*, char* arr, int size);
    //char* search_c_sstring(t_c_dstring*, t_c_dstring* str);

    //bool is_alpha(t_c_dstring*);
    //bool is_digit(t_c_dstring*);
    //bool is_alnum(t_c_dstring*);
    //bool is_print(t_c_dstring*);

    //void to_upper_chararray(t_c_dstring*, char* arr);
    //void to_upper_c_sstring(t_c_dstring*, t_c_dstring* str);
    //void to_lower_chararray(t_c_dstring*, char* arr);
    //void to_lower_c_sstring(t_c_dstring*, t_c_dstring* str);

    //void convert_to_int(t_c_dstring*, int* value);
    //void convert_to_chararray(t_c_dstring*, char* arr);
};


void c_dstring_initaliaztion(t_c_dstring* str);


//void c_dstring_constructor_empty(t_c_dstring* str, char* arr, int capasity);
//void c_dstring_constructor(t_c_dstring*, char* arr, int size, int capasity);
//void c_dstring_destructor(t_c_dstring*);
//
//int c_dstring_size(t_c_dstring*);
//int c_dstring_capasity(t_c_dstring*);
//bool c_dstring_is_empty(t_c_dstring*);
//void c_dstring_clear(t_c_dstring*);
//
//char* c_dstring_at(t_c_dstring*, int index);
//char* c_dstring_front(t_c_dstring*);
//char* c_dstring_back(t_c_dstring*);
//
//void c_dstring_push_back(t_c_dstring*, char symbol);
//void c_dstring_pop_back(t_c_dstring*);
//
//void c_dstring_copy_chararray(t_c_dstring*, char* arr, int size);
//void c_dstring_copy_c_sstring(t_c_dstring*, t_c_dstring* str);
//void c_dstring_concatenation_chararray(t_c_dstring*, char* arr, int size);
//void c_dstring_concatenation_c_sstring(t_c_dstring*, t_c_dstring* str);
//
//int c_dstring_compare_chararray(t_c_dstring*, char* arr, int size);
//int c_dstring_compare_c_sstring(t_c_dstring*, t_c_dstring* str);
//
//char* c_dstring_search_char(t_c_dstring*, char symbol);
//char* c_dstring_search_chararray(t_c_dstring*, char* arr, int size);
//char* c_dstring_search_c_sstring(t_c_dstring*, t_c_dstring* str);
//
//bool c_dstring_is_alpha(t_c_dstring*);
//bool c_dstring_is_digit(t_c_dstring*);
//bool c_dstring_is_alnum(t_c_dstring*);
//bool c_dstring_is_print(t_c_dstring*);
//
//void c_dstring_to_upper_chararray(t_c_dstring*, char* arr);
//void c_dstring_to_upper_c_sstring(t_c_dstring*, t_c_dstring* str);
//void c_dstring_to_lower_chararray(t_c_dstring*, char* arr);
//void c_dstring_to_lower_c_sstring(t_c_dstring*, t_c_dstring* str);
//
//void c_dstring_convert_to_int(t_c_dstring*, int* value);
//void c_dstring_convert_to_chararray(t_c_dstring*, char* arr);