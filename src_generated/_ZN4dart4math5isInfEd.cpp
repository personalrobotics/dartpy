#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5isInfEd()
{
boost::python::def("isInf", static_cast<bool (*)(double)>(&dart::math::isInf), (::boost::python::arg("_v")))
;}

/* footer */
