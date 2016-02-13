#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color4GrayEd()
{
boost::python::def("Gray", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Gray), (::boost::python::arg("alpha")))
;}

/* footer */
