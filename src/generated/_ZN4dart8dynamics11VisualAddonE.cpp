#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11VisualAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon7setRGBAERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring[] = R"CHIMERA_STRING( Set RGBA color
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon8setColorERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Identical to setRGB(const Eigen::Vector3d
&
)
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon8setColorERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring[] = R"CHIMERA_STRING( Identical to setRGBA(const Eigen::Vector4d
&
)
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon6setRGBERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set RGB color components (leave alpha alone)
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon8setAlphaEd_docstring[] = R"CHIMERA_STRING( Set the transparency of the Shape
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11VisualAddon8getColorEv_docstring[] = R"CHIMERA_STRING( Get color
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11VisualAddon6getRGBEv_docstring[] = R"CHIMERA_STRING( Get RGB color components
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11VisualAddon8getAlphaEv_docstring[] = R"CHIMERA_STRING( Get the transparency of the Shape
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon4hideEv_docstring[] = R"CHIMERA_STRING( Hide the ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11VisualAddon4showEv_docstring[] = R"CHIMERA_STRING( Show the ShapeNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11VisualAddon8isHiddenEv_docstring[] = R"CHIMERA_STRING( True iff the ShapeNode is set to be hidden. Use hide(bool) to change this
 setting
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11VisualAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::VisualAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::VisualAddon, dart::dynamics::detail::VisualAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp> > >("VisualAddon", _ZN4dart8dynamics11VisualAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::VisualAddon * { return new dart::dynamics::VisualAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::VisualAddon, dart::dynamics::detail::VisualAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::VisualAddon * { return new dart::dynamics::VisualAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setRGBA", [](dart::dynamics::VisualAddon *self, const Eigen::Vector4d & color) -> void { return self->setRGBA(color); }, _ZN4dart8dynamics11VisualAddon7setRGBAERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring, (::boost::python::arg("color")))
.def("getRGBA", [](const dart::dynamics::VisualAddon *self) -> const Eigen::Vector4d & { return self->getRGBA(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setHidden", [](dart::dynamics::VisualAddon *self, const bool & value) -> void { return self->setHidden(value); }, (::boost::python::arg("value")))
.def("getHidden", [](const dart::dynamics::VisualAddon *self) -> const bool & { return self->getHidden(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setColor", [](dart::dynamics::VisualAddon *self, const Eigen::Vector3d & color) -> void { return self->setColor(color); }, _ZN4dart8dynamics11VisualAddon8setColorERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("color")))
.def("setColor", [](dart::dynamics::VisualAddon *self, const Eigen::Vector4d & color) -> void { return self->setColor(color); }, _ZN4dart8dynamics11VisualAddon8setColorERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring, (::boost::python::arg("color")))
.def("setRGB", [](dart::dynamics::VisualAddon *self, const Eigen::Vector3d & rgb) -> void { return self->setRGB(rgb); }, _ZN4dart8dynamics11VisualAddon6setRGBERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("rgb")))
.def("setAlpha", [](dart::dynamics::VisualAddon *self, const double alpha) -> void { return self->setAlpha(alpha); }, _ZN4dart8dynamics11VisualAddon8setAlphaEd_docstring, (::boost::python::arg("alpha")))
.def("getColor", [](const dart::dynamics::VisualAddon *self) -> Eigen::Vector3d { return self->getColor(); }, _ZNK4dart8dynamics11VisualAddon8getColorEv_docstring)
.def("getRGB", [](const dart::dynamics::VisualAddon *self) -> Eigen::Vector3d { return self->getRGB(); }, _ZNK4dart8dynamics11VisualAddon6getRGBEv_docstring)
.def("getAlpha", [](const dart::dynamics::VisualAddon *self) -> double { return self->getAlpha(); }, _ZNK4dart8dynamics11VisualAddon8getAlphaEv_docstring)
.def("hide", [](dart::dynamics::VisualAddon *self) -> void { return self->hide(); }, _ZN4dart8dynamics11VisualAddon4hideEv_docstring)
.def("show", [](dart::dynamics::VisualAddon *self) -> void { return self->show(); }, _ZN4dart8dynamics11VisualAddon4showEv_docstring)
.def("isHidden", [](const dart::dynamics::VisualAddon *self) -> bool { return self->isHidden(); }, _ZNK4dart8dynamics11VisualAddon8isHiddenEv_docstring)
;
}

/* footer */
