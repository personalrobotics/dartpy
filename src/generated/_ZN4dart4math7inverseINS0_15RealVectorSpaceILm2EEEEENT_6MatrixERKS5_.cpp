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

void _ZN4dart4math7inverseINS0_15RealVectorSpaceILm2EEEEENT_6MatrixERKS5_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("inverse", [](const dart::math::RealVectorSpace<2>::Matrix & mat) -> dart::math::RealVectorSpace<2>::Matrix { return dart::math::inverse<dart::math::RealVectorSpace<2>>(mat); }, (::boost::python::arg("mat")));

}

/* footer */
