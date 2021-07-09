#include "c_darray_int.h"

c_darray_int::c_darray_int()
{

}

c_darray_int::~c_darray_int()
{
    if (m_array == NULL)
	return;
    std::cout << "\tError c_darray_int destructor :: m_size != 0" << std::endl;
    m_size = 0;
    free(m_array);
    m_array = NULL;
}
