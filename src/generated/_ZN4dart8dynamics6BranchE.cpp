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

void _ZN4dart8dynamics6BranchE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch, ::boost::noncopyable, dart::dynamics::BranchPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Branch", boost::python::no_init)
.def("isStillBranch", [](const dart::dynamics::Branch *self) -> bool { return self->isStillBranch(); })
.def("create", [](const dart::dynamics::Branch::Criteria & _criteria) -> dart::dynamics::BranchPtr { return dart::dynamics::Branch::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Branch::Criteria & _criteria, const std::string & _name) -> dart::dynamics::BranchPtr { return dart::dynamics::Branch::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
