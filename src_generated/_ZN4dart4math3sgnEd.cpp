#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math3sgnEd()
{
boost::python::def("sgn", static_cast<int (*)(double)>(&dart::math::sgn), (::boost::python::arg("_a")))
;}

/* footer */
