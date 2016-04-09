#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common10ConnectionE_docstring[] = R"CHIMERA_STRING( class Connection
)CHIMERA_STRING";

constexpr char _ZNK4dart6common10Connection11isConnectedEv_docstring[] = R"CHIMERA_STRING( Get true if the slot is connected
)CHIMERA_STRING";

constexpr char _ZNK4dart6common10Connection10disconnectEv_docstring[] = R"CHIMERA_STRING( Disconnect the connection
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common10ConnectionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Connection >("Connection", _ZN4dart6common10ConnectionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Connection * { return new dart::common::Connection(); }, ::boost::python::default_call_policies()))
.def("isConnected", [](const dart::common::Connection *self) -> bool { return self->isConnected(); }, _ZNK4dart6common10Connection11isConnectedEv_docstring)
.def("disconnect", [](const dart::common::Connection *self) -> void { return self->disconnect(); }, _ZNK4dart6common10Connection10disconnectEv_docstring)
;
}

/* footer */
