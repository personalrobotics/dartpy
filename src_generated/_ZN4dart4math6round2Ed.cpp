#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6round2Ed()
{
boost::python::def("round2", static_cast<double (*)(double)>(&dart::math::round2), (::boost::python::arg("_x")))
;}

/* footer */
