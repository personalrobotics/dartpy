#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color4BlueEd()
{
boost::python::def("Blue", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Blue), (::boost::python::arg("alpha")))
;}

/* footer */
