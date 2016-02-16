#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10DetachableE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Detachable, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("Detachable", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Frame *, const std::string &, bool>((::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_quiet"))))
.def("setParentFrame", static_cast<void (dart::dynamics::Detachable::*)(dart::dynamics::Frame *)>(&dart::dynamics::Detachable::setParentFrame), (::boost::python::arg("_newParentFrame")))
;
}

/* footer */
