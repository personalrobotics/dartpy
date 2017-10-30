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

void _ZN4dart4math17integratePositionINS0_8SE3SpaceEEENT_5PointERKS4_RKNS3_6VectorEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("integratePosition", [](const dart::math::SE3Space::Point & pos, const dart::math::SE3Space::Vector & vel, double dt) -> dart::math::SE3Space::Point { return dart::math::integratePosition<dart::math::SE3Space>(pos, vel, dt); }, (::boost::python::arg("pos"), ::boost::python::arg("vel"), ::boost::python::arg("dt")));

}

/* footer */