#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZNK4dart8dynamics6Branch8Criteria7satisfyEv_docstring[] = R"CHIMERA_STRING( Return a vector of BodyNodes that form a full subtree, starting from
 mStart
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Branch8Criteria7convertEv_docstring[] = R"CHIMERA_STRING( Convert this Criteria into Linkage criteria
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6Branch8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Branch"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _start) -> dart::dynamics::Branch::Criteria * { return new dart::dynamics::Branch::Criteria(_start); }, ::boost::python::default_call_policies(), (::boost::python::arg("_start"))))
.def("satisfy", [](const dart::dynamics::Branch::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); }, _ZNK4dart8dynamics6Branch8Criteria7satisfyEv_docstring)
.def("convert", [](const dart::dynamics::Branch::Criteria *self) -> dart::dynamics::Linkage::Criteria { return self->convert(); }, _ZNK4dart8dynamics6Branch8Criteria7convertEv_docstring)
.def_readwrite("mStart", &dart::dynamics::Branch::Criteria::mStart)
;
}

/* footer */
