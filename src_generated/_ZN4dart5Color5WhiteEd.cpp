#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5WhiteEd()
{
boost::python::def("White", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::White), (::boost::python::arg("alpha")))
;}

/* footer */
