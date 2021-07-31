#include "c_sarray_string.h"

c_sarray_string::c_sarray_string()
{

}
c_sarray_string::~c_sarray_string()
{
    if (is_empty(this))
	return;
    for (int index = 0; index < this->m_capacity; ++index)
    {
	if (!this->m_data[index].is_empty(m_data))
	{
	    std::cout << "Error, is not empty" << std::endl;
	    this->m_data[index].clear(m_data);
	}
    }
}