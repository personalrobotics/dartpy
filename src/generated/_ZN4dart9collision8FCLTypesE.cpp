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

void _ZN4dart9collision8FCLTypesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLTypes, ::boost::noncopyable >("FCLTypes", boost::python::no_init)
.def("convertVector3", [](const Eigen::Vector3d & _vec) -> dart::collision::fcl::Vector3 { return dart::collision::FCLTypes::convertVector3(_vec); }, (::boost::python::arg("_vec")))
.def("convertVector3", [](const dart::collision::fcl::Vector3 & _vec) -> Eigen::Vector3d { return dart::collision::FCLTypes::convertVector3(_vec); }, (::boost::python::arg("_vec")))
.def("convertMatrix3x3", [](const Eigen::Matrix3d & _R) -> dart::collision::fcl::Matrix3 { return dart::collision::FCLTypes::convertMatrix3x3(_R); }, (::boost::python::arg("_R")))
.def("convertTransform", [](const Eigen::Isometry3d & _T) -> dart::collision::fcl::Transform3 { return dart::collision::FCLTypes::convertTransform(_T); }, (::boost::python::arg("_T")))
.staticmethod("convertMatrix3x3")
.staticmethod("convertTransform")
.staticmethod("convertVector3")
;
}

/* footer */
