#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7acosechEd()
{
boost::python::def("acosech", static_cast<double (*)(double)>(&dart::math::acosech), (::boost::python::arg("_X")))
;}

/* footer */
