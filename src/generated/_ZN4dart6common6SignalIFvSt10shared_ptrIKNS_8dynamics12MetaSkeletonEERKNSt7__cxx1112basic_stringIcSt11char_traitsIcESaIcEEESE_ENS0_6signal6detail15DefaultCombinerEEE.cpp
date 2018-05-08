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

void _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>, ::boost::noncopyable >("MetaSkeletonNameChangedSignal", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> * { return new dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>(); }, ::boost::python::default_call_policies()))
.def("connect", [](dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> *self, const dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::SlotType & _slot) -> dart::common::Connection { return self->connect(_slot); }, (::boost::python::arg("_slot")))
.def("disconnect", [](const dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> *self, const dart::common::Connection & _connection) -> void { return self->disconnect(_connection); }, (::boost::python::arg("_connection")))
.def("disconnectAll", [](dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> *self) -> void { return self->disconnectAll(); })
.def("cleanupConnections", [](dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> *self) -> void { return self->cleanupConnections(); })
.def("getNumConnections", [](const dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> *self) -> std::size_t { return self->getNumConnections(); })
;
}

/* footer */
