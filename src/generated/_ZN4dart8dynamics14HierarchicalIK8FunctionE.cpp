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

void _ZN4dart8dynamics14HierarchicalIK8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("HierarchicalIK"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::HierarchicalIK::Function, ::boost::noncopyable >("Function", boost::python::no_init)
.def("clone", [](const dart::dynamics::HierarchicalIK::Function *self, const std::shared_ptr<dart::dynamics::HierarchicalIK> & _newIK) -> dart::optimizer::FunctionPtr { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
;
}

/* footer */
