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

void _ZN4dart8dynamics6Branch8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Branch"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start) -> dart::dynamics::Branch::Criteria * { return new dart::dynamics::Branch::Criteria(_start); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"))))
.def("satisfy", [](const dart::dynamics::Branch::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); })
.def("convert", [](const dart::dynamics::Branch::Criteria *self) -> dart::dynamics::Linkage::Criteria { return self->convert(); })
.def_readwrite("mStart", &dart::dynamics::Branch::Criteria::mStart)
;
}

/* footer */
