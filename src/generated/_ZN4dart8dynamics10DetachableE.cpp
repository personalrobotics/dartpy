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

void _ZN4dart8dynamics10DetachableE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Detachable, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("Detachable", boost::python::no_init)
.def("setParentFrame", [](dart::dynamics::Detachable *self, dart::dynamics::Frame * _newParentFrame) -> void { return self->setParentFrame(_newParentFrame); }, (::boost::python::arg("_newParentFrame")))
;
}

/* footer */
