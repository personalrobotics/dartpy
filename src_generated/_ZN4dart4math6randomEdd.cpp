#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6randomEdd()
{
boost::python::def("random", static_cast<double (*)(double, double)>(&dart::math::random), (::boost::python::arg("_min"), ::boost::python::arg("_max")))
;}

/* footer */
