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

void _ZN4dart8dynamics8BoxShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BoxShape, std::shared_ptr<dart::dynamics::BoxShape>, ::boost::python::bases<dart::dynamics::Shape > >("BoxShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _size) -> dart::dynamics::BoxShape * { return new dart::dynamics::BoxShape(_size); }, ::boost::python::default_call_policies(), (::boost::python::arg("_size"))))
.def("getType", [](const dart::dynamics::BoxShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setSize", [](dart::dynamics::BoxShape *self, const Eigen::Vector3d & _size) -> void { return self->setSize(_size); }, (::boost::python::arg("_size")))
.def("getSize", [](const dart::dynamics::BoxShape *self) -> const Eigen::Vector3d & { return self->getSize(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeInertia", [](const dart::dynamics::BoxShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::BoxShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeVolume", [](const Eigen::Vector3d & size) -> double { return dart::dynamics::BoxShape::computeVolume(size); }, (::boost::python::arg("size")))
.def("computeInertia", [](const Eigen::Vector3d & size, double mass) -> Eigen::Matrix3d { return dart::dynamics::BoxShape::computeInertia(size, mass); }, (::boost::python::arg("size"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
