#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE_docstring[] = R"CHIMERA_STRING( TemplatedJacobianNode provides a curiously recurring template pattern
 implementation of the various JacobianNode non-caching functions. These
 functions are easily distinguished because they return by value instead of
 returning by const reference.
 This style of implementation allows BodyNode and EndEffector to share the
 implementations of these various auxiliary Jacobian functions without any
 penalty from dynamic overload resolution.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobian() that lets you specify a coordinate Frame to
 express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset within the Frame of
 this JacobianNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobian(const Eigen::Vector3d
&
) that lets you specify a
 coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE16getWorldJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset in this JacobianNode.
 The _offset is expected in coordinates of this BodyNode Frame. The
 Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the linear Jacobian targeting the origin of this BodyNode. You can
 specify a coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset within the Frame of
 this BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE18getAngularJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the angular Jacobian targeting the origin of this BodyNode. You can
 specify a coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianSpatialDeriv() that can return the Jacobian in
 coordinates of any Frame.
 NOTE: This Jacobian Derivative is only for use with spatial vectors. If
 you are using classical linear and angular vectors, then use
 getJacobianClassicDeriv(), getLinearJacobianDeriv(), or
 getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 an offset in the Frame of this BodyNode. The Jacobian is expressed in
 this BodyNode's coordinate Frame.
 NOTE: This Jacobian Derivative is only for use with spatial vectors. If
 you are using classic linear and angular vectors, then use
 getJacobianClassicDeriv(), getLinearJacobianDeriv(), or
 getAngularJacobianDeriv() instead.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianSpatialDeriv(const Eigen::Vector3d
&
) that allows
 an arbitrary coordinate Frame to be specified.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianClassicDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianClassicDeriv() that can return the Jacobian in
 coordinates of any Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianClassicDeriv() that can compute the Jacobian for
 an offset within the Frame of this BodyNode. The offset must be expressed
 in the coordinates of this BodyNode Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the linear Jacobian (classical) time derivative, in terms of any
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear vectors. If you are using spatial vectors, use
 getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getLinearJacobianDeriv() that can compute the Jacobian for
 an offset within the Frame of this BodyNode. The offset must be expressed
 in coordinates of this BodyNode Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear vectors. If you are using spatial vectors, use
 getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getAngularJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the angular Jacobian time derivative, in terms of any coordinate
 Frame.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>, dart::dynamics::BodyNode>, ::boost::python::bases<dart::dynamics::JacobianNode > >("TemplatedJacobianEndEffector", _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE_docstring, boost::python::no_init)
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobian(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getWorldJacobian(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE16getWorldJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self) -> dart::math::LinearJacobian { return self->getLinearJacobian(); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianEPKNS0_5FrameE_docstring)
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self) -> dart::math::AngularJacobian { return self->getAngularJacobian(); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE18getAngularJacobianEPKNS0_5FrameE_docstring)
.def("getAngularJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE18getAngularJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianClassicDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivEPKNS0_5FrameE_docstring)
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getAngularJacobianDerivEPKNS0_5FrameE_docstring)
.def("getAngularJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEE23getAngularJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
