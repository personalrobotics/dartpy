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

void _ZN4dart8dynamics6detail21EndEffectorPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EndEffectorProperties >("EndEffectorProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::EndEffectorProperties * { return new dart::dynamics::detail::EndEffectorProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & defaultTf) -> dart::dynamics::detail::EndEffectorProperties * { return new dart::dynamics::detail::EndEffectorProperties(defaultTf); }, ::boost::python::default_call_policies(), (::boost::python::arg("defaultTf"))))
.def_readwrite("mDefaultTransform", &dart::dynamics::detail::EndEffectorProperties::mDefaultTransform)
;
}

/* footer */
