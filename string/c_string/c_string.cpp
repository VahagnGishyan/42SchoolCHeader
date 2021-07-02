#include "c_string.h"

c_string::c_string()
{

}
c_string::~c_string()
{
    if (m_static_array.is_null(&m_static_array) || m_dynamic_array.is_null(&m_dynamic_array))
	return;

    //for test
    std::cout << "ERROR, DYMEMEORY :: m_data is not empty" << std::endl;

    c_sstring_destructor(&m_static_array);
    c_dstring_destructor(&m_dynamic_array);
}

//c_dstring::~c_dstring()
//{
//    if (m_array == NULL)
//	return;
//
//    //for test
//    std::cout << "ERROR, DYMEMEORY :: m_data != NULL" << std::endl;
//    free(m_array);
//}

