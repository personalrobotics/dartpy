#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint19BallJointConstraintE_docstring[] = R"CHIMERA_STRING( BallJointConstraint represents ball joint constraint between a body and the
 world or between two bodies
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint19BallJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BallJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("BallJointConstraint", _ZN4dart10constraint19BallJointConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body, const Eigen::Vector3d & _jointPos) -> dart::constraint::BallJointConstraint * { return new dart::constraint::BallJointConstraint(_body, _jointPos); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body"), ::boost::python::arg("_jointPos"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body1, dart::dynamics::BodyNode * _body2, const Eigen::Vector3d & _jointPos) -> dart::constraint::BallJointConstraint * { return new dart::constraint::BallJointConstraint(_body1, _body2, _jointPos); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body1"), ::boost::python::arg("_body2"), ::boost::python::arg("_jointPos"))))
;
}

/* footer */
