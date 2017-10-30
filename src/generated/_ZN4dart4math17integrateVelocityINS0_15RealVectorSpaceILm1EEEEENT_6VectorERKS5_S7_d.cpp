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

/* postinclude */

void _ZN4dart4math17integrateVelocityINS0_15RealVectorSpaceILm1EEEEENT_6VectorERKS5_S7_d()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("integrateVelocity", [](const dart::math::RealVectorSpace<1>::Vector & vel, const dart::math::RealVectorSpace<1>::Vector & acc, double dt) -> dart::math::RealVectorSpace<1>::Vector { return dart::math::integrateVelocity<dart::math::RealVectorSpace<1>>(vel, acc, dt); }, (::boost::python::arg("vel"), ::boost::python::arg("acc"), ::boost::python::arg("dt")));

}

/* footer */
