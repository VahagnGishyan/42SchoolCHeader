#include "c_vector_int.h"

c_vector_int::c_vector_int()
{

}

c_vector_int::~c_vector_int()
{
    if (m_dynamic_array == NULL)
	return;
    std::cout << "\tError c_vector_int destructor :: m_size != 0" << std::endl;
    m_size = 0;
    free(m_dynamic_array);
    m_dynamic_array = NULL;
}
