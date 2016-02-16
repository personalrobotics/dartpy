#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6signal6detail18ConnectionBodyBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("signal").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::signal::detail::ConnectionBodyBase >("ConnectionBodyBase", boost::python::no_init)
.def(::boost::python::init<>())
.def("disconnect", static_cast<void (dart::common::signal::detail::ConnectionBodyBase::*)()>(&dart::common::signal::detail::ConnectionBodyBase::disconnect))
.def("isConnected", static_cast<bool (dart::common::signal::detail::ConnectionBodyBase::*)() const>(&dart::common::signal::detail::ConnectionBodyBase::isConnected))
;
}

/* footer */
