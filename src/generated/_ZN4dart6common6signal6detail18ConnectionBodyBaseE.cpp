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

void _ZN4dart6common6signal6detail18ConnectionBodyBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("signal").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::signal::detail::ConnectionBodyBase >("ConnectionBodyBase", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::signal::detail::ConnectionBodyBase * { return new dart::common::signal::detail::ConnectionBodyBase(); }, ::boost::python::default_call_policies()))
.def("disconnect", [](dart::common::signal::detail::ConnectionBodyBase *self) -> void { return self->disconnect(); })
.def("isConnected", [](const dart::common::signal::detail::ConnectionBodyBase *self) -> bool { return self->isConnected(); })
;
}

/* footer */
