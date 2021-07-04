#include "c_sarray_int.h"

c_sarray_int::c_sarray_int()
{

}

c_sarray_int::~c_sarray_int()
{
    if (m_size == 0)
	return;
    std::cout << "\tError c_sarray_int destructor :: m_size != 0" << std::endl;
    m_size = 0;
    //free
}
