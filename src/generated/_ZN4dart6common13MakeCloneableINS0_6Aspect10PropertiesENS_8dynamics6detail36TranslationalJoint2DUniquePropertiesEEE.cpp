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

void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties>, ::boost::python::bases<dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::common::Aspect::Properties > >("MakeCloneable_AspectProperties_TranslationalJoint2DUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> * { return new dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::TranslationalJoint2DUniqueProperties & mixin) -> dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> * { return new dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties>(mixin); }, ::boost::python::default_call_policies(), (::boost::python::arg("mixin"))))
.def("clone", [](const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> *self) -> std::unique_ptr<dart::common::Aspect::Properties> { return self->clone(); })
.def("copy", [](dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> *self, const dart::common::Aspect::Properties & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
;
}

/* footer */
