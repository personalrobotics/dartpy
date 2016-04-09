#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics23SkeletonRefCountingBase11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Return the Skeleton this BodyNode belongs to
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics23SkeletonRefCountingBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SkeletonRefCountingBase, ::boost::noncopyable >("SkeletonRefCountingBase", boost::python::no_init)
.def("getSkeleton", [](dart::dynamics::SkeletonRefCountingBase *self) -> std::shared_ptr<dart::dynamics::Skeleton> { return self->getSkeleton(); }, _ZN4dart8dynamics23SkeletonRefCountingBase11getSkeletonEv_docstring)
;
}

/* footer */
