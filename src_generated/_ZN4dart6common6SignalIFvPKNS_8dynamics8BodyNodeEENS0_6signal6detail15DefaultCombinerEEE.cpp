#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE()
{
::boost::python::class_<dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>, ::boost::noncopyable >("_ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def("disconnect", static_cast<void (dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::*)(const dart::common::Connection &) const>(&dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::disconnect), (::boost::python::arg("_connection")))
.def("disconnectAll", static_cast<void (dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::disconnectAll))
.def("clenaupConnections", static_cast<void (dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::clenaupConnections))
.def("cleanupConnections", static_cast<void (dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::*)()>(&dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::cleanupConnections))
.def("getNumConnections", static_cast<std::size_t (dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::*)() const>(&dart::common::Signal<void (const dart::dynamics::BodyNode *), dart::common::signal::detail::DefaultCombiner>::getNumConnections))
;
}

/* footer */
