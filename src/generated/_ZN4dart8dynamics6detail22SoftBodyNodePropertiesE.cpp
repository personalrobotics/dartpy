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

void _ZN4dart8dynamics6detail22SoftBodyNodePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SoftBodyNodeProperties, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::SoftBodyNodeUniqueProperties > >("SoftBodyNodeProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SoftBodyNodeProperties * { return new dart::dynamics::detail::SoftBodyNodeProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::BodyNode::Properties & _bodyProperties) -> dart::dynamics::detail::SoftBodyNodeProperties * { return new dart::dynamics::detail::SoftBodyNodeProperties(_bodyProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bodyProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::BodyNode::Properties & _bodyProperties, const dart::dynamics::detail::SoftBodyNodeUniqueProperties & _softProperties) -> dart::dynamics::detail::SoftBodyNodeProperties * { return new dart::dynamics::detail::SoftBodyNodeProperties(_bodyProperties, _softProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bodyProperties"), ::boost::python::arg("_softProperties"))))
;
}

/* footer */
