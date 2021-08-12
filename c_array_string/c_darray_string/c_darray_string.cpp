#include "c_darray_string.h"

c_darray_string::c_darray_string()
{

}
c_darray_string::~c_darray_string()
{
    if (is_empty(this))
	return;
    this->clear(this);
    if (is_empty(this))
	return;
    for (int index = 0; index < this->m_capacity; ++index)
    {
	c_string_clear(&this->m_data[index]);
    }
    c_string_destructor(this->m_data);
}