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

void _ZN4dart10constraint19BallJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BallJointConstraint, ::boost::python::bases<dart::constraint::JointConstraint > >("BallJointConstraint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body, const Eigen::Vector3d & _jointPos) -> dart::constraint::BallJointConstraint * { return new dart::constraint::BallJointConstraint(_body, _jointPos); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body"), ::boost::python::arg("_jointPos"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body1, dart::dynamics::BodyNode * _body2, const Eigen::Vector3d & _jointPos) -> dart::constraint::BallJointConstraint * { return new dart::constraint::BallJointConstraint(_body1, _body2, _jointPos); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body1"), ::boost::python::arg("_body2"), ::boost::python::arg("_jointPos"))))
;
}

/* footer */
