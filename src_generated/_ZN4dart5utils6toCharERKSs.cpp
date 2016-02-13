#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils6toCharERKSs()
{
boost::python::def("toChar", static_cast<char (*)(const std::string &)>(&dart::utils::toChar), (::boost::python::arg("str")))
;}

/* footer */
