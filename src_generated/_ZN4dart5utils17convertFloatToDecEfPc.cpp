#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils17convertFloatToDecEfPc()
{
boost::python::def("convertFloatToDec", static_cast<void (*)(float, char *)>(&dart::utils::convertFloatToDec), (::boost::python::arg("_f"), ::boost::python::arg("_bytes")))
;}

/* footer */
