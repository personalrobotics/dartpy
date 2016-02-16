#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common16ScopedConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ScopedConnection, ::boost::noncopyable, ::boost::python::bases<dart::common::Connection > >("ScopedConnection", boost::python::no_init)
.def(::boost::python::init<const dart::common::Connection &>((::boost::python::arg("_other"))))
;
}

/* footer */
