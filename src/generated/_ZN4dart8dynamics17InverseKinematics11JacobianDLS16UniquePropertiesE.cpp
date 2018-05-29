#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
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