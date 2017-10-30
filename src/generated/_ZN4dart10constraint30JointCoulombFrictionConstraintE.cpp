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

void _ZN4dart10constraint30JointCoulombFrictionConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::JointCoulombFrictionConstraint, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointCoulombFrictionConstraint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Joint * _joint) -> dart::constraint::JointCoulombFrictionConstraint * { return new dart::constraint::JointCoulombFrictionConstraint(_joint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_joint"))))
.def("setConstraintForceMixing", [](double _cfm) -> void { return dart::constraint::JointCoulombFrictionConstraint::setConstraintForceMixing(_cfm); }, (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::JointCoulombFrictionConstraint::getConstraintForceMixing(); })
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
