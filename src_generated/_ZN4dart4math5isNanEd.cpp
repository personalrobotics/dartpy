#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5isNanEd()
{
boost::python::def("isNan", static_cast<bool (*)(double)>(&dart::math::isNan), (::boost::python::arg("_v")))
;}

/* footer */
