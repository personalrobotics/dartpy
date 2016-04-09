#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics12SoftBodyNode16UniqueProperties12addPointMassERKNS0_9PointMass10PropertiesE_docstring[] = R"CHIMERA_STRING( Add a PointMass to this Properties struct
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode16UniqueProperties18connectPointMassesEmm_docstring[] = R"CHIMERA_STRING( Connect two PointMasses together in this Properties struct
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode16UniqueProperties7addFaceERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Add a face to this Properties struct
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("SoftBodyNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftBodyNode::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double _Kv) -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(_Kv); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke) -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(_Kv, _Ke); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(_Kv, _Ke, _DampCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff, const std::vector<dart::dynamics::PointMass::Properties> & _points) -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(_Kv, _Ke, _DampCoeff, _points); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"), ::boost::python::arg("_points"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff, const std::vector<dart::dynamics::PointMass::Properties> & _points, const std::vector<Eigen::Vector3i> & _faces) -> dart::dynamics::SoftBodyNode::UniqueProperties * { return new dart::dynamics::SoftBodyNode::UniqueProperties(_Kv, _Ke, _DampCoeff, _points, _faces); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"), ::boost::python::arg("_points"), ::boost::python::arg("_faces"))))
.def("addPointMass", [](dart::dynamics::SoftBodyNode::UniqueProperties *self, const dart::dynamics::PointMass::Properties & _properties) -> void { return self->addPointMass(_properties); }, _ZN4dart8dynamics12SoftBodyNode16UniqueProperties12addPointMassERKNS0_9PointMass10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("connectPointMasses", [](dart::dynamics::SoftBodyNode::UniqueProperties *self, std::size_t i1, std::size_t i2) -> bool { return self->connectPointMasses(i1, i2); }, _ZN4dart8dynamics12SoftBodyNode16UniqueProperties18connectPointMassesEmm_docstring, (::boost::python::arg("i1"), ::boost::python::arg("i2")))
.def("addFace", [](dart::dynamics::SoftBodyNode::UniqueProperties *self, const Eigen::Vector3i & _newFace) -> void { return self->addFace(_newFace); }, _ZN4dart8dynamics12SoftBodyNode16UniqueProperties7addFaceERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_newFace")))
.def_readwrite("mKv", &dart::dynamics::SoftBodyNode::UniqueProperties::mKv)
.def_readwrite("mKe", &dart::dynamics::SoftBodyNode::UniqueProperties::mKe)
.def_readwrite("mDampCoeff", &dart::dynamics::SoftBodyNode::UniqueProperties::mDampCoeff)
.def_readwrite("mPointProps", &dart::dynamics::SoftBodyNode::UniqueProperties::mPointProps)
.def_readwrite("mFaces", &dart::dynamics::SoftBodyNode::UniqueProperties::mFaces)
;
}

/* footer */
