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

void _ZN4dart8dynamics14NodeDestructorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeDestructor, ::boost::noncopyable >("NodeDestructor", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Node * _node) -> dart::dynamics::NodeDestructor * { return new dart::dynamics::NodeDestructor(_node); }, ::boost::python::default_call_policies(), (::boost::python::arg("_node"))))
.def("getNode", [](const dart::dynamics::NodeDestructor *self) -> dart::dynamics::Node * { return self->getNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::NodePtr> >())
;
}

/* footer */
