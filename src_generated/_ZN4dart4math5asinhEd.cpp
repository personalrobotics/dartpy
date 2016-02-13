#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5asinhEd()
{
boost::python::def("asinh", static_cast<double (*)(double)>(&dart::math::asinh), (::boost::python::arg("_X")))
;}

/* footer */
