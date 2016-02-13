#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color7FuschiaEd()
{
boost::python::def("Fuschia", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Fuschia), (::boost::python::arg("alpha")))
;}

/* footer */
