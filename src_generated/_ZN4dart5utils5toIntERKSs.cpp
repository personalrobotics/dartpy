#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils5toIntERKSs()
{
boost::python::def("toInt", static_cast<int (*)(const std::string &)>(&dart::utils::toInt), (::boost::python::arg("str")))
;}

/* footer */
