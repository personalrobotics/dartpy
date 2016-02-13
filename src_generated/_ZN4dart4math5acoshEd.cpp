#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5acoshEd()
{
boost::python::def("acosh", static_cast<double (*)(double)>(&dart::math::acosh), (::boost::python::arg("_X")))
;}

/* footer */
