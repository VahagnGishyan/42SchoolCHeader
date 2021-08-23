#include "c_file.h"

int c_file_get_line(t_c_file* file, char* data)
{
    int index;

    index = -1;
    while ((data[++index] = getc(file->m_data)) != EOF)
	if (data[index] == '\n')
	    break;
    return index;
}

