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

void _ZN4dart6common13MakeCloneableINS_8dynamics4Node10PropertiesENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_13GetPropertiesEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> >, ::boost::python::bases<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, dart::dynamics::Node::Properties > >("MakeCloneable_NodeProperties_Map_TypeIndex_AspectProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > * { return new dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> & mixin) -> dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > * { return new dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> >(mixin); }, ::boost::python::default_call_policies(), (::boost::python::arg("mixin"))))
.def("clone", [](const dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > *self) -> std::unique_ptr<dart::dynamics::Node::Properties> { return self->clone(); })
.def("copy", [](dart::common::MakeCloneable<dart::dynamics::Node::Properties, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > *self, const dart::dynamics::Node::Properties & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
;
}

/* footer */
