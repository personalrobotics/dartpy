#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5roundEd()
{
boost::python::def("round", static_cast<double (*)(double)>(&dart::math::round), (::boost::python::arg("_x")))
;}

/* footer */
