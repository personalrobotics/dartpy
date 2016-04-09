#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail21PlanarJointPropertiesE_docstring[] = R"CHIMERA_STRING( Properties that are unique to PlanarJoints. Note that the mPlaneType
 member has greater authority than the mTransAxis1 and mTransAxis2 members.
 When copying properties into a PlanarJoint, it will first defer to
 mPlaneType. If mPlaneType is PlaneType::ARBITRARY, then and only then will
 it use mTransAxis1 and mTransAxis2. mRotAxis has no authority; it will
 always be recomputed from mTransAxis1 and mTransAxis2 when copying it into a
 PlanarJoint
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail21PlanarJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PlanarJointProperties, ::boost::python::bases<dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::detail::MultiDofJointProperties<3> > >("PlanarJointProperties", _ZN4dart8dynamics6detail21PlanarJointPropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::PlanarJointProperties * { return new dart::dynamics::detail::PlanarJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<3>::Properties & _multiDofProperties) -> dart::dynamics::detail::PlanarJointProperties * { return new dart::dynamics::detail::PlanarJointProperties(_multiDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<3>::Properties & _multiDofProperties, const dart::dynamics::detail::PlanarJointUniqueProperties & _planarProperties) -> dart::dynamics::detail::PlanarJointProperties * { return new dart::dynamics::detail::PlanarJointProperties(_multiDofProperties, _planarProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_planarProperties"))))
;
}

/* footer */
