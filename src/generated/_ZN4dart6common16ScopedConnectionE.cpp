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

void _ZN4dart6common16ScopedConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ScopedConnection, ::boost::python::bases<dart::common::Connection > >("ScopedConnection", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::common::Connection & _other) -> dart::common::ScopedConnection * { return new dart::common::ScopedConnection(_other); }, ::boost::python::default_call_policies(), (::boost::python::arg("_other"))))
;
}

/* footer */
