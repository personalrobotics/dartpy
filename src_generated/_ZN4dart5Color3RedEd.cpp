#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color3RedEd()
{
boost::python::def("Red", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Red), (::boost::python::arg("alpha")))
;}

/* footer */
