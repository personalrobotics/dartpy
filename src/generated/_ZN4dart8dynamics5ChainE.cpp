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

void _ZN4dart8dynamics5ChainE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Chain, ::boost::noncopyable, dart::dynamics::ChainPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Chain", boost::python::no_init)
.def("isStillChain", [](const dart::dynamics::Chain *self) -> bool { return self->isStillChain(); })
.def("create", [](const dart::dynamics::Chain::Criteria & _criteria) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Chain::Criteria & _criteria, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target); }, (::boost::python::arg("_start"), ::boost::python::arg("_target")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _name); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_name")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, dart::dynamics::Chain::IncludeBothTag _arg2_) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _arg2_); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_arg2_")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, dart::dynamics::Chain::IncludeBothTag _arg2_, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _arg2_, _name); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_arg2_"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
