#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math3sqrEd()
{
boost::python::def("sqr", static_cast<double (*)(double)>(&dart::math::sqr), (::boost::python::arg("_x")))
;}

/* footer */
