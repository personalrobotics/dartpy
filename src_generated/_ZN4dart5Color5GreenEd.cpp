#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5GreenEd()
{
boost::python::def("Green", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Green), (::boost::python::arg("alpha")))
;}

/* footer */
