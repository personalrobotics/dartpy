#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13SoftMeshShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13SoftMeshShape6updateEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13SoftMeshShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13SoftMeshShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftMeshShape, std::shared_ptr<dart::dynamics::SoftMeshShape>, ::boost::python::bases<dart::dynamics::Shape > >("SoftMeshShape", _ZN4dart8dynamics13SoftMeshShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::SoftBodyNode * _softBodyNode) -> dart::dynamics::SoftMeshShape * { return new dart::dynamics::SoftMeshShape(_softBodyNode); }, ::boost::python::default_call_policies(), (::boost::python::arg("_softBodyNode"))))
.def("update", [](dart::dynamics::SoftMeshShape *self) -> void { return self->update(); }, _ZN4dart8dynamics13SoftMeshShape6updateEv_docstring)
.def("computeInertia", [](const dart::dynamics::SoftMeshShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics13SoftMeshShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
;
}

/* footer */
