#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics7Inertia12setParameterENS1_5ParamEd_docstring[] = R"CHIMERA_STRING( Set an inertial parameter
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia12getParameterENS1_5ParamE_docstring[] = R"CHIMERA_STRING( Get an inertial parameter
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia7setMassEd_docstring[] = R"CHIMERA_STRING( Set the mass
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia7getMassEv_docstring[] = R"CHIMERA_STRING( Get the mass
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia11setLocalCOMERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the center of mass with respect to the Body-fixed frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia11getLocalCOMEv_docstring[] = R"CHIMERA_STRING( Get the center of mass with respect to the Body-fixed frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia9setMomentERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring[] = R"CHIMERA_STRING( Set the moment of inertia (about the center of mass). Note that only the
 top-right corner of the matrix will be used, because a well-formed inertia
 matrix is always symmetric.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia9setMomentEdddddd_docstring[] = R"CHIMERA_STRING( Set the moment of inertia (about the center of mass)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia9getMomentEv_docstring[] = R"CHIMERA_STRING( Get the moment of inertia
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia16setSpatialTensorERKN5Eigen6MatrixIdLi6ELi6ELi0ELi6ELi6EEE_docstring[] = R"CHIMERA_STRING( Set the spatial tensor
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia16getSpatialTensorEv_docstring[] = R"CHIMERA_STRING( Get the spatial inertia tensor
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia12verifyMomentERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEEbd_docstring[] = R"CHIMERA_STRING( Returns true iff _moment is a physically valid moment of inertia
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Inertia19verifySpatialTensorERKN5Eigen6MatrixIdLi6ELi6ELi0ELi6ELi6EEEbd_docstring[] = R"CHIMERA_STRING( Returns true iff _spatial is a physically valid spatial inertia tensor
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Inertia6verifyEbd_docstring[] = R"CHIMERA_STRING( Returns true iff this Inertia object is physically valid
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics7InertiaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Inertia >("Inertia", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double _mass) -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(_mass); }, ::boost::python::default_call_policies(), (::boost::python::arg("_mass"))))
.def("__init__", ::boost::python::make_constructor([](double _mass, const Eigen::Vector3d & _com) -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(_mass, _com); }, ::boost::python::default_call_policies(), (::boost::python::arg("_mass"), ::boost::python::arg("_com"))))
.def("__init__", ::boost::python::make_constructor([](double _mass, const Eigen::Vector3d & _com, const Eigen::Matrix3d & _momentOfInertia) -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(_mass, _com, _momentOfInertia); }, ::boost::python::default_call_policies(), (::boost::python::arg("_mass"), ::boost::python::arg("_com"), ::boost::python::arg("_momentOfInertia"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Matrix6d & _spatialInertiaTensor) -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(_spatialInertiaTensor); }, ::boost::python::default_call_policies(), (::boost::python::arg("_spatialInertiaTensor"))))
.def("__init__", ::boost::python::make_constructor([](double _mass, double _comX, double _comY, double _comZ, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz, double _Iyz) -> dart::dynamics::Inertia * { return new dart::dynamics::Inertia(_mass, _comX, _comY, _comZ, _Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, ::boost::python::default_call_policies(), (::boost::python::arg("_mass"), ::boost::python::arg("_comX"), ::boost::python::arg("_comY"), ::boost::python::arg("_comZ"), ::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz"))))
.def("setParameter", [](dart::dynamics::Inertia *self, dart::dynamics::Inertia::Param _param, double _value) -> void { return self->setParameter(_param, _value); }, _ZN4dart8dynamics7Inertia12setParameterENS1_5ParamEd_docstring, (::boost::python::arg("_param"), ::boost::python::arg("_value")))
.def("getParameter", [](const dart::dynamics::Inertia *self, dart::dynamics::Inertia::Param _param) -> double { return self->getParameter(_param); }, _ZNK4dart8dynamics7Inertia12getParameterENS1_5ParamE_docstring, (::boost::python::arg("_param")))
.def("setMass", [](dart::dynamics::Inertia *self, double _mass) -> void { return self->setMass(_mass); }, _ZN4dart8dynamics7Inertia7setMassEd_docstring, (::boost::python::arg("_mass")))
.def("getMass", [](const dart::dynamics::Inertia *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics7Inertia7getMassEv_docstring)
.def("setLocalCOM", [](dart::dynamics::Inertia *self, const Eigen::Vector3d & _com) -> void { return self->setLocalCOM(_com); }, _ZN4dart8dynamics7Inertia11setLocalCOMERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_com")))
.def("getLocalCOM", [](const dart::dynamics::Inertia *self) -> const Eigen::Vector3d & { return self->getLocalCOM(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics7Inertia11getLocalCOMEv_docstring)
.def("setMoment", [](dart::dynamics::Inertia *self, const Eigen::Matrix3d & _moment) -> void { return self->setMoment(_moment); }, _ZN4dart8dynamics7Inertia9setMomentERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring, (::boost::python::arg("_moment")))
.def("setMoment", [](dart::dynamics::Inertia *self, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz, double _Iyz) -> void { return self->setMoment(_Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, _ZN4dart8dynamics7Inertia9setMomentEdddddd_docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getMoment", [](const dart::dynamics::Inertia *self) -> Eigen::Matrix3d { return self->getMoment(); }, _ZNK4dart8dynamics7Inertia9getMomentEv_docstring)
.def("setSpatialTensor", [](dart::dynamics::Inertia *self, const Eigen::Matrix6d & _spatial) -> void { return self->setSpatialTensor(_spatial); }, _ZN4dart8dynamics7Inertia16setSpatialTensorERKN5Eigen6MatrixIdLi6ELi6ELi0ELi6ELi6EEE_docstring, (::boost::python::arg("_spatial")))
.def("getSpatialTensor", [](const dart::dynamics::Inertia *self) -> const Eigen::Matrix6d & { return self->getSpatialTensor(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics7Inertia16getSpatialTensorEv_docstring)
.def("verify", [](const dart::dynamics::Inertia *self) -> bool { return self->verify(); }, _ZNK4dart8dynamics7Inertia6verifyEbd_docstring)
.def("verify", [](const dart::dynamics::Inertia *self, bool _printWarnings) -> bool { return self->verify(_printWarnings); }, _ZNK4dart8dynamics7Inertia6verifyEbd_docstring, (::boost::python::arg("_printWarnings")))
.def("verify", [](const dart::dynamics::Inertia *self, bool _printWarnings, double _tolerance) -> bool { return self->verify(_printWarnings, _tolerance); }, _ZNK4dart8dynamics7Inertia6verifyEbd_docstring, (::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.def("verifyMoment", [](const Eigen::Matrix3d & _moment) -> bool { return dart::dynamics::Inertia::verifyMoment(_moment); }, (::boost::python::arg("_moment")))
.def("verifyMoment", [](const Eigen::Matrix3d & _moment, bool _printWarnings) -> bool { return dart::dynamics::Inertia::verifyMoment(_moment, _printWarnings); }, (::boost::python::arg("_moment"), ::boost::python::arg("_printWarnings")))
.def("verifyMoment", [](const Eigen::Matrix3d & _moment, bool _printWarnings, double _tolerance) -> bool { return dart::dynamics::Inertia::verifyMoment(_moment, _printWarnings, _tolerance); }, (::boost::python::arg("_moment"), ::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.def("verifySpatialTensor", [](const Eigen::Matrix6d & _spatial) -> bool { return dart::dynamics::Inertia::verifySpatialTensor(_spatial); }, (::boost::python::arg("_spatial")))
.def("verifySpatialTensor", [](const Eigen::Matrix6d & _spatial, bool _printWarnings) -> bool { return dart::dynamics::Inertia::verifySpatialTensor(_spatial, _printWarnings); }, (::boost::python::arg("_spatial"), ::boost::python::arg("_printWarnings")))
.def("verifySpatialTensor", [](const Eigen::Matrix6d & _spatial, bool _printWarnings, double _tolerance) -> bool { return dart::dynamics::Inertia::verifySpatialTensor(_spatial, _printWarnings, _tolerance); }, (::boost::python::arg("_spatial"), ::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.staticmethod("verifyMoment")
.staticmethod("verifySpatialTensor")
;
}

/* footer */
