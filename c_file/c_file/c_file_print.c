#include "c_file.h"

void c_file_print(t_c_file* file)
{
    char arr[100];
    int size = 0;
    while (size = c_file_get_line(file, arr))
    {
	arr[size] = '\0';
	printf("%s\n", arr);
    }
}

