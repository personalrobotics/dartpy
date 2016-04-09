#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics12SoftBodyNode10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("SoftBodyNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftBodyNode::Properties, ::boost::python::bases<dart::dynamics::detail::BodyNodeProperties, dart::dynamics::SoftBodyNode::UniqueProperties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::SoftBodyNode::Properties * { return new dart::dynamics::SoftBodyNode::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::BodyNode::Properties & _bodyProperties) -> dart::dynamics::SoftBodyNode::Properties * { return new dart::dynamics::SoftBodyNode::Properties(_bodyProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bodyProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::BodyNode::Properties & _bodyProperties, const dart::dynamics::SoftBodyNode::UniqueProperties & _softProperties) -> dart::dynamics::SoftBodyNode::Properties * { return new dart::dynamics::SoftBodyNode::Properties(_bodyProperties, _softProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bodyProperties"), ::boost::python::arg("_softProperties"))))
;
}

/* footer */
