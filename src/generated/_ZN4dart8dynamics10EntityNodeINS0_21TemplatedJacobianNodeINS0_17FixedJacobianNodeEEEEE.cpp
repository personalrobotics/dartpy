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

void _ZN4dart8dynamics10EntityNodeINS0_21TemplatedJacobianNodeINS0_17FixedJacobianNodeEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::EntityNodeBase<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode>, false> > >("_ZN4dart8dynamics10EntityNodeINS0_21TemplatedJacobianNodeINS0_17FixedJacobianNodeEEEEE", boost::python::no_init)
.def("setAspectProperties", [](dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> > *self, const dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties>::Properties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setName", [](dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> > *self, const std::string & newName) -> const std::string & { return self->setName(newName); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("newName")))
.def("getName", [](const dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> > *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
