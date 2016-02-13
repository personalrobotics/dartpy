#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail21SupportPropertiesDataE()
{
::boost::python::class_<dart::dynamics::detail::SupportPropertiesData >("SupportPropertiesData", boost::python::no_init)
.def(::boost::python::init<>())
.def_readwrite("mGeometry", &dart::dynamics::detail::SupportPropertiesData::mGeometry)
;
}

/* footer */
