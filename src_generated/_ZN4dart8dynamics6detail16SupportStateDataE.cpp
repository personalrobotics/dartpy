#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail16SupportStateDataE()
{
::boost::python::class_<dart::dynamics::detail::SupportStateData >("SupportStateData", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("active") = false)))
.def_readwrite("mActive", &dart::dynamics::detail::SupportStateData::mActive)
;
}

/* footer */
