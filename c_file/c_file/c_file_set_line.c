#include "c_file.h"

void c_file_set_line(t_c_file* file, const char* data)
{
    int length = ft_strlen(data);
    fwrite(data, 1, length, file->m_data);
}