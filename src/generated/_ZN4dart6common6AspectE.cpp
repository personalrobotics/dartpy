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

void _ZN4dart6common6AspectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Aspect, ::boost::noncopyable >("Aspect", boost::python::no_init)
.def("cloneAspect", [](const dart::common::Aspect *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
.def("setAspectState", [](dart::common::Aspect *self, const dart::common::Aspect::State & otherState) -> void { return self->setAspectState(otherState); }, (::boost::python::arg("otherState")))
.def("setAspectProperties", [](dart::common::Aspect *self, const dart::common::Aspect::Properties & someProperties) -> void { return self->setAspectProperties(someProperties); }, (::boost::python::arg("someProperties")))
;
}

/* footer */
