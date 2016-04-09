#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common16ScopedConnectionE_docstring[] = R"CHIMERA_STRING( class ScopedConnection
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common16ScopedConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ScopedConnection, ::boost::noncopyable, ::boost::python::bases<dart::common::Connection > >("ScopedConnection", _ZN4dart6common16ScopedConnectionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::common::Connection & _other) -> dart::common::ScopedConnection * { return new dart::common::ScopedConnection(_other); }, ::boost::python::default_call_policies(), (::boost::python::arg("_other"))))
;
}

/* footer */
