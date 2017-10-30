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

void _ZN4dart4math8toRadianIeEET_RKS2_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("toRadian", [](const long double & degree) -> long double { return dart::math::toRadian<long double>(degree); }, (::boost::python::arg("degree")));

}

/* footer */
