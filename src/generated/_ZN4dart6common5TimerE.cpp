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

void _ZN4dart6common5TimerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Timer >("Timer", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Timer * { return new dart::common::Timer(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::common::Timer * { return new dart::common::Timer(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("start", [](dart::common::Timer *self) -> void { return self->start(); })
.def("isStarted", [](const dart::common::Timer *self) -> bool { return self->isStarted(); })
.def("stop", [](dart::common::Timer *self) -> void { return self->stop(); })
.def("getElapsedTime", [](dart::common::Timer *self) -> double { return self->getElapsedTime(); })
.def("getLastElapsedTime", [](const dart::common::Timer *self) -> double { return self->getLastElapsedTime(); })
.def("getTotalElapsedTime", [](const dart::common::Timer *self) -> double { return self->getTotalElapsedTime(); })
.def("print", [](dart::common::Timer *self) -> void { return self->print(); })
.def("getWallTime", []() -> double { return dart::common::Timer::getWallTime(); })
.staticmethod("getWallTime")
;
}

/* footer */
