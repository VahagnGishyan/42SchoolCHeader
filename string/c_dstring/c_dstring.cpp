#include "c_dstring.h"

c_dstring::c_dstring() : m_array(NULL), m_size(0), m_capacity(0)
{

}
c_dstring::~c_dstring()
{
    if (m_array == NULL)
	return;

    //for test
    std::cout << "ERROR, DYMEMEORY :: m_data != NULL"<< std::endl;
    free(m_array);
}
