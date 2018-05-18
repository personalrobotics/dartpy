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

void _ZN4dart8dynamics18TranslationalJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("TranslationalJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TranslationalJoint::Properties, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<3> > > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::TranslationalJoint::Properties * { return new dart::dynamics::TranslationalJoint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> >::Properties & _properties) -> dart::dynamics::TranslationalJoint::Properties * { return new dart::dynamics::TranslationalJoint::Properties(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
;
}

/* footer */
