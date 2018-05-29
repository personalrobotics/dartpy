#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics13SoftMeshShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftMeshShape, ::boost::noncopyable, std::shared_ptr<dart::dynamics::SoftMeshShape>, ::boost::python::bases<dart::dynamics::Shape > >("SoftMeshShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::SoftBodyNode * _softBodyNode) -> dart::dynamics::SoftMeshShape * { return new dart::dynamics::SoftMeshShape(_softBodyNode); }, ::boost::python::default_call_policies(), (::boost::python::arg("_softBodyNode"))))
.def("getType", [](const dart::dynamics::SoftMeshShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("update", [](dart::dynamics::SoftMeshShape *self) -> void { return self->update(); })
.def("computeInertia", [](const dart::dynamics::SoftMeshShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::SoftMeshShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
