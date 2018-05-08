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

void _ZN4dart6common9CompositeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Composite, ::boost::noncopyable >("Composite", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Composite * { return new dart::common::Composite(); }, ::boost::python::default_call_policies()))
.def("setCompositeState", [](dart::common::Composite *self, const dart::common::Composite::State & newStates) -> void { return self->setCompositeState(newStates); }, (::boost::python::arg("newStates")))
.def("getCompositeState", [](const dart::common::Composite *self) -> dart::common::Composite::State { return self->getCompositeState(); })
.def("copyCompositeStateTo", [](const dart::common::Composite *self, dart::common::Composite::State & outgoingStates) -> void { return self->copyCompositeStateTo(outgoingStates); }, (::boost::python::arg("outgoingStates")))
.def("setCompositeProperties", [](dart::common::Composite *self, const dart::common::Composite::Properties & newProperties) -> void { return self->setCompositeProperties(newProperties); }, (::boost::python::arg("newProperties")))
.def("getCompositeProperties", [](const dart::common::Composite *self) -> dart::common::Composite::Properties { return self->getCompositeProperties(); })
.def("copyCompositePropertiesTo", [](const dart::common::Composite *self, dart::common::Composite::Properties & outgoingProperties) -> void { return self->copyCompositePropertiesTo(outgoingProperties); }, (::boost::python::arg("outgoingProperties")))
.def("duplicateAspects", [](dart::common::Composite *self, const dart::common::Composite * fromComposite) -> void { return self->duplicateAspects(fromComposite); }, (::boost::python::arg("fromComposite")))
.def("matchAspects", [](dart::common::Composite *self, const dart::common::Composite * otherComposite) -> void { return self->matchAspects(otherComposite); }, (::boost::python::arg("otherComposite")))
;
}

/* footer */
