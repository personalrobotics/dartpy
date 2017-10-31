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

void _ZN4dart8dynamics9WeldJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WeldJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::ZeroDofJoint > >("WeldJoint", boost::python::no_init)
.def("getWeldJointProperties", [](const dart::dynamics::WeldJoint *self) -> dart::dynamics::WeldJoint::Properties { return self->getWeldJointProperties(); })
.def("getType", [](const dart::dynamics::WeldJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::WeldJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setTransformFromParentBodyNode", [](dart::dynamics::WeldJoint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromParentBodyNode(_T); }, (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", [](dart::dynamics::WeldJoint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromChildBodyNode(_T); }, (::boost::python::arg("_T")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::WeldJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
