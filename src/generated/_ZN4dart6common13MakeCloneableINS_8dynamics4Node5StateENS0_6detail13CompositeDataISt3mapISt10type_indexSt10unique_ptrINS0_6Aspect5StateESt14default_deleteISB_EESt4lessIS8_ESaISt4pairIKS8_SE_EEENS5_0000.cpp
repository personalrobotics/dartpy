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

void _ZN4dart6common13MakeCloneableINS_8dynamics4Node5StateENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_8GetStateEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> >, ::boost::python::bases<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, dart::dynamics::Node::State > >("MakeCloneable_NodeState_Map_TypeIndex_AspectState", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > * { return new dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> & mixin) -> dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > * { return new dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> >(mixin); }, ::boost::python::default_call_policies(), (::boost::python::arg("mixin"))))
.def("clone", [](const dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->clone(); })
.def("copy", [](dart::common::MakeCloneable<dart::dynamics::Node::State, dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > *self, const dart::dynamics::Node::State & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
;
}

/* footer */
