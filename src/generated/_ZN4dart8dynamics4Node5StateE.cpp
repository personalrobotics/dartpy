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

void _ZN4dart8dynamics4Node5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Node"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Cloneable<dart::dynamics::Node::State> > >("State", boost::python::no_init)
;
}

/* footer */
