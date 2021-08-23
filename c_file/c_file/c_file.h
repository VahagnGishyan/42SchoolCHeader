#pragma once

#include "../../c_string/c_string/c_string.h"
#include "../../header/c_header.h"

#define READ "r"
#define WRITE "w"
#define READWRITE "r+"

typedef struct c_file t_c_file;

struct c_file
{
    FILE* m_data;
};

void c_file_constructor(t_c_file* file);
void c_file_destructor(t_c_file* file);

//  Initalization
bool c_file_open(t_c_file* obj, const char* filename, const char* mode);
void c_file_close(t_c_file* file);

//  get line
int c_file_get_line(t_c_file* file_ptr, char* data);

//  set line
void c_file_set_line(t_c_file* file_ptr, const char* data);

void c_file_print(t_c_file* file);


//#include <stdio.h>
//
//#define length 100
//
//int get_next_line(const FILE* file_ptr, char* data)
//{
//    int index;
//
//    index = -1;
//    while ((data[++index] = getc(file_ptr)) != EOF)
//	if (data[index] == '\n')
//	    break;
//    return index;
//}
//
//main()
//{
//    printf("Start main\n\n");
//
//    FILE* file_ptr;
//    const char	file_name[] = "data.txt";
//    const char* mode = "r";
//
//    fopen_s(&file_ptr, file_name, mode);
//
//    char arr[length];
//    int size = 0;
//    while (size = get_next_line(file_ptr, arr))
//    {
//	arr[size] = '\0';
//	printf("%s\n", arr);
//    }
//
//
//    /*fopen_s(&file_ptr, file_name, mode);
//    if (file_ptr == NULL)
//    {
//	printf("File open = false;\n");
//	return;
//    }
//
//    char symbol;
//    while ((symbol = getc(file_ptr)) != EOF)
//	printf("%c", symbol);
//
//    printf("\n");
//
//    fclose(file_ptr);
//
//    fopen_s(&file_ptr, file_name, mode);
//    if (file_ptr == NULL)
//    {
//	printf("File open = false;\n");
//	return;
//    }
//
//    char data[length];
//
//    int length_element_size = 1;
//    int length_element_count = 29;
//
//    fread(data, length_element_size, length_element_count, file_ptr);
//    data[length_element_count] = '\0';
//    printf("%s\n", data);*/
//
//
//    if (file_ptr != 0)
//	fclose(file_ptr);
//
//    printf("\nEnd main\n");
//}