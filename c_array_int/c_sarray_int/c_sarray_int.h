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

class  c_sarray_int
{
private:
    int	    m_size;
    int	    m_capacity;
    int*    m_array;

public:

    c_sarray_int();
    ~c_sarray_int();

    void tie_static_array(int* arr, int capa);
    void set_data(int* arr, int size, int capacity);

    bool resize(int length);
    void clear();

    int size();
    int capacity();
    bool is_empty();

    int* at(int index);
    int* front();
    int* back();

    void push_back(int value);
    void pop_back();

    void copy_intarray(int* arr, int size);
    void copy_c_sarray_int(c_sarray_int* arrint);

    void concatenation_intarray(int* arr, int size);
    void concatenation_c_sarray_int(c_sarray_int* arrint);

    int* search_number(int number);
    int  search_number_index(int number);

    void convert_to_intarray(int* arrint);
};

