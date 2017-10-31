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

void _ZN4dart4math15RealVectorSpaceILm3EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::math::RealVectorSpace<3>, ::boost::noncopyable >("R3Space", boost::python::no_init)
.add_static_property("NumDofs", ::boost::python::make_getter(dart::math::RealVectorSpace<3>::NumDofs))
.add_static_property("NumDofsEigen", ::boost::python::make_getter(dart::math::RealVectorSpace<3>::NumDofsEigen))
;
}

/* footer */
