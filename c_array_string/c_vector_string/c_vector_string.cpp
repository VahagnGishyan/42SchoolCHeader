#include "c_vector_string.h"

c_vector_string::c_vector_string()
{

}
c_vector_string::~c_vector_string()
{
    if (is_empty(this))
	return;
    this->clear(this);
    if (is_empty(this))
	return;
    for (int index = 0; index < this->m_dynamic_capacity; ++index)
    {
	c_string_clear(&this->m_dynamic_data[index]);
    }
    c_string_array_destructor(this->m_dynamic_data, this->m_dynamic_capacity);
}