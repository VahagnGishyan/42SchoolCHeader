#pragma once
#include "../../c_string/c_string/c_string.h"

/*C++ fundamental types*/

/*int*/
int	int_max(int valueA, int valueB);
int	int_min(int valueA, int valueB);

bool	int_is_positive(int value);
bool	int_is_negative(int value);
bool	int_is_zero(int value);

/*C++ fundamental types*/
/*int array*/
void int_array_set_default_number(int* arr_main, int size, int number);
void int_array_copy_int_array(int* arr_main, int* arr_other, int size);


/*c string array*/
void c_string_array_constructor(t_c_string* strs, int size);
void c_string_array_destructor(t_c_string* strs, int size);

void c_string_array_set_char_array(t_c_string* strs, int strs_size, const char* arr, int arr_size);
void c_string_array_set_c_string(t_c_string* strs, int strs_size, const t_c_string *str);
