#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10ShapeFrameE_docstring[] = R"CHIMERA_STRING( This is the variadic version of the SpecializedForAddon class which
 allows you to include arbitrarily many specialized types in the
 specialization.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_5Addon10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEEEE_docstring[] = R"CHIMERA_STRING( Same as setAddonProperties()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this ShapeFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS1_16UniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the UniqueProperties of this ShapeFrame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ShapeFrame23getShapeFramePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this ShapeFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another ShapeFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another ShapeFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame8setShapeERKSt10shared_ptrINS0_5ShapeEE_docstring[] = R"CHIMERA_STRING( Set shape
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame8getShapeEv_docstring[] = R"CHIMERA_STRING( Return shape
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ShapeFrame8getShapeEv_docstring[] = R"CHIMERA_STRING( Return (const) shape
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version for this object
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ShapeFrame10getVersionEv_docstring[] = R"CHIMERA_STRING( Get the version number of this object
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame12asShapeFrameEv_docstring[] = R"CHIMERA_STRING( Convert 'this' into a ShapeFrame pointer if Frame is a ShapeFrame,
 otherwise return nullptr
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ShapeFrame11isShapeNodeEv_docstring[] = R"CHIMERA_STRING( Returns true if this Frame is a ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ShapeFrame11asShapeNodeEv_docstring[] = R"CHIMERA_STRING( Convert 'this' into a ShapeNode pointer if ShapeFrame is a ShapeNode,
 otherwise return nullptr
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10ShapeFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame, dart::common::VersionCounter, dart::common::SpecializedForAddon<dart::dynamics::VisualAddon, dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> > >("ShapeFrame", _ZN4dart8dynamics10ShapeFrameE_docstring, boost::python::no_init)
.def("setProperties", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame::AddonProperties & properties) -> void { return self->setProperties(properties); }, _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_5Addon10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEEEE_docstring, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame::Properties & properties) -> void { return self->setProperties(properties); }, _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame::UniqueProperties & properties) -> void { return self->setProperties(properties); }, _ZN4dart8dynamics10ShapeFrame13setPropertiesERKNS1_16UniquePropertiesE_docstring, (::boost::python::arg("properties")))
.def("getShapeFrameProperties", [](const dart::dynamics::ShapeFrame *self) -> const dart::dynamics::ShapeFrame::Properties { return self->getShapeFrameProperties(); }, _ZNK4dart8dynamics10ShapeFrame23getShapeFramePropertiesEv_docstring)
.def("copy", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame & other) -> void { return self->copy(other); }, _ZN4dart8dynamics10ShapeFrame4copyERKS1__docstring, (::boost::python::arg("other")))
.def("copy", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame * other) -> void { return self->copy(other); }, _ZN4dart8dynamics10ShapeFrame4copyEPKS1__docstring, (::boost::python::arg("other")))
.def("setShape", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapePtr & shape) -> void { return self->setShape(shape); }, _ZN4dart8dynamics10ShapeFrame8setShapeERKSt10shared_ptrINS0_5ShapeEE_docstring, (::boost::python::arg("shape")))
.def("getShape", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapePtr { return self->getShape(); }, _ZN4dart8dynamics10ShapeFrame8getShapeEv_docstring)
.def("getShape", [](const dart::dynamics::ShapeFrame *self) -> dart::dynamics::ConstShapePtr { return self->getShape(); }, _ZNK4dart8dynamics10ShapeFrame8getShapeEv_docstring)
.def("hasVisualAddon", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasVisualAddon(); })
.def("getVisualAddon", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::VisualAddon * { return self->getVisualAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getVisualAddon", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::VisualAddon * { return self->getVisualAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setVisualAddon", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::VisualAddon * addon) -> void { return self->setVisualAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseVisualAddon", [](dart::dynamics::ShapeFrame *self) -> void { return self->eraseVisualAddon(); })
.def("releaseVisualAddon", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::VisualAddon> { return self->releaseVisualAddon(); })
.def("hasCollisionAddon", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasCollisionAddon(); })
.def("getCollisionAddon", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::CollisionAddon * { return self->getCollisionAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getCollisionAddon", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::CollisionAddon * { return self->getCollisionAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setCollisionAddon", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::CollisionAddon * addon) -> void { return self->setCollisionAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseCollisionAddon", [](dart::dynamics::ShapeFrame *self) -> void { return self->eraseCollisionAddon(); })
.def("releaseCollisionAddon", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::CollisionAddon> { return self->releaseCollisionAddon(); })
.def("hasDynamicsAddon", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasDynamicsAddon(); })
.def("getDynamicsAddon", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::DynamicsAddon * { return self->getDynamicsAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getDynamicsAddon", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::DynamicsAddon * { return self->getDynamicsAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setDynamicsAddon", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::DynamicsAddon * addon) -> void { return self->setDynamicsAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseDynamicsAddon", [](dart::dynamics::ShapeFrame *self) -> void { return self->eraseDynamicsAddon(); })
.def("releaseDynamicsAddon", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::DynamicsAddon> { return self->releaseDynamicsAddon(); })
.def("incrementVersion", [](dart::dynamics::ShapeFrame *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart8dynamics10ShapeFrame16incrementVersionEv_docstring)
.def("getVersion", [](const dart::dynamics::ShapeFrame *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart8dynamics10ShapeFrame10getVersionEv_docstring)
.def("asShapeFrame", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapeFrame * { return self->asShapeFrame(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics10ShapeFrame12asShapeFrameEv_docstring)
.def("isShapeNode", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->isShapeNode(); }, _ZNK4dart8dynamics10ShapeFrame11isShapeNodeEv_docstring)
.def("asShapeNode", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapeNode * { return self->asShapeNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics10ShapeFrame11asShapeNodeEv_docstring)
;
}

/* footer */
