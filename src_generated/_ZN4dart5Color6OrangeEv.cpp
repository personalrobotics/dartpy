#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color6OrangeEv()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("Orange", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Orange))
;}

/* footer */
