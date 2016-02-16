#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail13SupportUpdateEPNS0_7SupportE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("SupportUpdate", static_cast<void (*)(dart::dynamics::Support *)>(&dart::dynamics::detail::SupportUpdate), (::boost::python::arg("support")))
;}

/* footer */
