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

void _ZN4dart8dynamics7Linkage8Criteria6TargetE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage").attr("Criteria"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria::Target >("Target", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Linkage::Criteria::Target * { return new dart::dynamics::Linkage::Criteria::Target(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _target) -> dart::dynamics::Linkage::Criteria::Target * { return new dart::dynamics::Linkage::Criteria::Target(_target); }, ::boost::python::default_call_policies(), (::boost::python::arg("_target"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _target, dart::dynamics::Linkage::Criteria::ExpansionPolicy _policy) -> dart::dynamics::Linkage::Criteria::Target * { return new dart::dynamics::Linkage::Criteria::Target(_target, _policy); }, ::boost::python::default_call_policies(), (::boost::python::arg("_target"), ::boost::python::arg("_policy"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _target, dart::dynamics::Linkage::Criteria::ExpansionPolicy _policy, bool _chain) -> dart::dynamics::Linkage::Criteria::Target * { return new dart::dynamics::Linkage::Criteria::Target(_target, _policy, _chain); }, ::boost::python::default_call_policies(), (::boost::python::arg("_target"), ::boost::python::arg("_policy"), ::boost::python::arg("_chain"))))
.def_readwrite("mNode", &dart::dynamics::Linkage::Criteria::Target::mNode)
.def_readwrite("mPolicy", &dart::dynamics::Linkage::Criteria::Target::mPolicy)
.def_readwrite("mChain", &dart::dynamics::Linkage::Criteria::Target::mChain)
;
}

/* footer */
