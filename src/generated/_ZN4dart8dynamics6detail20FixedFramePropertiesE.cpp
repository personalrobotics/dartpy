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

void _ZN4dart8dynamics6detail20FixedFramePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::FixedFrameProperties >("FixedFrameProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::FixedFrameProperties * { return new dart::dynamics::detail::FixedFrameProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & relativeTf) -> dart::dynamics::detail::FixedFrameProperties * { return new dart::dynamics::detail::FixedFrameProperties(relativeTf); }, ::boost::python::default_call_policies(), (::boost::python::arg("relativeTf"))))
.def_readwrite("mRelativeTf", &dart::dynamics::detail::FixedFrameProperties::mRelativeTf)
;
}

/* footer */
