#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color6OrangeEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("Orange", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Orange), (::boost::python::arg("alpha")))
;}

/* footer */
