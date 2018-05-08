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

void _ZN4dart8dynamics11WholeBodyIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WholeBodyIK, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("WholeBodyIK", boost::python::no_init)
.def("clone", [](const dart::dynamics::WholeBodyIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, (::boost::python::arg("_newSkel")))
.def("cloneWholeBodyIK", [](const dart::dynamics::WholeBodyIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::WholeBodyIK> { return self->cloneWholeBodyIK(_newSkel); }, (::boost::python::arg("_newSkel")))
.def("refreshIKHierarchy", [](dart::dynamics::WholeBodyIK *self) -> void { return self->refreshIKHierarchy(); })
.def("create", [](const dart::dynamics::SkeletonPtr & _skel) -> std::shared_ptr<dart::dynamics::WholeBodyIK> { return dart::dynamics::WholeBodyIK::create(_skel); }, (::boost::python::arg("_skel")))
.staticmethod("create")
;
}

/* footer */
