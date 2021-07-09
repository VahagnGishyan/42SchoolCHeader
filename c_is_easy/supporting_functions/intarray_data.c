#include "supporting_functions.h"

void intarray_set_default_number(int* arr_main, int size, int number)
{
    int index;

    if (size <= 0)
	return;
    index = -1;
    while (++index < size)
	arr_main[index] = number;
}

void intarray_copy_intarray(int* arr_main, int* arr_other, int size)
{
    int index;

    if (size <= 0)
	return;
    index = -1;
    while (++index < size)
	arr_main[index] = arr_other[index];
}