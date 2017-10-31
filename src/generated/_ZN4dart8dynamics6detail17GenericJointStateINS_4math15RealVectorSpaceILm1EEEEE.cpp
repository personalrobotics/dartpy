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

void _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > >("R1JointState", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::EuclideanPoint & positions) -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(positions); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::EuclideanPoint & positions, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & velocities) -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(positions, velocities); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::EuclideanPoint & positions, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & velocities, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & accelerations) -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(positions, velocities, accelerations); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::EuclideanPoint & positions, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & velocities, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & accelerations, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & forces) -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(positions, velocities, accelerations, forces); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::EuclideanPoint & positions, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & velocities, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & accelerations, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & forces, const dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::Vector & commands) -> dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> > * { return new dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >(positions, velocities, accelerations, forces, commands); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"), ::boost::python::arg("commands"))))
.def_readwrite("mPositions", &dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::mPositions)
.def_readwrite("mVelocities", &dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::mVelocities)
.def_readwrite("mAccelerations", &dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::mAccelerations)
.def_readwrite("mForces", &dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::mForces)
.def_readwrite("mCommands", &dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::mCommands)
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >::NumDofs))
;
}

/* footer */
