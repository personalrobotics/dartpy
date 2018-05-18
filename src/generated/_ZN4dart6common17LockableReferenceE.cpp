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

void _ZN4dart6common17LockableReferenceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LockableReference, ::boost::noncopyable >("LockableReference", boost::python::no_init)
.def("lock", [](dart::common::LockableReference *self) -> void { return self->lock(); })
.def("try_lock", [](dart::common::LockableReference *self) -> bool { return self->try_lock(); })
.def("unlock", [](dart::common::LockableReference *self) -> void { return self->unlock(); })
;
}

/* footer */
