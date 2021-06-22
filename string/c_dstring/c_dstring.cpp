#include "c_dstring.h"

c_dstring::c_dstring()
{

}
c_dstring::~c_dstring()
{
    delete[] m_data;
}

void c_dstring::constructor_empty(t_c_dstring*, int capasity)
{
    if (!m_data.empty())
	return;
    m_data.resize(capasity);
}
void c_dstring::constructor(t_c_dstring*, char* arr, int size, int capasity)
{
    if (!m_data.empty())
	return;
    m_data.resize(capasity);
    for (ushint index = 0; index < size; ++index)
    {
	m_data[index] = arr[index];
    }
}
void c_dstring::destructor(t_c_dstring*)
{
    m_data.clear();
}

int c_dstring::size(t_c_dstring*)
{
    return(m_data.size());
}
int c_dstring::capacity(t_c_dstring*)
{
    return(m_data.capacity());
}
bool c_dstring::is_empty(t_c_dstring*)
{
    return (m_data.empty());
}
void c_dstring::clear(t_c_dstring*)
{
    return (m_data.clear());
}

char* c_dstring::at(t_c_dstring*, int index)
{
    return (&m_data[index]);
}
char* c_dstring::front(t_c_dstring*)
{
    return (&m_data.front());
}
char* c_dstring::back(t_c_dstring*)
{
    return (&m_data.back());
}

void c_dstring::push_back(t_c_dstring*, char symbol)
{
    return (m_data.push_back(symbol));
}
void c_dstring::pop_back(t_c_dstring*)
{
    return (m_data.pop_back());
}

void c_dstring::copy_chararray(t_c_dstring*, char* arr, int size)
{
    
}
void c_dstring::copy_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}
void c_dstring::concatenation_chararray(t_c_dstring*, char* arr, int size)
{

}
void c_dstring::concatenation_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}

int c_dstring::compare_chararray(t_c_dstring*, char* arr, int size)
{

}
int c_dstring::compare_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}

char* c_dstring::search_char(t_c_dstring*, char symbol)
{

}
char* c_dstring::search_chararray(t_c_dstring*, char* arr, int size)
{

}
char* c_dstring::search_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}

bool c_dstring::is_alpha(t_c_dstring*)
{

}
bool c_dstring::is_digit(t_c_dstring*)
{

}
bool c_dstring::is_alnum(t_c_dstring*)
{

}
bool c_dstring::is_print(t_c_dstring*)
{

}

void c_dstring::to_upper_chararray(t_c_dstring*, char* arr)
{

}
void c_dstring::to_upper_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}
void c_dstring::to_lower_chararray(t_c_dstring*, char* arr)
{

}
void c_dstring::to_lower_c_sstring(t_c_dstring*, t_c_dstring* str)
{

}

void c_dstring::convert_to_int(t_c_dstring*, int* value)
{

}
void c_dstring::convert_to_chararray(t_c_dstring*, char* arr)
{

}