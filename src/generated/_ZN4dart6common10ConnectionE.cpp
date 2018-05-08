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

void _ZN4dart6common10ConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Connection >("Connection", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Connection * { return new dart::common::Connection(); }, ::boost::python::default_call_policies()))
.def("isConnected", [](const dart::common::Connection *self) -> bool { return self->isConnected(); })
.def("disconnect", [](const dart::common::Connection *self) -> void { return self->disconnect(); })
;
}

/* footer */
