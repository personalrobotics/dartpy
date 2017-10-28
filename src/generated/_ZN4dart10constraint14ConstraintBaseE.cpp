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

void _ZN4dart10constraint14ConstraintBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintBase, ::boost::noncopyable >("ConstraintBase", boost::python::no_init)
.def("getDimension", [](const dart::constraint::ConstraintBase *self) -> std::size_t { return self->getDimension(); })
.def("update", [](dart::constraint::ConstraintBase *self) -> void { return self->update(); })
.def("getInformation", [](dart::constraint::ConstraintBase *self, dart::constraint::ConstraintInfo * _info) -> void { return self->getInformation(_info); }, (::boost::python::arg("_info")))
.def("applyUnitImpulse", [](dart::constraint::ConstraintBase *self, std::size_t _index) -> void { return self->applyUnitImpulse(_index); }, (::boost::python::arg("_index")))
.def("getVelocityChange", [](dart::constraint::ConstraintBase *self, double * _vel, bool _withCfm) -> void { return self->getVelocityChange(_vel, _withCfm); }, (::boost::python::arg("_vel"), ::boost::python::arg("_withCfm")))
.def("excite", [](dart::constraint::ConstraintBase *self) -> void { return self->excite(); })
.def("unexcite", [](dart::constraint::ConstraintBase *self) -> void { return self->unexcite(); })
.def("applyImpulse", [](dart::constraint::ConstraintBase *self, double * _lambda) -> void { return self->applyImpulse(_lambda); }, (::boost::python::arg("_lambda")))
.def("isActive", [](const dart::constraint::ConstraintBase *self) -> bool { return self->isActive(); })
.def("getRootSkeleton", [](const dart::constraint::ConstraintBase *self) -> dart::dynamics::SkeletonPtr { return self->getRootSkeleton(); })
.def("uniteSkeletons", [](dart::constraint::ConstraintBase *self) -> void { return self->uniteSkeletons(); })
.def("compressPath", [](dart::dynamics::SkeletonPtr _skeleton) -> dart::dynamics::SkeletonPtr { return dart::constraint::ConstraintBase::compressPath(_skeleton); }, (::boost::python::arg("_skeleton")))
.def("getRootSkeleton", [](dart::dynamics::SkeletonPtr _skeleton) -> dart::dynamics::SkeletonPtr { return dart::constraint::ConstraintBase::getRootSkeleton(_skeleton); }, (::boost::python::arg("_skeleton")))
.staticmethod("compressPath")
;
}

/* footer */
