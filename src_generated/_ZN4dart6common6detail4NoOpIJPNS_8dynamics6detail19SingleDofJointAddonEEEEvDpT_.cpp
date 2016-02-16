#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6detail4NoOpIJPNS_8dynamics6detail19SingleDofJointAddonEEEEvDpT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("NoOp", static_cast<void (*)(dart::dynamics::detail::SingleDofJointAddon *)>(&dart::common::detail::NoOp), (::boost::python::arg("")))
;}

/* footer */
