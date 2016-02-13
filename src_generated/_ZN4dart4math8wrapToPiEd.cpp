#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math8wrapToPiEd()
{
boost::python::def("wrapToPi", static_cast<double (*)(double)>(&dart::math::wrapToPi), (::boost::python::arg("angle")))
;}

/* footer */
