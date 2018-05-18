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

void _ZN4dart6common14VersionCounterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::VersionCounter, ::boost::noncopyable >("VersionCounter", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::VersionCounter * { return new dart::common::VersionCounter(); }, ::boost::python::default_call_policies()))
.def("incrementVersion", [](dart::common::VersionCounter *self) -> std::size_t { return self->incrementVersion(); })
.def("getVersion", [](const dart::common::VersionCounter *self) -> std::size_t { return self->getVersion(); })
;
}

/* footer */
