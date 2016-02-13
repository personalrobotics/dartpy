#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringEi()
{
boost::python::def("toString", static_cast<std::string (*)(int)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
