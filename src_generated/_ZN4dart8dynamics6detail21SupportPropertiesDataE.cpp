#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail21SupportPropertiesDataE()
{
::boost::python::class_<dart::dynamics::detail::SupportPropertiesData >("SupportPropertiesData", boost::python::no_init)
.def(::boost::python::init<>())
.def_readwrite("mGeometry", &dart::dynamics::detail::SupportPropertiesData::mGeometry)
;
}

/* footer */
