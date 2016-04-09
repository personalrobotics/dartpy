#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10WorldFrameE_docstring[] = R"CHIMERA_STRING( The WorldFrame class is a class that is used internally to create the
 singleton World Frame. This class cannot be instantiated directly: you must
 use the Frame::World() function to access it. Only one World Frame exists
 in any application.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10WorldFrame20getRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Always returns the Identity Transform
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10WorldFrame26getRelativeSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10WorldFrame30getRelativeSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10WorldFrame30getPrimaryRelativeAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10WorldFrame22getPartialAccelerationEv_docstring[] = R"CHIMERA_STRING( Always returns a zero vector
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10WorldFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WorldFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame > >("WorldFrame", _ZN4dart8dynamics10WorldFrameE_docstring, boost::python::no_init)
.def("getRelativeTransform", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10WorldFrame20getRelativeTransformEv_docstring)
.def("getRelativeSpatialVelocity", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10WorldFrame26getRelativeSpatialVelocityEv_docstring)
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10WorldFrame30getRelativeSpatialAccelerationEv_docstring)
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10WorldFrame30getPrimaryRelativeAccelerationEv_docstring)
.def("getPartialAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10WorldFrame22getPartialAccelerationEv_docstring)
;
}

/* footer */
