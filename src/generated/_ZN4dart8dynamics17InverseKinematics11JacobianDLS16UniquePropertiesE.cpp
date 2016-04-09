#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("JacobianDLS"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties * { return new dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double damping) -> dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties * { return new dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties(damping); }, ::boost::python::default_call_policies(), (::boost::python::arg("damping"))))
.def_readwrite("mDamping", &dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties::mDamping)
;
}

/* footer */
