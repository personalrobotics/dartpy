#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint14ConstraintBaseE_docstring[] = R"CHIMERA_STRING( Constraint is a base class of concrete constraints classes
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint14ConstraintBase12getDimensionEv_docstring[] = R"CHIMERA_STRING( Return dimesion of this constranit
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase6updateEv_docstring[] = R"CHIMERA_STRING( Update constraint using updated Skeleton's states
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase14getInformationEPNS0_14ConstraintInfoE_docstring[] = R"CHIMERA_STRING( Fill LCP variables
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase16applyUnitImpulseEm_docstring[] = R"CHIMERA_STRING( Apply unit impulse to constraint space
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase17getVelocityChangeEPdb_docstring[] = R"CHIMERA_STRING( Get velocity change due to the uint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase6exciteEv_docstring[] = R"CHIMERA_STRING( Excite the constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase8unexciteEv_docstring[] = R"CHIMERA_STRING( Unexcite the constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint14ConstraintBase12applyImpulseEPd_docstring[] = R"CHIMERA_STRING( Apply computed constraint impulse to constrained skeletons
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint14ConstraintBase8isActiveEv_docstring[] = R"CHIMERA_STRING( Return true if this constraint is active
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint14ConstraintBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintBase, ::boost::noncopyable >("ConstraintBase", _ZN4dart10constraint14ConstraintBaseE_docstring, boost::python::no_init)
.def("getDimension", [](const dart::constraint::ConstraintBase *self) -> std::size_t { return self->getDimension(); }, _ZNK4dart10constraint14ConstraintBase12getDimensionEv_docstring)
.def("update", [](dart::constraint::ConstraintBase *self) -> void { return self->update(); }, _ZN4dart10constraint14ConstraintBase6updateEv_docstring)
.def("getInformation", [](dart::constraint::ConstraintBase *self, dart::constraint::ConstraintInfo * _info) -> void { return self->getInformation(_info); }, _ZN4dart10constraint14ConstraintBase14getInformationEPNS0_14ConstraintInfoE_docstring, (::boost::python::arg("_info")))
.def("applyUnitImpulse", [](dart::constraint::ConstraintBase *self, std::size_t _index) -> void { return self->applyUnitImpulse(_index); }, _ZN4dart10constraint14ConstraintBase16applyUnitImpulseEm_docstring, (::boost::python::arg("_index")))
.def("getVelocityChange", [](dart::constraint::ConstraintBase *self, double * _vel, bool _withCfm) -> void { return self->getVelocityChange(_vel, _withCfm); }, _ZN4dart10constraint14ConstraintBase17getVelocityChangeEPdb_docstring, (::boost::python::arg("_vel"), ::boost::python::arg("_withCfm")))
.def("excite", [](dart::constraint::ConstraintBase *self) -> void { return self->excite(); }, _ZN4dart10constraint14ConstraintBase6exciteEv_docstring)
.def("unexcite", [](dart::constraint::ConstraintBase *self) -> void { return self->unexcite(); }, _ZN4dart10constraint14ConstraintBase8unexciteEv_docstring)
.def("applyImpulse", [](dart::constraint::ConstraintBase *self, double * _lambda) -> void { return self->applyImpulse(_lambda); }, _ZN4dart10constraint14ConstraintBase12applyImpulseEPd_docstring, (::boost::python::arg("_lambda")))
.def("isActive", [](const dart::constraint::ConstraintBase *self) -> bool { return self->isActive(); }, _ZNK4dart10constraint14ConstraintBase8isActiveEv_docstring)
.def("getRootSkeleton", [](const dart::constraint::ConstraintBase *self) -> dart::dynamics::SkeletonPtr { return self->getRootSkeleton(); })
.def("uniteSkeletons", [](dart::constraint::ConstraintBase *self) -> void { return self->uniteSkeletons(); })
.def("compressPath", [](dart::dynamics::SkeletonPtr _skeleton) -> dart::dynamics::SkeletonPtr { return dart::constraint::ConstraintBase::compressPath(_skeleton); }, (::boost::python::arg("_skeleton")))
.def("getRootSkeleton", [](dart::dynamics::SkeletonPtr _skeleton) -> dart::dynamics::SkeletonPtr { return dart::constraint::ConstraintBase::getRootSkeleton(_skeleton); }, (::boost::python::arg("_skeleton")))
.staticmethod("compressPath")
;
}

/* footer */
