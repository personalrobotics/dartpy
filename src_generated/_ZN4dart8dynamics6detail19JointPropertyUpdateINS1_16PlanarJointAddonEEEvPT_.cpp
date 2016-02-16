#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("JointPropertyUpdate", static_cast<void (*)(dart::dynamics::detail::PlanarJointAddon *)>(&dart::dynamics::detail::JointPropertyUpdate), (::boost::python::arg("addon")))
;}

/* footer */
