#include "c_file.h"

bool c_file_open(t_c_file* file, const char* filename, const char* mode)
{
    if (file->m_data != NULL)
	c_file_close(file);
    fopen_s(&file->m_data, filename, mode);
    return (file->m_data != NULL);
}

void c_file_close(t_c_file* file)
{
    if (file->m_data != NULL)
	fclose(file->m_data);
    file->m_data = NULL;
}