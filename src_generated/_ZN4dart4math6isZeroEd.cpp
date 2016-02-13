#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6isZeroEd()
{
boost::python::def("isZero", static_cast<bool (*)(double)>(&dart::math::isZero), (::boost::python::arg("_theta")))
;}

/* footer */
