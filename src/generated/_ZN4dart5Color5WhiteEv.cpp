#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5WhiteEv()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("White", []() -> Eigen::Vector3d { return dart::Color::White(); });

}

/* footer */
