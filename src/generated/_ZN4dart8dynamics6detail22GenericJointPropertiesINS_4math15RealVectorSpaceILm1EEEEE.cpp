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

void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm1EEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> >, ::boost::python::bases<dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::JointProperties > >("R1JointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & jointProperties) -> dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> >(jointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("jointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & jointProperties, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> > & genericProperties) -> dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> >(jointProperties, genericProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("jointProperties"), ::boost::python::arg("genericProperties"))))
;
}

/* footer */
