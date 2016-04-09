#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Properties that are unique to PlanarJoints. Note that the mPlaneType
 member has greater authority than the mTransAxis1 and mTransAxis2 members.
 When copying properties into a PlanarJoint, it will first defer to
 mPlaneType. If mPlaneType is PlaneType::ARBITRARY, then and only then will
 it use mTransAxis1 and mTransAxis2. mRotAxis has no authority; it will
 always be recomputed from mTransAxis1 and mTransAxis2 when copying it into a
 PlanarJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setXYPlaneEv_docstring[] = R"CHIMERA_STRING( Set plane type as XY-plane
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setYZPlaneEv_docstring[] = R"CHIMERA_STRING( Set plane type as YZ-plane
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setZXPlaneEv_docstring[] = R"CHIMERA_STRING( Set plane type as ZX-plane
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6detail27PlanarJointUniqueProperties17setArbitraryPlaneERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring[] = R"CHIMERA_STRING( Set plane type as arbitrary plane with two orthogonal translational axes
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PlanarJointUniqueProperties >("PlanarJointUniqueProperties", _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::detail::PlaneType _planeType) -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(_planeType); }, ::boost::python::default_call_policies(), (::boost::python::arg("_planeType"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(_transAxis1, _transAxis2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"))))
.def("setXYPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setXYPlane(); }, _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setXYPlaneEv_docstring)
.def("setYZPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setYZPlane(); }, _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setYZPlaneEv_docstring)
.def("setZXPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setZXPlane(); }, _ZN4dart8dynamics6detail27PlanarJointUniqueProperties10setZXPlaneEv_docstring)
.def("setArbitraryPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2); }, _ZN4dart8dynamics6detail27PlanarJointUniqueProperties17setArbitraryPlaneERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2")))
.def_readwrite("mPlaneType", &dart::dynamics::detail::PlanarJointUniqueProperties::mPlaneType)
.def_readwrite("mTransAxis1", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis1)
.def_readwrite("mTransAxis2", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis2)
.def_readwrite("mRotAxis", &dart::dynamics::detail::PlanarJointUniqueProperties::mRotAxis)
;
}

/* footer */
