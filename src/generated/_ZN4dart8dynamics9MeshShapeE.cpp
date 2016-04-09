#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9MeshShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape6updateEv_docstring[] = R"CHIMERA_STRING( Update positions of the vertices or the elements. By default, this does
 nothing; you must extend the MeshShape class and implement your own
 version of this function if you want the mesh data to get updated before
 rendering
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape17notifyAlphaUpdateEd_docstring[] = R"CHIMERA_STRING( Notify that the alpha of this shape has updated
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape7setMeshEPK7aiSceneRKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape10getMeshUriEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape11getMeshPathEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape8setScaleERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape8getScaleEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape12setColorModeENS1_9ColorModeE_docstring[] = R"CHIMERA_STRING( Set how the color of this mesh should be determined
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape12getColorModeEv_docstring[] = R"CHIMERA_STRING( Get the coloring mode that this mesh is using
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape13setColorIndexEi_docstring[] = R"CHIMERA_STRING( Set which entry in aiMesh::mColor should be used when the color mode is
 COLOR_INDEX. This value must be smaller than AI_MAX_NUMBER_OF_COLOR_SETS.
 If the color index is higher than what the mesh has available, then we
 will use the highest index possible.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape13getColorIndexEv_docstring[] = R"CHIMERA_STRING( Get the index that will be used when the ColorMode is set to COLOR_INDEX
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape14getDisplayListEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9MeshShape14setDisplayListEi_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9MeshShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9MeshShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MeshShape, std::shared_ptr<dart::dynamics::MeshShape>, ::boost::python::bases<dart::dynamics::Shape > >("MeshShape", _ZN4dart8dynamics9MeshShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh, const std::string & _path) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh, _path); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"), ::boost::python::arg("_path"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh, const std::string & _path, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh, _path, _resourceRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"), ::boost::python::arg("_path"), ::boost::python::arg("_resourceRetriever"))))
.def("update", [](dart::dynamics::MeshShape *self) -> void { return self->update(); }, _ZN4dart8dynamics9MeshShape6updateEv_docstring)
.def("notifyAlphaUpdate", [](dart::dynamics::MeshShape *self, double alpha) -> void { return self->notifyAlphaUpdate(alpha); }, _ZN4dart8dynamics9MeshShape17notifyAlphaUpdateEd_docstring, (::boost::python::arg("alpha")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh) -> void { return self->setMesh(_mesh); }, _ZN4dart8dynamics9MeshShape7setMeshEPK7aiSceneRKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring, (::boost::python::arg("_mesh")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh, const std::string & path) -> void { return self->setMesh(_mesh, path); }, _ZN4dart8dynamics9MeshShape7setMeshEPK7aiSceneRKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring, (::boost::python::arg("_mesh"), ::boost::python::arg("path")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh, const std::string & path, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> void { return self->setMesh(_mesh, path, _resourceRetriever); }, _ZN4dart8dynamics9MeshShape7setMeshEPK7aiSceneRKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring, (::boost::python::arg("_mesh"), ::boost::python::arg("path"), ::boost::python::arg("_resourceRetriever")))
.def("getMeshUri", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getMeshUri(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9MeshShape10getMeshUriEv_docstring)
.def("getMeshPath", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getMeshPath(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9MeshShape11getMeshPathEv_docstring)
.def("setScale", [](dart::dynamics::MeshShape *self, const Eigen::Vector3d & _scale) -> void { return self->setScale(_scale); }, _ZN4dart8dynamics9MeshShape8setScaleERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_scale")))
.def("getScale", [](const dart::dynamics::MeshShape *self) -> const Eigen::Vector3d & { return self->getScale(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9MeshShape8getScaleEv_docstring)
.def("setColorMode", [](dart::dynamics::MeshShape *self, dart::dynamics::MeshShape::ColorMode _mode) -> void { return self->setColorMode(_mode); }, _ZN4dart8dynamics9MeshShape12setColorModeENS1_9ColorModeE_docstring, (::boost::python::arg("_mode")))
.def("getColorMode", [](const dart::dynamics::MeshShape *self) -> dart::dynamics::MeshShape::ColorMode { return self->getColorMode(); }, _ZNK4dart8dynamics9MeshShape12getColorModeEv_docstring)
.def("setColorIndex", [](dart::dynamics::MeshShape *self, int _index) -> void { return self->setColorIndex(_index); }, _ZN4dart8dynamics9MeshShape13setColorIndexEi_docstring, (::boost::python::arg("_index")))
.def("getColorIndex", [](const dart::dynamics::MeshShape *self) -> int { return self->getColorIndex(); }, _ZNK4dart8dynamics9MeshShape13getColorIndexEv_docstring)
.def("getDisplayList", [](const dart::dynamics::MeshShape *self) -> int { return self->getDisplayList(); }, _ZNK4dart8dynamics9MeshShape14getDisplayListEv_docstring)
.def("setDisplayList", [](dart::dynamics::MeshShape *self, int _index) -> void { return self->setDisplayList(_index); }, _ZN4dart8dynamics9MeshShape14setDisplayListEi_docstring, (::boost::python::arg("_index")))
.def("computeInertia", [](const dart::dynamics::MeshShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics9MeshShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
;
}

/* footer */
