#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common10ConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Connection >("Connection", boost::python::no_init)
.def(::boost::python::init<>())
.def("isConnected", static_cast<bool (dart::common::Connection::*)() const>(&dart::common::Connection::isConnected))
.def("disconnect", static_cast<void (dart::common::Connection::*)() const>(&dart::common::Connection::disconnect))
;
}

/* footer */
