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

void _ZN4dart8dynamics5Chain8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Chain"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Chain::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target) -> dart::dynamics::Chain::Criteria * { return new dart::dynamics::Chain::Criteria(_start, _target); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"), ::boost::python::arg("_target"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, bool _includeBoth) -> dart::dynamics::Chain::Criteria * { return new dart::dynamics::Chain::Criteria(_start, _target, _includeBoth); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_includeBoth"))))
.def("satisfy", [](const dart::dynamics::Chain::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); })
.def("convert", [](const dart::dynamics::Chain::Criteria *self) -> dart::dynamics::Linkage::Criteria { return self->convert(); })
.def_readwrite("mStart", &dart::dynamics::Chain::Criteria::mStart)
.def_readwrite("mTarget", &dart::dynamics::Chain::Criteria::mTarget)
.def_readwrite("mIncludeBoth", &dart::dynamics::Chain::Criteria::mIncludeBoth)
;
}

/* footer */
