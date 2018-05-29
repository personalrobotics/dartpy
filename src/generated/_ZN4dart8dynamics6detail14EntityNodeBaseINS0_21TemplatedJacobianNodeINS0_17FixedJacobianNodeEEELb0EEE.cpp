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

void _ZN4dart8dynamics6detail14EntityNodeBaseINS0_21TemplatedJacobianNodeINS0_17FixedJacobianNodeEEELb0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EntityNodeBase<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode>, false>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode>, dart::common::EmbedProperties<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties> > >("_ZN4dart8dynamics6detail14EntityNodeBaseINS0_21TemplatedJacobianNodeINS0_17FixedJacobianNodeEEELb0EEE", boost::python::no_init)
;
}

/* footer */
