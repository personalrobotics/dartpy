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

void _ZN4dart10constraint16ConstrainedGroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstrainedGroup, ::boost::noncopyable >("ConstrainedGroup", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::constraint::ConstrainedGroup * { return new dart::constraint::ConstrainedGroup(); }, ::boost::python::default_call_policies()))
.def("addConstraint", [](dart::constraint::ConstrainedGroup *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->addConstraint(_constraint); }, (::boost::python::arg("_constraint")))
.def("getNumConstraints", [](const dart::constraint::ConstrainedGroup *self) -> std::size_t { return self->getNumConstraints(); })
.def("getConstraint", [](const dart::constraint::ConstrainedGroup *self, std::size_t _index) -> dart::constraint::ConstraintBasePtr { return self->getConstraint(_index); }, (::boost::python::arg("_index")))
.def("removeConstraint", [](dart::constraint::ConstrainedGroup *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->removeConstraint(_constraint); }, (::boost::python::arg("_constraint")))
.def("removeAllConstraints", [](dart::constraint::ConstrainedGroup *self) -> void { return self->removeAllConstraints(); })
.def("getTotalDimension", [](const dart::constraint::ConstrainedGroup *self) -> std::size_t { return self->getTotalDimension(); })
;
}

/* footer */
