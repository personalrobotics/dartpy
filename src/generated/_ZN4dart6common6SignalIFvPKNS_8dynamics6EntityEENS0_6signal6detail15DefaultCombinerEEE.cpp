#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE_docstring[] = R"CHIMERA_STRING( Signal implements a signal/slot mechanism for the slots don't return a value
)CHIMERA_STRING";

constexpr char _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE7connectERKSt8functionIS6_E_docstring[] = R"CHIMERA_STRING( Connect a slot to the signal
)CHIMERA_STRING";

constexpr char _ZNK4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE10disconnectERKNS0_10ConnectionE_docstring[] = R"CHIMERA_STRING( Disconnect given connection
)CHIMERA_STRING";

constexpr char _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE13disconnectAllEv_docstring[] = R"CHIMERA_STRING( Disconnect all the connections
)CHIMERA_STRING";

constexpr char _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE18clenaupConnectionsEv_docstring[] = R"CHIMERA_STRING( Cleanup all the disconnected connections
 
)CHIMERA_STRING";

constexpr char _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE18cleanupConnectionsEv_docstring[] = R"CHIMERA_STRING( Cleanup all the disconnected connections
)CHIMERA_STRING";

constexpr char _ZNK4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE17getNumConnectionsEv_docstring[] = R"CHIMERA_STRING( Get the number of connections
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner>, ::boost::noncopyable >("EntitySignal", _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> * { return new dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner>(); }, ::boost::python::default_call_policies()))
.def("connect", [](dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self, const dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner>::SlotType & _slot) -> dart::common::Connection { return self->connect(_slot); }, _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE7connectERKSt8functionIS6_E_docstring, (::boost::python::arg("_slot")))
.def("disconnect", [](const dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self, const dart::common::Connection & _connection) -> void { return self->disconnect(_connection); }, _ZNK4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE10disconnectERKNS0_10ConnectionE_docstring, (::boost::python::arg("_connection")))
.def("disconnectAll", [](dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self) -> void { return self->disconnectAll(); }, _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE13disconnectAllEv_docstring)
.def("clenaupConnections", [](dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self) -> void { return self->clenaupConnections(); }, _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE18clenaupConnectionsEv_docstring)
.def("cleanupConnections", [](dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self) -> void { return self->cleanupConnections(); }, _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE18cleanupConnectionsEv_docstring)
.def("getNumConnections", [](const dart::common::Signal<void (const dart::dynamics::Entity *), dart::common::signal::detail::DefaultCombiner> *self) -> std::size_t { return self->getNumConnections(); }, _ZNK4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEE17getNumConnectionsEv_docstring)
;
}

/* footer */
