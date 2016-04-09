#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10FixedFrameE_docstring[] = R"CHIMERA_STRING( The FixedFrame class represents a Frame with zero relative velocity and
 zero relative acceleration. It does not move within its parent Frame after
 its relative transform is set. However, classes that inherit the FixedFrame
 class may alter its relative transform or change what its parent Frame is.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10FixedFrame20getRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to its parent Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10FixedFrame26getRelativeSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10FixedFrame30getRelativeSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10FixedFrame30getPrimaryRelativeAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10FixedFrame22getPartialAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10FixedFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FixedFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame > >("FixedFrame", _ZN4dart8dynamics10FixedFrameE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name) -> dart::dynamics::FixedFrame * { return new dart::dynamics::FixedFrame(_refFrame, _name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name, const Eigen::Isometry3d & _relativeTransform) -> dart::dynamics::FixedFrame * { return new dart::dynamics::FixedFrame(_refFrame, _name, _relativeTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_relativeTransform"))))
.def("getRelativeTransform", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10FixedFrame20getRelativeTransformEv_docstring)
.def("getRelativeSpatialVelocity", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10FixedFrame26getRelativeSpatialVelocityEv_docstring)
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10FixedFrame30getRelativeSpatialAccelerationEv_docstring)
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10FixedFrame30getPrimaryRelativeAccelerationEv_docstring)
.def("getPartialAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10FixedFrame22getPartialAccelerationEv_docstring)
;
}

/* footer */
