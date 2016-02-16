#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>, ::boost::noncopyable >("_ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def("disconnect", static_cast<void (dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::*)(const dart::common::Connection &) const>(&dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::disconnect), (::boost::python::arg("_connection")))
.def("disconnectAll", static_cast<void (dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::disconnectAll))
.def("clenaupConnections", static_cast<void (dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::clenaupConnections))
.def("cleanupConnections", static_cast<void (dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::cleanupConnections))
.def("getNumConnections", static_cast<std::size_t (dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::*)() const>(&dart::common::Signal<void (std::shared_ptr<const dart::dynamics::MetaSkeleton>, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::getNumConnections))
;
}

/* footer */
