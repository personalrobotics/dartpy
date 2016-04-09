#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10ArrowShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ArrowShape12setPositionsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring[] = R"CHIMERA_STRING( Set the positions of the tail and head of the arrow without changing any
 settings
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ArrowShape7getTailEv_docstring[] = R"CHIMERA_STRING( Get the location of the tail of this arrow
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ArrowShape7getHeadEv_docstring[] = R"CHIMERA_STRING( Get the location of the head of this arrow
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ArrowShape13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the properties of this arrow
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ArrowShape17notifyColorUpdateERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the color of this arrow
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ArrowShape13getPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the properties of this arrow
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10ArrowShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ArrowShape, std::shared_ptr<dart::dynamics::ArrowShape>, ::boost::python::bases<dart::dynamics::MeshShape > >("ArrowShape", _ZN4dart8dynamics10ArrowShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties, const Eigen::Vector4d & _color) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties, _color); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"), ::boost::python::arg("_color"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties, const Eigen::Vector4d & _color, std::size_t _resolution) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties, _color, _resolution); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"), ::boost::python::arg("_color"), ::boost::python::arg("_resolution"))))
.def("setPositions", [](dart::dynamics::ArrowShape *self, const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head) -> void { return self->setPositions(_tail, _head); }, _ZN4dart8dynamics10ArrowShape12setPositionsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring, (::boost::python::arg("_tail"), ::boost::python::arg("_head")))
.def("getTail", [](const dart::dynamics::ArrowShape *self) -> const Eigen::Vector3d & { return self->getTail(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10ArrowShape7getTailEv_docstring)
.def("getHead", [](const dart::dynamics::ArrowShape *self) -> const Eigen::Vector3d & { return self->getHead(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10ArrowShape7getHeadEv_docstring)
.def("setProperties", [](dart::dynamics::ArrowShape *self, const dart::dynamics::ArrowShape::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics10ArrowShape13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("notifyColorUpdate", [](dart::dynamics::ArrowShape *self, const Eigen::Vector4d & _color) -> void { return self->notifyColorUpdate(_color); }, _ZN4dart8dynamics10ArrowShape17notifyColorUpdateERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring, (::boost::python::arg("_color")))
.def("getProperties", [](const dart::dynamics::ArrowShape *self) -> const dart::dynamics::ArrowShape::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10ArrowShape13getPropertiesEv_docstring)
.def("configureArrow", [](dart::dynamics::ArrowShape *self, const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties) -> void { return self->configureArrow(_tail, _head, _properties); }, (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties")))
;
}

/* footer */
