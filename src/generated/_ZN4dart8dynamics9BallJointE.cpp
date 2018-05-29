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

void _ZN4dart8dynamics9BallJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BallJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::GenericJoint<dart::math::SO3Space> > >("BallJoint", boost::python::no_init)
.def("getType", [](const dart::dynamics::BallJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::BallJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("getBallJointProperties", [](const dart::dynamics::BallJoint *self) -> dart::dynamics::BallJoint::Properties { return self->getBallJointProperties(); })
.def("getRelativeJacobianStatic", [](const dart::dynamics::BallJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::BallJoint *self, const Eigen::Vector3d & _q2, const Eigen::Vector3d & _q1) -> Eigen::Vector3d { return self->getPositionDifferencesStatic(_q2, _q1); }, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::BallJoint::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("convertToTransform", [](const Eigen::Vector3d & _positions) -> Eigen::Isometry3d { return dart::dynamics::BallJoint::convertToTransform(_positions); }, (::boost::python::arg("_positions")))
.def("convertToRotation", [](const Eigen::Vector3d & _positions) -> Eigen::Matrix3d { return dart::dynamics::BallJoint::convertToRotation(_positions); }, (::boost::python::arg("_positions")))
.staticmethod("convertToRotation")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
;
}

/* footer */
