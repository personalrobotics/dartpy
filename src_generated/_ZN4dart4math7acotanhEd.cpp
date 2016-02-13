#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7acotanhEd()
{
boost::python::def("acotanh", static_cast<double (*)(double)>(&dart::math::acotanh), (::boost::python::arg("_X")))
;}

/* footer */
