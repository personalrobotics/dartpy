#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics5ShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape14getBoundingBoxEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape9getVolumeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape5getIDEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape12getShapeTypeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape15setDataVarianceEj_docstring[] = R"CHIMERA_STRING( Set the data variance of this shape. Use the DataVariance to indicate what
 kind of shape information might change during run time so that renderers
 can optimize reliably.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape15addDataVarianceEj_docstring[] = R"CHIMERA_STRING( Add a type of variance to this shape. All other variance types will remain
 the same.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape18removeDataVarianceEj_docstring[] = R"CHIMERA_STRING( Remove a type of variance from this shape. All other variance types will
 remain the same.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape15getDataVarianceEv_docstring[] = R"CHIMERA_STRING( Get the data variance of this shape
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Shape17checkDataVarianceENS1_12DataVarianceE_docstring[] = R"CHIMERA_STRING( True iff this Shape has the specified type of DataVariance
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape11refreshDataEv_docstring[] = R"CHIMERA_STRING( Instruct this shape to update its data
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape17notifyAlphaUpdateEd_docstring[] = R"CHIMERA_STRING( Notify that the alpha of this shape has updated
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Shape17notifyColorUpdateERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring[] = R"CHIMERA_STRING( Notify that the color (rgba) of this shape has updated
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5ShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Shape, ::boost::noncopyable, std::shared_ptr<dart::dynamics::Shape>, ::boost::python::bases<dart::common::Subject > >("Shape", _ZN4dart8dynamics5ShapeE_docstring, boost::python::no_init)
.def("getBoundingBox", [](const dart::dynamics::Shape *self) -> const dart::math::BoundingBox & { return self->getBoundingBox(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Shape14getBoundingBoxEv_docstring)
.def("computeInertia", [](const dart::dynamics::Shape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics5Shape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
.def("getVolume", [](const dart::dynamics::Shape *self) -> double { return self->getVolume(); }, _ZNK4dart8dynamics5Shape9getVolumeEv_docstring)
.def("getID", [](const dart::dynamics::Shape *self) -> int { return self->getID(); }, _ZNK4dart8dynamics5Shape5getIDEv_docstring)
.def("getShapeType", [](const dart::dynamics::Shape *self) -> dart::dynamics::Shape::ShapeType { return self->getShapeType(); }, _ZNK4dart8dynamics5Shape12getShapeTypeEv_docstring)
.def("setDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->setDataVariance(_variance); }, _ZN4dart8dynamics5Shape15setDataVarianceEj_docstring, (::boost::python::arg("_variance")))
.def("addDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->addDataVariance(_variance); }, _ZN4dart8dynamics5Shape15addDataVarianceEj_docstring, (::boost::python::arg("_variance")))
.def("removeDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->removeDataVariance(_variance); }, _ZN4dart8dynamics5Shape18removeDataVarianceEj_docstring, (::boost::python::arg("_variance")))
.def("getDataVariance", [](const dart::dynamics::Shape *self) -> unsigned int { return self->getDataVariance(); }, _ZNK4dart8dynamics5Shape15getDataVarianceEv_docstring)
.def("checkDataVariance", [](const dart::dynamics::Shape *self, dart::dynamics::Shape::DataVariance type) -> bool { return self->checkDataVariance(type); }, _ZNK4dart8dynamics5Shape17checkDataVarianceENS1_12DataVarianceE_docstring, (::boost::python::arg("type")))
.def("refreshData", [](dart::dynamics::Shape *self) -> void { return self->refreshData(); }, _ZN4dart8dynamics5Shape11refreshDataEv_docstring)
.def("notifyAlphaUpdate", [](dart::dynamics::Shape *self, double alpha) -> void { return self->notifyAlphaUpdate(alpha); }, _ZN4dart8dynamics5Shape17notifyAlphaUpdateEd_docstring, (::boost::python::arg("alpha")))
.def("notifyColorUpdate", [](dart::dynamics::Shape *self, const Eigen::Vector4d & color) -> void { return self->notifyColorUpdate(color); }, _ZN4dart8dynamics5Shape17notifyColorUpdateERKN5Eigen6MatrixIdLi4ELi1ELi0ELi4ELi1EEE_docstring, (::boost::python::arg("color")))
;
}

/* footer */
