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

void _ZN4dart8dynamics18TranslationalJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TranslationalJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > > >("TranslationalJoint", boost::python::no_init)
.def("getTranslationalJointProperties", [](const dart::dynamics::TranslationalJoint *self) -> dart::dynamics::TranslationalJoint::Properties { return self->getTranslationalJointProperties(); })
.def("getType", [](const dart::dynamics::TranslationalJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::TranslationalJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("getRelativeJacobianStatic", [](const dart::dynamics::TranslationalJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::TranslationalJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
