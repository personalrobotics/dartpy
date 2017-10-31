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

void _ZN4dart4math16toEuclideanPointINS0_15RealVectorSpaceILm1EEEEENT_14EuclideanPointERKNS4_5PointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("toEuclideanPoint", [](const dart::math::RealVectorSpace<1>::Point & point) -> dart::math::RealVectorSpace<1>::EuclideanPoint { return dart::math::toEuclideanPoint<dart::math::RealVectorSpace<1>>(point); }, (::boost::python::arg("point")));

}

/* footer */
