#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils6toUIntERKSs()
{
boost::python::def("toUInt", static_cast<unsigned int (*)(const std::string &)>(&dart::utils::toUInt), (::boost::python::arg("str")))
;}

/* footer */
