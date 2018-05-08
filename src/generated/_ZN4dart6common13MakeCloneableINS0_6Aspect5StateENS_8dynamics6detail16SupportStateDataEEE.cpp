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

void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData>, ::boost::python::bases<dart::dynamics::detail::SupportStateData, dart::common::Aspect::State > >("MakeCloneable_AspectState_SupportStateData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData> * { return new dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::SupportStateData & mixin) -> dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData> * { return new dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData>(mixin); }, ::boost::python::default_call_policies(), (::boost::python::arg("mixin"))))
.def("clone", [](const dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData> *self) -> std::unique_ptr<dart::common::Aspect::State> { return self->clone(); })
.def("copy", [](dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SupportStateData> *self, const dart::common::Aspect::State & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
;
}

/* footer */
