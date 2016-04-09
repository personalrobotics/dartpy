#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common5TimerE_docstring[] = R"CHIMERA_STRING( 
 This is a definition of mTimer class.
 For measure the time, gettimeofday() api is used
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Timer5startEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart6common5Timer9isStartedEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Timer4stopEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Timer14getElapsedTimeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart6common5Timer18getLastElapsedTimeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart6common5Timer19getTotalElapsedTimeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Timer5printEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Timer11getWallTimeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common5TimerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Timer >("Timer", _ZN4dart6common5TimerE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Timer * { return new dart::common::Timer(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::common::Timer * { return new dart::common::Timer(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("start", [](dart::common::Timer *self) -> void { return self->start(); }, _ZN4dart6common5Timer5startEv_docstring)
.def("isStarted", [](const dart::common::Timer *self) -> bool { return self->isStarted(); }, _ZNK4dart6common5Timer9isStartedEv_docstring)
.def("stop", [](dart::common::Timer *self) -> void { return self->stop(); }, _ZN4dart6common5Timer4stopEv_docstring)
.def("getElapsedTime", [](dart::common::Timer *self) -> double { return self->getElapsedTime(); }, _ZN4dart6common5Timer14getElapsedTimeEv_docstring)
.def("getLastElapsedTime", [](const dart::common::Timer *self) -> double { return self->getLastElapsedTime(); }, _ZNK4dart6common5Timer18getLastElapsedTimeEv_docstring)
.def("getTotalElapsedTime", [](const dart::common::Timer *self) -> double { return self->getTotalElapsedTime(); }, _ZNK4dart6common5Timer19getTotalElapsedTimeEv_docstring)
.def("print", [](dart::common::Timer *self) -> void { return self->print(); }, _ZN4dart6common5Timer5printEv_docstring)
.def("getWallTime", []() -> double { return dart::common::Timer::getWallTime(); })
.staticmethod("getWallTime")
;
}

/* footer */
