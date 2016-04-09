#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE_docstring[] = R"CHIMERA_STRING( The TaskSpaceRegion is a nicely generalized method for computing the error
 of an IK Problem.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this ErrorMethod to be cloned to a new IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion23computeDesiredTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of computing the desired
 given the current transform and error vector. If you want the desired
 transform to always be equal to the Target's transform, you can simply
 call ErrorMethod::computeDesiredTransform to implement this function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion12computeErrorEv_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of the error vector
 computation. The expectation is that the first three components of the
 vector will correspond to orientation error (in an angle-axis format)
 while the last three components correspond to translational error.
 When implementing this function, you should assume that the Skeleton's
 current joint positions corresponds to the positions that you
 must use to compute the error. This function will only get called when
 an update is needed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion20setComputeFromCenterEb_docstring[] = R"CHIMERA_STRING( Set whether this TaskSpaceRegion should compute its error vector from
 the center of the region.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion21isComputingFromCenterEv_docstring[] = R"CHIMERA_STRING( Get whether this TaskSpaceRegion is set to compute its error vector from
 the center of the region.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion28getTaskSpaceRegionPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this TaskSpaceRegion
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod > >("TaskSpaceRegion", _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::TaskSpaceRegion * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties & _properties) -> dart::dynamics::InverseKinematics::TaskSpaceRegion * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion(_ik, _properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
.def("computeDesiredTransform", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self, const Eigen::Isometry3d & _currentTf, const Eigen::Vector6d & _error) -> Eigen::Isometry3d { return self->computeDesiredTransform(_currentTf, _error); }, _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion23computeDesiredTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("computeError", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> Eigen::Vector6d { return self->computeError(); }, _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion12computeErrorEv_docstring)
.def("setComputeFromCenter", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self, bool computeFromCenter) -> void { return self->setComputeFromCenter(computeFromCenter); }, _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion20setComputeFromCenterEb_docstring, (::boost::python::arg("computeFromCenter")))
.def("isComputingFromCenter", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> bool { return self->isComputingFromCenter(); }, _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion21isComputingFromCenterEv_docstring)
.def("getTaskSpaceRegionProperties", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties { return self->getTaskSpaceRegionProperties(); }, _ZNK4dart8dynamics17InverseKinematics15TaskSpaceRegion28getTaskSpaceRegionPropertiesEv_docstring)
;
}

/* footer */
