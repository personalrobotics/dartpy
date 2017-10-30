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

void _ZN4dart4math15toManifoldPointINS0_15RealVectorSpaceILm3EEEEENT_5PointERKNS4_14EuclideanPointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("toManifoldPoint", [](const dart::math::RealVectorSpace<3>::EuclideanPoint & point) -> dart::math::RealVectorSpace<3>::Point { return dart::math::toManifoldPoint<dart::math::RealVectorSpace<3>>(point); }, (::boost::python::arg("point")));

}

/* footer */
