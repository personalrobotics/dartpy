#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision8FCLTypes14convertVector3ERKN3fcl6Vec3fXINS2_7details8Vec3DataIdEEEE_docstring[] = R"CHIMERA_STRING( Convert FCL vector3 type to Eigen vector3 type
)CHIMERA_STRING";

constexpr char _ZN4dart9collision8FCLTypes14convertVector3ERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Convert Eigen vector3 type to FCL vector3 type
)CHIMERA_STRING";

constexpr char _ZN4dart9collision8FCLTypes16convertMatrix3x3ERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring[] = R"CHIMERA_STRING( Convert FCL matrix3x3 type to Eigen matrix3x3 type
)CHIMERA_STRING";

constexpr char _ZN4dart9collision8FCLTypes16convertTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Convert FCL transformation type to Eigen transformation type
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision8FCLTypesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLTypes, ::boost::noncopyable >("FCLTypes", boost::python::no_init)
.def("convertVector3", [](const fcl::Vec3f & _vec) -> Eigen::Vector3d { return dart::collision::FCLTypes::convertVector3(_vec); }, (::boost::python::arg("_vec")))
.def("convertVector3", [](const Eigen::Vector3d & _vec) -> fcl::Vec3f { return dart::collision::FCLTypes::convertVector3(_vec); }, (::boost::python::arg("_vec")))
.def("convertMatrix3x3", [](const Eigen::Matrix3d & _R) -> fcl::Matrix3f { return dart::collision::FCLTypes::convertMatrix3x3(_R); }, (::boost::python::arg("_R")))
.def("convertTransform", [](const Eigen::Isometry3d & _T) -> fcl::Transform3f { return dart::collision::FCLTypes::convertTransform(_T); }, (::boost::python::arg("_T")))
.staticmethod("convertMatrix3x3")
.staticmethod("convertTransform")
.staticmethod("convertVector3")
;
}

/* footer */
