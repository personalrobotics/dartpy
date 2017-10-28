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

void _ZN4dart6common6Aspect5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("Aspect"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Aspect::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Cloneable<dart::common::Aspect::State> > >("State", boost::python::no_init)
;
}

/* footer */
