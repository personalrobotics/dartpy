#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("JointPropertyUpdate", [](dart::dynamics::detail::PlanarJointAddon * addon) -> void { return dart::dynamics::detail::JointPropertyUpdate<dart::dynamics::detail::PlanarJointAddon>(addon); }, (::boost::python::arg("addon")));

}

/* footer */
