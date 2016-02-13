#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color6RandomEd()
{
boost::python::def("Random", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Random), (::boost::python::arg("alpha")))
;}

/* footer */
