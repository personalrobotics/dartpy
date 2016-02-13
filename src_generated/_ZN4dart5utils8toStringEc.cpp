#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringEc()
{
boost::python::def("toString", static_cast<std::string (*)(char)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
