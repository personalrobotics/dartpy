#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZNK4dart8dynamics5Chain8Criteria7satisfyEv_docstring[] = R"CHIMERA_STRING( Return a vector of BodyNodes that form a chain
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Chain8Criteria7convertEv_docstring[] = R"CHIMERA_STRING( Convert this Criteria into Linkage::Criteria
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5Chain8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Chain"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Chain::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target) -> dart::dynamics::Chain::Criteria * { return new dart::dynamics::Chain::Criteria(_start, _target); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"), ::boost::python::arg("_target"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, bool _includeBoth) -> dart::dynamics::Chain::Criteria * { return new dart::dynamics::Chain::Criteria(_start, _target, _includeBoth); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_includeBoth"))))
.def("satisfy", [](const dart::dynamics::Chain::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); }, _ZNK4dart8dynamics5Chain8Criteria7satisfyEv_docstring)
.def("convert", [](const dart::dynamics::Chain::Criteria *self) -> dart::dynamics::Linkage::Criteria { return self->convert(); }, _ZNK4dart8dynamics5Chain8Criteria7convertEv_docstring)
.def_readwrite("mStart", &dart::dynamics::Chain::Criteria::mStart)
.def_readwrite("mTarget", &dart::dynamics::Chain::Criteria::mTarget)
.def_readwrite("mIncludeBoth", &dart::dynamics::Chain::Criteria::mIncludeBoth)
;
}

/* footer */
