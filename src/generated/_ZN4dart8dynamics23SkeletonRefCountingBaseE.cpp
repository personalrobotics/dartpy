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

void _ZN4dart8dynamics23SkeletonRefCountingBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SkeletonRefCountingBase, ::boost::noncopyable >("SkeletonRefCountingBase", boost::python::no_init)
.def("getSkeleton", [](dart::dynamics::SkeletonRefCountingBase *self) -> std::shared_ptr<dart::dynamics::Skeleton> { return self->getSkeleton(); })
;
}

/* footer */
