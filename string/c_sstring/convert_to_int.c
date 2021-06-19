#include "c_sstring.h"

void c_sstring_convert_to_int(t_c_sstring* str, int* value)
{
    //*value = std::stoi(str->m_array);
    *value = ft_atoi(str->m_array);
}