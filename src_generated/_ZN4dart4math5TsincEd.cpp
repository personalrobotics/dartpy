#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5TsincEd()
{
boost::python::def("Tsinc", static_cast<double (*)(double)>(&dart::math::Tsinc), (::boost::python::arg("_theta")))
;}

/* footer */
