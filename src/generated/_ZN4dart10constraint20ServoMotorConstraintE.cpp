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

void _ZN4dart10constraint20ServoMotorConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ServoMotorConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ServoMotorConstraint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Joint * joint) -> dart::constraint::ServoMotorConstraint * { return new dart::constraint::ServoMotorConstraint(joint); }, ::boost::python::default_call_policies(), (::boost::python::arg("joint"))))
.def("setConstraintForceMixing", [](double cfm) -> void { return dart::constraint::ServoMotorConstraint::setConstraintForceMixing(cfm); }, (::boost::python::arg("cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::ServoMotorConstraint::getConstraintForceMixing(); })
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
