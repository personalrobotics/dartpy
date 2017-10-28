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

void _ZN4dart10constraint19WeldJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::WeldJointConstraint, ::boost::python::bases<dart::constraint::JointConstraint > >("WeldJointConstraint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body) -> dart::constraint::WeldJointConstraint * { return new dart::constraint::WeldJointConstraint(_body); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body1, dart::dynamics::BodyNode * _body2) -> dart::constraint::WeldJointConstraint * { return new dart::constraint::WeldJointConstraint(_body1, _body2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body1"), ::boost::python::arg("_body2"))))
.def("setRelativeTransform", [](dart::constraint::WeldJointConstraint *self, const Eigen::Isometry3d & _tf) -> void { return self->setRelativeTransform(_tf); }, (::boost::python::arg("_tf")))
.def("getRelativeTransform", [](const dart::constraint::WeldJointConstraint *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
