#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail16SupportStateDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SupportStateData >("SupportStateData", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("active") = false)))
.def_readwrite("mActive", &dart::dynamics::detail::SupportStateData::mActive)
;
}

/* footer */
