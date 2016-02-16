#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color4BlueEv()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("Blue", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Blue))
;}

/* footer */
