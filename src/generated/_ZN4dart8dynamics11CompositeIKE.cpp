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

void _ZN4dart8dynamics11CompositeIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CompositeIK, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("CompositeIK", boost::python::no_init)
.def("clone", [](const dart::dynamics::CompositeIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, (::boost::python::arg("_newSkel")))
.def("cloneCompositeIK", [](const dart::dynamics::CompositeIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::CompositeIK> { return self->cloneCompositeIK(_newSkel); }, (::boost::python::arg("_newSkel")))
.def("addModule", [](dart::dynamics::CompositeIK *self, const std::shared_ptr<dart::dynamics::InverseKinematics> & _ik) -> bool { return self->addModule(_ik); }, (::boost::python::arg("_ik")))
.def("getModuleSet", [](dart::dynamics::CompositeIK *self) -> const dart::dynamics::CompositeIK::ModuleSet & { return self->getModuleSet(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getModuleSet", [](const dart::dynamics::CompositeIK *self) -> dart::dynamics::CompositeIK::ConstModuleSet { return self->getModuleSet(); })
.def("refreshIKHierarchy", [](dart::dynamics::CompositeIK *self) -> void { return self->refreshIKHierarchy(); })
.def("create", [](const dart::dynamics::SkeletonPtr & _skel) -> std::shared_ptr<dart::dynamics::CompositeIK> { return dart::dynamics::CompositeIK::create(_skel); }, (::boost::python::arg("_skel")))
.staticmethod("create")
;
}

/* footer */
