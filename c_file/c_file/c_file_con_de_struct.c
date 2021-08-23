#include "c_file.h"

void c_file_constructor(t_c_file* file)
{
    file->m_data = NULL;
}

void c_file_destructor(t_c_file* file)
{
    c_file_close(file);
}