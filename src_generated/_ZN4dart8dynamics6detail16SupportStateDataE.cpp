#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail16SupportStateDataE()
{
::boost::python::class_<dart::dynamics::detail::SupportStateData >("SupportStateData", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("active") = false)))
.def_readwrite("mActive", &dart::dynamics::detail::SupportStateData::mActive)
;
}

/* footer */
