#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5asechEd()
{
boost::python::def("asech", static_cast<double (*)(double)>(&dart::math::asech), (::boost::python::arg("_X")))
;}

/* footer */
