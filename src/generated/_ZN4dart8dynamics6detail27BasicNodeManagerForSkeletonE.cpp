#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BasicNodeManagerForSkeleton, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForBodyNode > >("BasicNodeManagerForSkeleton", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::BasicNodeManagerForSkeleton * { return new dart::dynamics::detail::BasicNodeManagerForSkeleton(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
