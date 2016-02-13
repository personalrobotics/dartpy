#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7isEqualEdd()
{
boost::python::def("isEqual", static_cast<bool (*)(double, double)>(&dart::math::isEqual), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
;}

/* footer */
