#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common6signal6detail18ConnectionBodyBaseE_docstring[] = R"CHIMERA_STRING( class ConnectionBodyBase
)CHIMERA_STRING";

constexpr char _ZN4dart6common6signal6detail18ConnectionBodyBase10disconnectEv_docstring[] = R"CHIMERA_STRING( Disconnect
)CHIMERA_STRING";

constexpr char _ZNK4dart6common6signal6detail18ConnectionBodyBase11isConnectedEv_docstring[] = R"CHIMERA_STRING( Get true if this connection body is connected to the signal
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common6signal6detail18ConnectionBodyBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("signal").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::signal::detail::ConnectionBodyBase >("ConnectionBodyBase", _ZN4dart6common6signal6detail18ConnectionBodyBaseE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::signal::detail::ConnectionBodyBase * { return new dart::common::signal::detail::ConnectionBodyBase(); }, ::boost::python::default_call_policies()))
.def("disconnect", [](dart::common::signal::detail::ConnectionBodyBase *self) -> void { return self->disconnect(); }, _ZN4dart6common6signal6detail18ConnectionBodyBase10disconnectEv_docstring)
.def("isConnected", [](const dart::common::signal::detail::ConnectionBodyBase *self) -> bool { return self->isConnected(); }, _ZNK4dart6common6signal6detail18ConnectionBodyBase11isConnectedEv_docstring)
;
}

/* footer */
