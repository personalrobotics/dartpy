#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint19WeldJointConstraintE_docstring[] = R"CHIMERA_STRING( WeldJointConstraint represents weld joint constraint between a body and the
 world or between two bodies
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint19WeldJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::WeldJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("WeldJointConstraint", _ZN4dart10constraint19WeldJointConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body) -> dart::constraint::WeldJointConstraint * { return new dart::constraint::WeldJointConstraint(_body); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _body1, dart::dynamics::BodyNode * _body2) -> dart::constraint::WeldJointConstraint * { return new dart::constraint::WeldJointConstraint(_body1, _body2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_body1"), ::boost::python::arg("_body2"))))
;
}

/* footer */
