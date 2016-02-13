#include <vector>
#include <dartpy/collections.h>
#include <dartpy/util.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* main postinclude */

BOOST_PYTHON_MODULE(dartpy)
{
boost::python::import("boost_numpy_eigen");

// std::shared_ptr implicit conversions
boost::python::implicitly_convertible<
  std::shared_ptr<dart::common::LocalResourceRetriever>,
  std::shared_ptr<dart::common::ResourceRetriever>>(); 

boost::python::implicitly_convertible<
  std::shared_ptr<dart::utils::PackageResourceRetriever>,
  std::shared_ptr<dart::common::ResourceRetriever>>(); 

// misc implicit conversions
boost::python::implicitly_convertible<
  std::string, dart::common::Uri>(); 

// std::vector converters
dart::python::util::vector_to_python<size_t>();
dart::python::util::collection_from_python<std::vector<size_t>>();

dart::python::util::vector_to_python<Eigen::Vector3d>();
dart::python::util::collection_from_python<
  std::vector<Eigen::Vector3d>>();

dart::python::util::vector_to_python<Eigen::Vector3i>();
dart::python::util::collection_from_python<
  std::vector<Eigen::Vector3i>>();

dart::python::util::vector_to_python<
  dart::dynamics::PointMass::Properties>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::PointMass::Properties>>();

dart::python::util::vector_to_python<dart::collision::Contact>();
dart::python::util::collection_from_python<
  std::vector<dart::collision::Contact>>();

dart::python::util::vector_to_python<dart::dynamics::SkeletonPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::SkeletonPtr>>();

dart::python::util::vector_to_python<dart::dynamics::ShapePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::ShapePtr>>();

dart::python::util::vector_to_python<
  dart::dynamics::BodyNode*, dart::dynamics::BodyNodePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::BodyNode*>>();

dart::python::util::vector_to_python<
  dart::dynamics::SoftBodyNode*, dart::dynamics::SoftBodyNodePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::SoftBodyNode*>>();

dart::python::util::vector_to_python<
  dart::dynamics::EndEffector*, dart::dynamics::EndEffectorPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::EndEffector*>>();

dart::python::util::vector_to_python<
  dart::dynamics::DegreeOfFreedom*, dart::dynamics::DegreeOfFreedomPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::DegreeOfFreedom*>>();

  void _ZN4dart6common12AddonManagerE();
  _ZN4dart6common12AddonManagerE();

  void _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();
  _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();

  void _ZN4dart8dynamics33SpecializedNodeManagerForBodyNodeIJNS0_11EndEffectorEEEE();
  _ZN4dart8dynamics33SpecializedNodeManagerForBodyNodeIJNS0_11EndEffectorEEEE();

  void _ZN4dart8dynamics23SkeletonRefCountingBaseE();
  _ZN4dart8dynamics23SkeletonRefCountingBaseE();

  void _ZN4dart6common7SubjectE();
  _ZN4dart6common7SubjectE();

  void _ZN4dart8dynamics6EntityE();
  _ZN4dart8dynamics6EntityE();

  void _ZN4dart8dynamics5FrameE();
  _ZN4dart8dynamics5FrameE();

  void _ZN4dart8dynamics4NodeE();
  _ZN4dart8dynamics4NodeE();

  void _ZN4dart8dynamics12JacobianNodeE();
  _ZN4dart8dynamics12JacobianNodeE();

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();
  _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();

  void _ZN4dart8dynamics8BodyNodeE();
  _ZN4dart8dynamics8BodyNodeE();

  void _ZN4dart9collision13CollisionNodeE();
  _ZN4dart9collision13CollisionNodeE();

  void _ZN4dart8dynamics12MetaSkeletonE();
  _ZN4dart8dynamics12MetaSkeletonE();

  void _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();
  _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();

  void _ZN4dart8dynamics33SpecializedNodeManagerForSkeletonIJNS0_11EndEffectorEEEE();
  _ZN4dart8dynamics33SpecializedNodeManagerForSkeletonIJNS0_11EndEffectorEEEE();

  void _ZN4dart8dynamics8SkeletonE();
  _ZN4dart8dynamics8SkeletonE();

  void _ZN4dart8dynamicsL13INVALID_INDEXE();
  _ZN4dart8dynamicsL13INVALID_INDEXE();

  void _ZN4dart8dynamics14NodeDestructorE();
  _ZN4dart8dynamics14NodeDestructorE();

  void _ZN4dart8dynamics10DetachableE();
  _ZN4dart8dynamics10DetachableE();

  void _ZN4dart8dynamics11SimpleFrameE();
  _ZN4dart8dynamics11SimpleFrameE();

  void _ZN4dart8dynamics19ReferentialSkeletonE();
  _ZN4dart8dynamics19ReferentialSkeletonE();

  void _ZN4dart8dynamics5GroupE();
  _ZN4dart8dynamics5GroupE();

  void _ZN4dart8dynamics7LinkageE();
  _ZN4dart8dynamics7LinkageE();

  void _ZN4dart8dynamics6BranchE();
  _ZN4dart8dynamics6BranchE();

  void _ZN4dart8dynamics5ChainE();
  _ZN4dart8dynamics5ChainE();

  void _ZN4dart8dynamics5ShapeE();
  _ZN4dart8dynamics5ShapeE();

  void _ZN4dart8dynamics9MeshShapeE();
  _ZN4dart8dynamics9MeshShapeE();

  void _ZN4dart8dynamics10ArrowShapeE();
  _ZN4dart8dynamics10ArrowShapeE();

  void _ZN4dart8dynamics8BoxShapeE();
  _ZN4dart8dynamics8BoxShapeE();

  void _ZN4dart8dynamics13CylinderShapeE();
  _ZN4dart8dynamics13CylinderShapeE();

  void _ZN4dart8dynamics14EllipsoidShapeE();
  _ZN4dart8dynamics14EllipsoidShapeE();

  void _ZN4dart8dynamics16LineSegmentShapeE();
  _ZN4dart8dynamics16LineSegmentShapeE();

  void _ZN4dart8dynamics10PlaneShapeE();
  _ZN4dart8dynamics10PlaneShapeE();

  void _ZN4dart8dynamics13SoftMeshShapeE();
  _ZN4dart8dynamics13SoftMeshShapeE();

  void _ZN4dart8dynamics12SoftBodyNodeE();
  _ZN4dart8dynamics12SoftBodyNodeE();

  void _ZN4dart8dynamics5JointE();
  _ZN4dart8dynamics5JointE();

  void _ZN4dart8dynamics15DegreeOfFreedomE();
  _ZN4dart8dynamics15DegreeOfFreedomE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics7SupportEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics7SupportEEEE();

  void _ZN4dart8dynamics10FixedFrameE();
  _ZN4dart8dynamics10FixedFrameE();

  void _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE();
  _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE();

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE();
  _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE();

  void _ZN4dart8dynamics11EndEffectorE();
  _ZN4dart8dynamics11EndEffectorE();

  void _ZN4dart8dynamics17InverseKinematicsE();
  _ZN4dart8dynamics17InverseKinematicsE();

  void _ZN4dart9collision7ContactE();
  _ZN4dart9collision7ContactE();

  void _ZN4dart9collision17CollisionDetectorE();
  _ZN4dart9collision17CollisionDetectorE();

  void _ZN4dart4math17makeSkewSymmetricERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math17makeSkewSymmetricERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math17fromSkewSymmetricERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math17fromSkewSymmetricERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math9expToQuatERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math9expToQuatERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math9quatToExpERKN5Eigen10QuaternionIdLi0EEE();
  _ZN4dart4math9quatToExpERKN5Eigen10QuaternionIdLi0EEE();

  void _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEEddd();
  _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEEddd();

  void _ZN4dart4math9quatDerivERKN5Eigen10QuaternionIdLi0EEEi();
  _ZN4dart4math9quatDerivERKN5Eigen10QuaternionIdLi0EEEi();

  void _ZN4dart4math15quatSecondDerivERKN5Eigen10QuaternionIdLi0EEEii();
  _ZN4dart4math15quatSecondDerivERKN5Eigen10QuaternionIdLi0EEEii();

  void _ZN4dart4math16eulerXYXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerXYXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerXYZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerXYZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerXZXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerXZXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerXZYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerXZYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerYXYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerYXYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerYXZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerYXZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerYZXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerYZXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerYZYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerYZYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerZXYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerZXYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerZYXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerZYXToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerZXZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerZXZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16eulerZYZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math16eulerZYZToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math16matrixToEulerXYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerXYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerXYZERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerXYZERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerXZYERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerXZYERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerYXZERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerYXZERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerYZXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerYZXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerZXYERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerZXYERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math16matrixToEulerZYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math16matrixToEulerZYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math6expMapERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math6expMapERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math10expAngularERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math10expAngularERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math9expMapRotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math9expMapRotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math9expMapJacERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math9expMapJacERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math12expMapJacDotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_();
  _ZN4dart4math12expMapJacDotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_();

  void _ZN4dart4math14expMapJacDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEi();
  _ZN4dart4math14expMapJacDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEi();

  void _ZN4dart4math6logMapERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math6logMapERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math6logMapERKN5Eigen9TransformIdLi3ELi1ELi0EEE();
  _ZN4dart4math6logMapERKN5Eigen9TransformIdLi3ELi1ELi0EEE();

  void _ZN4dart4math3AdTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math3AdTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math12getAdTMatrixERKN5Eigen9TransformIdLi3ELi1ELi0EEE();
  _ZN4dart4math12getAdTMatrixERKN5Eigen9TransformIdLi3ELi1ELi0EEE();

  void _ZN4dart4math6AdTJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math6AdTJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math11AdTJacFixedERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math11AdTJacFixedERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math3AdRERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math3AdRERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math10AdTAngularERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math10AdTAngularERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math9AdTLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math9AdTLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math6AdRJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math6AdRJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math9AdRInvJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math9AdRInvJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math9AdRInvJacIN5Eigen6MatrixIdLi6ELin1ELi0ELi6ELin1EEEEENT_11PlainObjectERKNS2_9TransformIdLi3ELi1ELi0EEERKNS2_10MatrixBaseIS5_EE();
  _ZN4dart4math9AdRInvJacIN5Eigen6MatrixIdLi6ELin1ELi0ELi6ELin1EEEEENT_11PlainObjectERKNS2_9TransformIdLi3ELi1ELi0EEERKNS2_10MatrixBaseIS5_EE();

  void _ZN4dart4math5adJacERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math5adJacERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math6AdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math6AdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math9AdInvTJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math9AdInvTJacERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math14AdInvTJacFixedERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();
  _ZN4dart4math14AdInvTJacFixedERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_10MatrixBaseIT_EE();

  void _ZN4dart4math12AdInvRLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart4math12AdInvRLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart4math4dAdTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math4dAdTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math7dAdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math7dAdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math7dAdInvRERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart4math7dAdInvRERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart4math2adERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_();
  _ZN4dart4math2adERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_();

  void _ZN4dart4math3dadERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_();
  _ZN4dart4math3dadERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_();

  void _ZN4dart4math16transformInertiaERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi6ELi0ELi6ELi6EEE();
  _ZN4dart4math16transformInertiaERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi6ELi0ELi6ELi6EEE();

  void _ZN4dart4math19parallelAxisTheoremERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEERKNS2_IdLi3ELi1ELi0ELi3ELi1EEEd();
  _ZN4dart4math19parallelAxisTheoremERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEERKNS2_IdLi3ELi1ELi0ELi3ELi1EEEd();

  void _ZN4dart4math8AxisTypeE();
  _ZN4dart4math8AxisTypeE();

  void _ZN4dart4math15computeRotationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEENS0_8AxisTypeE();
  _ZN4dart4math15computeRotationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEENS0_8AxisTypeE();

  void _ZN4dart4math16computeTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_NS0_8AxisTypeE();
  _ZN4dart4math16computeTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_NS0_8AxisTypeE();

  void _ZN4dart4math19getFrameOriginAxisZERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_();
  _ZN4dart4math19getFrameOriginAxisZERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_();

  void _ZN4dart4math14verifyRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();
  _ZN4dart4math14verifyRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE();

  void _ZN4dart4math15verifyTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE();
  _ZN4dart4math15verifyTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE();

  void _ZN4dart4math8wrapToPiEd();
  _ZN4dart4math8wrapToPiEd();

  void _ZN4dart4math16extractNullSpaceERKN5Eigen9JacobiSVDIT_Li2EEERT0_();
  _ZN4dart4math16extractNullSpaceERKN5Eigen9JacobiSVDIT_Li2EEERT0_();

  void _ZN4dart4math16computeNullSpaceERKT_RT0_();
  _ZN4dart4math16computeNullSpaceERKT_RT0_();

  void _ZN4dart4math21computeSupportPolgyonERKSt6vectorIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS4_EERKS4_SA_();
  _ZN4dart4math21computeSupportPolgyonERKSt6vectorIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS4_EERKS4_SA_();

  void _ZN4dart4math21computeSupportPolgyonERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS7_EERKS7_SD_();
  _ZN4dart4math21computeSupportPolgyonERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS7_EERKS7_SD_();

  void _ZN4dart4math17computeConvexHullERKSt6vectorIN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS2_17aligned_allocatorIS4_EEE();
  _ZN4dart4math17computeConvexHullERKSt6vectorIN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS2_17aligned_allocatorIS4_EEE();

  void _ZN4dart4math17computeConvexHullERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS5_17aligned_allocatorIS7_EEE();
  _ZN4dart4math17computeConvexHullERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS5_17aligned_allocatorIS7_EEE();

  void _ZN4dart4math21computeCentroidOfHullERKSt6vectorIN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS2_17aligned_allocatorIS4_EEE();
  _ZN4dart4math21computeCentroidOfHullERKSt6vectorIN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS2_17aligned_allocatorIS4_EEE();

  void _ZN4dart4math14Intersection_tE();
  _ZN4dart4math14Intersection_tE();

  void _ZN4dart4math19computeIntersectionERN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKS3_S6_S6_S6_();
  _ZN4dart4math19computeIntersectionERN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKS3_S6_S6_S6_();

  void _ZN4dart4math5crossERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_();
  _ZN4dart4math5crossERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_();

  void _ZN4dart4math22isInsideSupportPolygonERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS3_NS1_17aligned_allocatorIS3_EEEb();
  _ZN4dart4math22isInsideSupportPolygonERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS3_NS1_17aligned_allocatorIS3_EEEb();

  void _ZN4dart4math32computeClosestPointOnLineSegmentERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_S5_();
  _ZN4dart4math32computeClosestPointOnLineSegmentERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_S5_();

  void _ZN4dart4math35computeClosestPointOnSupportPolygonERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS3_NS1_17aligned_allocatorIS3_EEE();
  _ZN4dart4math35computeClosestPointOnSupportPolygonERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS3_NS1_17aligned_allocatorIS3_EEE();

  void _ZN4dart4math35computeClosestPointOnSupportPolygonERmS1_RKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS4_NS2_17aligned_allocatorIS4_EEE();
  _ZN4dart4math35computeClosestPointOnSupportPolygonERmS1_RKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS4_NS2_17aligned_allocatorIS4_EEE();

  void _ZN4dart4math11BoundingBoxE();
  _ZN4dart4math11BoundingBoxE();

  void _ZN4dart6common8ObserverE();
  _ZN4dart6common8ObserverE();

  void _ZN4dart8renderer15RenderInterfaceE();
  _ZN4dart8renderer15RenderInterfaceE();

  void _ZN4dart8dynamics5Shape9ShapeTypeE();
  _ZN4dart8dynamics5Shape9ShapeTypeE();

  void _ZN4dart8dynamics5Shape12DataVarianceE();
  _ZN4dart8dynamics5Shape12DataVarianceE();

  void _ZN4dart9collision7collideESt10shared_ptrIKNS_8dynamics5ShapeEERKN5Eigen9TransformIdLi3ELi1ELi0EEES5_SA_PSt6vectorINS0_7ContactESaISC_EE();
  _ZN4dart9collision7collideESt10shared_ptrIKNS_8dynamics5ShapeEERKN5Eigen9TransformIdLi3ELi1ELi0EEES5_SA_PSt6vectorINS0_7ContactESaISC_EE();

  void _ZN4dart9collision13collideBoxBoxERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEES5_S9_PSt6vectorINS0_7ContactESaISB_EE();
  _ZN4dart9collision13collideBoxBoxERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEES5_S9_PSt6vectorINS0_7ContactESaISB_EE();

  void _ZN4dart9collision16collideBoxSphereERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEERKdS9_PSt6vectorINS0_7ContactESaISD_EE();
  _ZN4dart9collision16collideBoxSphereERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEERKdS9_PSt6vectorINS0_7ContactESaISD_EE();

  void _ZN4dart9collision16collideSphereBoxERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE();
  _ZN4dart9collision16collideSphereBoxERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE();

  void _ZN4dart9collision19collideSphereSphereERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE();
  _ZN4dart9collision19collideSphereSphereERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE();

  void _ZN4dart9collision21collideCylinderSphereERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE();
  _ZN4dart9collision21collideCylinderSphereERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE();

  void _ZN4dart9collision20collideCylinderPlaneERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE();
  _ZN4dart9collision20collideCylinderPlaneERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE();

  void _ZN4dart9collision21DARTCollisionDetectorE();
  _ZN4dart9collision21DARTCollisionDetectorE();

  void _ZN4dart9collision16FCLCollisionNodeE();
  _ZN4dart9collision16FCLCollisionNodeE();

  void _ZN4dart9collision20FCLCollisionDetectorE();
  _ZN4dart9collision20FCLCollisionDetectorE();

  void _ZN4dart9collision11FCLUserDataE();
  _ZN4dart9collision11FCLUserDataE();

  void _ZN4dart9collision8FCLTypesE();
  _ZN4dart9collision8FCLTypesE();

  void _ZN4dart9collision10createMeshEfffPK7aiSceneRKN3fcl11Transform3fE();
  _ZN4dart9collision10createMeshEfffPK7aiSceneRKN3fcl11Transform3fE();

  void _ZN4dart9collision15createEllipsoidEfffRKN3fcl11Transform3fE();
  _ZN4dart9collision15createEllipsoidEfffRKN3fcl11Transform3fE();

  void _ZN4dart9collision10createCubeEfffRKN3fcl11Transform3fE();
  _ZN4dart9collision10createCubeEfffRKN3fcl11Transform3fE();

  void _ZN4dart9collision14createCylinderEdddiiRKN3fcl11Transform3fE();
  _ZN4dart9collision14createCylinderEdddiiRKN3fcl11Transform3fE();

  void _ZN4dart8dynamics9PointMassE();
  _ZN4dart8dynamics9PointMassE();

  void _ZN4dart9collision24FCLMeshCollisionDetectorE();
  _ZN4dart9collision24FCLMeshCollisionDetectorE();

  void _ZN4dart9collision20FCLMeshCollisionNodeE();
  _ZN4dart9collision20FCLMeshCollisionNodeE();

  void _ZN4dart9collision14createSoftMeshEPK6aiMeshRKN3fcl11Transform3fE();
  _ZN4dart9collision14createSoftMeshEPK6aiMeshRKN3fcl11Transform3fE();

  void _ZN4dart6common10ExtensibleINS0_5Addon5StateEEE();
  _ZN4dart6common10ExtensibleINS0_5Addon5StateEEE();

  void _ZN4dart6common10ExtensibleINS0_5Addon10PropertiesEEE();
  _ZN4dart6common10ExtensibleINS0_5Addon10PropertiesEEE();

  void _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE();
  _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE();

  void _ZN4dart6common10ExtensibleINS_8dynamics4Node10PropertiesEEE();
  _ZN4dart6common10ExtensibleINS_8dynamics4Node10PropertiesEEE();

  void _ZN4dart6common5Addon5StateE();
  _ZN4dart6common5Addon5StateE();

  void _ZN4dart8dynamics6detail16SupportStateDataE();
  _ZN4dart8dynamics6detail16SupportStateDataE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE();

  void _ZN4dart6common5Addon10PropertiesE();
  _ZN4dart6common5Addon10PropertiesE();

  void _ZN4dart8dynamics6detail21SupportPropertiesDataE();
  _ZN4dart8dynamics6detail21SupportPropertiesDataE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();

  void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();
  _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();
  _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail30SingleDofJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30SingleDofJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();
  _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();
  _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();

  void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE();
  _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE();

  void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE();
  _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE();

  void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_16ExtensibleVectorIS4_INS_8dynamics4Node10PropertiesESt14default_deleteIS8_EEEES9_ISC_EESt4lessIS3_ESaISt4pairIKS3_SE_EEEEE();
  _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_16ExtensibleVectorIS4_INS_8dynamics4Node10PropertiesESt14default_deleteIS8_EEEES9_ISC_EESt4lessIS3_ESaISt4pairIKS3_SE_EEEEE();

  void _ZN4dart6common6detail4NoOpEDpT_();
  _ZN4dart6common6detail4NoOpEDpT_();

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics6detail19SingleDofJointAddonEEEEvDpT_();
  _ZN4dart6common6detail4NoOpIJPNS_8dynamics6detail19SingleDofJointAddonEEEEvDpT_();

  void _ZN4dart6common5AddonE();
  _ZN4dart6common5AddonE();

  void _ZN4dart6common8colorMsgERKSsi();
  _ZN4dart6common8colorMsgERKSsi();

  void _ZN4dart6common8colorErrERKSsS2_ji();
  _ZN4dart6common8colorErrERKSsS2_ji();

  void _ZN4dart6common5EmptyE();
  _ZN4dart6common5EmptyE();

  void _ZN4dart6common7NoArg_tE();
  _ZN4dart6common7NoArg_tE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();

  void _ZN4dart8dynamics13MultiDofJointILm3EEE();
  _ZN4dart8dynamics13MultiDofJointILm3EEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15EulerJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15EulerJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail15EulerJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail15EulerJointAddonEEEEEEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail16PlanarJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail16PlanarJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail16PlanarJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail16PlanarJointAddonEEEEEEE();

  void _ZN4dart8dynamics14SingleDofJointE();
  _ZN4dart8dynamics14SingleDofJointE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail19PrismaticJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail19PrismaticJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail19PrismaticJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail19PrismaticJointAddonEEEEEEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18RevoluteJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18RevoluteJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail18RevoluteJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail18RevoluteJointAddonEEEEEEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15ScrewJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15ScrewJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail15ScrewJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail15ScrewJointAddonEEEEEEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();

  void _ZN4dart8dynamics13MultiDofJointILm2EEE();
  _ZN4dart8dynamics13MultiDofJointILm2EEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail19UniversalJointAddonEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail19UniversalJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_23SpecializedAddonManagerIJNS2_6detail19UniversalJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_23SpecializedAddonManagerIJNS2_6detail19UniversalJointAddonEEEEEEE();

  void _ZN4dart6common8ResourceE();
  _ZN4dart6common8ResourceE();

  void _ZN4dart6common8Resource8SeekTypeE();
  _ZN4dart6common8Resource8SeekTypeE();

  void _ZN4dart6common13LocalResourceE();
  _ZN4dart6common13LocalResourceE();

  void _ZN4dart6common12UriComponentE();
  _ZN4dart6common12UriComponentE();

  void _ZN4dart6common3UriE();
  _ZN4dart6common3UriE();

  void _ZN4dart6common17ResourceRetrieverE();
  _ZN4dart6common17ResourceRetrieverE();

  void _ZN4dart6common22LocalResourceRetrieverE();
  _ZN4dart6common22LocalResourceRetrieverE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics8BodyNodeEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics8BodyNodeEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics6MarkerEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics6MarkerEEE();

  void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE();
  _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE();

  void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE();
  _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE();

  void _ZN4dart6common11NameManagerIPNS_8dynamics11EndEffectorEEE();
  _ZN4dart6common11NameManagerIPNS_8dynamics11EndEffectorEEE();

  void _ZN4dart6common6signal6detail18ConnectionBodyBaseE();
  _ZN4dart6common6signal6detail18ConnectionBodyBaseE();

  void _ZN4dart6common10ConnectionE();
  _ZN4dart6common10ConnectionE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEPKNS2_5FrameES8_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEPKNS2_5FrameES8_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityERKSsS7_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityERKSsS7_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvRKSsS3_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvRKSsS3_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common16ScopedConnectionE();
  _ZN4dart6common16ScopedConnectionE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEPKNS3_5FrameES9_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEPKNS3_5FrameES9_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityERKSsS8_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityERKSsS8_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS9_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS9_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();
  _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();

  void _ZN4dart6common5TimerE();
  _ZN4dart6common5TimerE();

  void _ZN4dart9optimizer7ProblemE();
  _ZN4dart9optimizer7ProblemE();

  void _ZN4dart9optimizer6SolverE();
  _ZN4dart9optimizer6SolverE();

  void _ZN4dart9optimizer6Solver10PropertiesE();
  _ZN4dart9optimizer6Solver10PropertiesE();

  void _ZN4dart9optimizer21GradientDescentSolverE();
  _ZN4dart9optimizer21GradientDescentSolverE();

  void _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE();
  _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE();

  void _ZN4dart9optimizer21GradientDescentSolver10PropertiesE();
  _ZN4dart9optimizer21GradientDescentSolver10PropertiesE();

  void _ZN4dart9optimizer8FunctionE();
  _ZN4dart9optimizer8FunctionE();

  void _ZN4dart9optimizer15ModularFunctionE();
  _ZN4dart9optimizer15ModularFunctionE();

  void _ZN4dart9optimizer12NullFunctionE();
  _ZN4dart9optimizer12NullFunctionE();

  void _ZN4dart9optimizer13MultiFunctionE();
  _ZN4dart9optimizer13MultiFunctionE();

  void _ZN4dart8dynamics6Entity10PropertiesE();
  _ZN4dart8dynamics6Entity10PropertiesE();

  void _ZN4dart8dynamics10WorldFrameE();
  _ZN4dart8dynamics10WorldFrameE();

  void _ZN4dart8dynamics4Node5StateE();
  _ZN4dart8dynamics4Node5StateE();

  void _ZN4dart8dynamics4Node10PropertiesE();
  _ZN4dart8dynamics4Node10PropertiesE();

  void _ZN4dart8dynamicsL26getVectorObjectIfAvailableEmRKSt6vectorIT_SaIS2_EE();
  _ZN4dart8dynamicsL26getVectorObjectIfAvailableEmRKSt6vectorIT_SaIS2_EE();

  void _ZN4dart8dynamicsL26getVectorObjectIfAvailableIPNS0_4NodeEEET_mRKSt6vectorIS4_SaIS4_EE();
  _ZN4dart8dynamicsL26getVectorObjectIfAvailableIPNS0_4NodeEEET_mRKSt6vectorIS4_SaIS4_EE();

  void _ZN4dart8dynamicsL18DefaultIKToleranceE();
  _ZN4dart8dynamicsL18DefaultIKToleranceE();

  void _ZN4dart8dynamicsL19DefaultIKErrorClampE();
  _ZN4dart8dynamicsL19DefaultIKErrorClampE();

  void _ZN4dart8dynamicsL31DefaultIKGradientComponentClampE();
  _ZN4dart8dynamicsL31DefaultIKGradientComponentClampE();

  void _ZN4dart8dynamicsL32DefaultIKGradientComponentWeightE();
  _ZN4dart8dynamicsL32DefaultIKGradientComponentWeightE();

  void _ZN4dart8dynamicsL23DefaultIKDLSCoefficientE();
  _ZN4dart8dynamicsL23DefaultIKDLSCoefficientE();

  void _ZN4dart8dynamicsL22DefaultIKAngularWeightE();
  _ZN4dart8dynamicsL22DefaultIKAngularWeightE();

  void _ZN4dart8dynamicsL21DefaultIKLinearWeightE();
  _ZN4dart8dynamicsL21DefaultIKLinearWeightE();

  void _ZN4dart8dynamics17InverseKinematics8FunctionE();
  _ZN4dart8dynamics17InverseKinematics8FunctionE();

  void _ZN4dart8dynamics17InverseKinematics11ErrorMethodE();
  _ZN4dart8dynamics17InverseKinematics11ErrorMethodE();

  void _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE();
  _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE();

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE();
  _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE();

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE();
  _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE();

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE();
  _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE();

  void _ZN4dart8dynamics17InverseKinematics14GradientMethodE();
  _ZN4dart8dynamics17InverseKinematics14GradientMethodE();

  void _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE();
  _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE();

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLSE();
  _ZN4dart8dynamics17InverseKinematics11JacobianDLSE();

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE();
  _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE();

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE();
  _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE();

  void _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE();
  _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE();

  void _ZN4dart8dynamics17InverseKinematics10AnalyticalE();
  _ZN4dart8dynamics17InverseKinematics10AnalyticalE();

  void _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE();
  _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE();

  void _ZN4dart8dynamics17InverseKinematics10Analytical21ExtraDofUtilization_tE();
  _ZN4dart8dynamics17InverseKinematics10Analytical21ExtraDofUtilization_tE();

  void _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE();
  _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE();

  void _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE();
  _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE();

  void _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE();
  _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE();

  void _ZN4dart8dynamics14HierarchicalIKE();
  _ZN4dart8dynamics14HierarchicalIKE();

  void _ZN4dart8dynamics14HierarchicalIK8FunctionE();
  _ZN4dart8dynamics14HierarchicalIK8FunctionE();

  void _ZN4dart8dynamics11CompositeIKE();
  _ZN4dart8dynamics11CompositeIKE();

  void _ZN4dart8dynamics11WholeBodyIKE();
  _ZN4dart8dynamics11WholeBodyIKE();

  void _ZN4dart10constraint17BalanceConstraintE();
  _ZN4dart10constraint17BalanceConstraintE();

  void _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();
  _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();

  void _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();
  _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();

  void _ZN4dart10constraint14ConstraintInfoE();
  _ZN4dart10constraint14ConstraintInfoE();

  void _ZN4dart10constraint14ConstraintBaseE();
  _ZN4dart10constraint14ConstraintBaseE();

  void _ZN4dart10constraint15JointConstraintE();
  _ZN4dart10constraint15JointConstraintE();

  void _ZN4dart10constraint19BallJointConstraintE();
  _ZN4dart10constraint19BallJointConstraintE();

  void _ZN4dart10constraint16ConstrainedGroupE();
  _ZN4dart10constraint16ConstrainedGroupE();

  void _ZN4dart10constraint17ContactConstraintE();
  _ZN4dart10constraint17ContactConstraintE();

  void _ZN4dart10constraint21SoftContactConstraintE();
  _ZN4dart10constraint21SoftContactConstraintE();

  void _ZN4dart10constraint20JointLimitConstraintE();
  _ZN4dart10constraint20JointLimitConstraintE();

  void _ZN4dart10constraint20ServoMotorConstraintE();
  _ZN4dart10constraint20ServoMotorConstraintE();

  void _ZN4dart10constraint30JointCoulombFrictionConstraintE();
  _ZN4dart10constraint30JointCoulombFrictionConstraintE();

  void _ZN4dart10constraint9LCPSolverE();
  _ZN4dart10constraint9LCPSolverE();

  void _ZN4dart10constraint19WeldJointConstraintE();
  _ZN4dart10constraint19WeldJointConstraintE();

  void _ZN4dart10constraint16ConstraintSolverE();
  _ZN4dart10constraint16ConstraintSolverE();

  void _ZN4dart10constraint16DantzigLCPSolverE();
  _ZN4dart10constraint16DantzigLCPSolverE();

  void _ZN4dart10constraint12PGSLCPSolverE();
  _ZN4dart10constraint12PGSLCPSolverE();

  void _ZN4dart10constraint9PGSOptionE();
  _ZN4dart10constraint9PGSOptionE();

  void _ZN4dart10constraint8solvePGSEiiiPdS1_S1_S1_S1_PiPNS0_9PGSOptionE();
  _ZN4dart10constraint8solvePGSEiiiPdS1_S1_S1_S1_PiPNS0_9PGSOptionE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EEE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EEE();

  void _ZN4dart8dynamics6MarkerE();
  _ZN4dart8dynamics6MarkerE();

  void _ZN4dart8dynamics5Joint12ActuatorTypeE();
  _ZN4dart8dynamics5Joint12ActuatorTypeE();

  void _ZN4dart8dynamics5Joint10PropertiesE();
  _ZN4dart8dynamics5Joint10PropertiesE();

  void _ZN4dart8dynamics5Joint18ExtendedPropertiesE();
  _ZN4dart8dynamics5Joint18ExtendedPropertiesE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15EulerJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15EulerJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19PrismaticJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19PrismaticJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_18RevoluteJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_18RevoluteJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15ScrewJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15ScrewJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19UniversalJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19UniversalJointAddonEEEvPT_();

  void _ZN4dart8dynamics7InertiaE();
  _ZN4dart8dynamics7InertiaE();

  void _ZN4dart8dynamics7Inertia5ParamE();
  _ZN4dart8dynamics7Inertia5ParamE();

  void _ZN4dart4mathL2CRE();
  _ZN4dart4mathL2CRE();

  void _ZN4dart4math5deltaEii();
  _ZN4dart4math5deltaEii();

  void _ZN4dart4math4signET_St17integral_constantIbLb0EE();
  _ZN4dart4math4signET_St17integral_constantIbLb0EE();

  void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb0EE();
  _ZN4dart4math4signIdEEiT_St17integral_constantIbLb0EE();

  void _ZN4dart4math4signET_St17integral_constantIbLb1EE();
  _ZN4dart4math4signET_St17integral_constantIbLb1EE();

  void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();
  _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();

  void _ZN4dart4math4signET_();
  _ZN4dart4math4signET_();

  void _ZN4dart4math4signIdEEiT_();
  _ZN4dart4math4signIdEEiT_();

  void _ZN4dart4math3sgnEd();
  _ZN4dart4math3sgnEd();

  void _ZN4dart4math3sqrEd();
  _ZN4dart4math3sqrEd();

  void _ZN4dart4math5TsincEd();
  _ZN4dart4math5TsincEd();

  void _ZN4dart4math6isZeroEd();
  _ZN4dart4math6isZeroEd();

  void _ZN4dart4math5asinhEd();
  _ZN4dart4math5asinhEd();

  void _ZN4dart4math5acoshEd();
  _ZN4dart4math5acoshEd();

  void _ZN4dart4math5atanhEd();
  _ZN4dart4math5atanhEd();

  void _ZN4dart4math5asechEd();
  _ZN4dart4math5asechEd();

  void _ZN4dart4math7acosechEd();
  _ZN4dart4math7acosechEd();

  void _ZN4dart4math7acotanhEd();
  _ZN4dart4math7acotanhEd();

  void _ZN4dart4math5roundEd();
  _ZN4dart4math5roundEd();

  void _ZN4dart4math6round2Ed();
  _ZN4dart4math6round2Ed();

  void _ZN4dart4math4clipERKT_S3_S3_();
  _ZN4dart4math4clipERKT_S3_S3_();

  void _ZN4dart4math4clipERKN5Eigen10MatrixBaseIT_EERKNS2_IT0_EESA_();
  _ZN4dart4math4clipERKN5Eigen10MatrixBaseIT_EERKNS2_IT0_EESA_();

  void _ZN4dart4math7isEqualEdd();
  _ZN4dart4math7isEqualEdd();

  void _ZN4dart4math5isIntEd();
  _ZN4dart4math5isIntEd();

  void _ZN4dart4math5isNanEd();
  _ZN4dart4math5isNanEd();

  void _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();

  void _ZN4dart4math5isInfEd();
  _ZN4dart4math5isInfEd();

  void _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();

  void _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd();
  _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd();

  void _ZN4dart4math8seedRandEv();
  _ZN4dart4math8seedRandEv();

  void _ZN4dart4math6randomEdd();
  _ZN4dart4math6randomEdd();

  void _ZN4dart4math12randomVectorEdd();
  _ZN4dart4math12randomVectorEdd();

  void _ZN4dart4math12randomVectorEd();
  _ZN4dart4math12randomVectorEd();

  void _ZN4dart4math14randomVectorXdEmdd();
  _ZN4dart4math14randomVectorXdEmdd();

  void _ZN4dart4math14randomVectorXdEmd();
  _ZN4dart4math14randomVectorXdEmd();

  void _ZN4dart5Color3RedEd();
  _ZN4dart5Color3RedEd();

  void _ZN4dart5Color3RedEv();
  _ZN4dart5Color3RedEv();

  void _ZN4dart5Color7FuschiaEv();
  _ZN4dart5Color7FuschiaEv();

  void _ZN4dart5Color7FuschiaEd();
  _ZN4dart5Color7FuschiaEd();

  void _ZN4dart5Color6OrangeEd();
  _ZN4dart5Color6OrangeEd();

  void _ZN4dart5Color6OrangeEv();
  _ZN4dart5Color6OrangeEv();

  void _ZN4dart5Color5GreenEd();
  _ZN4dart5Color5GreenEd();

  void _ZN4dart5Color5GreenEv();
  _ZN4dart5Color5GreenEv();

  void _ZN4dart5Color4BlueEd();
  _ZN4dart5Color4BlueEd();

  void _ZN4dart5Color4BlueEv();
  _ZN4dart5Color4BlueEv();

  void _ZN4dart5Color5WhiteEd();
  _ZN4dart5Color5WhiteEd();

  void _ZN4dart5Color5WhiteEv();
  _ZN4dart5Color5WhiteEv();

  void _ZN4dart5Color5BlackEd();
  _ZN4dart5Color5BlackEd();

  void _ZN4dart5Color5BlackEv();
  _ZN4dart5Color5BlackEv();

  void _ZN4dart5Color4GrayEd();
  _ZN4dart5Color4GrayEd();

  void _ZN4dart5Color4GrayEv();
  _ZN4dart5Color4GrayEv();

  void _ZN4dart5Color6RandomEd();
  _ZN4dart5Color6RandomEd();

  void _ZN4dart5Color6RandomEv();
  _ZN4dart5Color6RandomEv();

  void _ZN4dart8dynamics6Marker14ConstraintTypeE();
  _ZN4dart8dynamics6Marker14ConstraintTypeE();

  void _ZN4dart8dynamics6Marker10PropertiesE();
  _ZN4dart8dynamics6Marker10PropertiesE();

  void _ZN4dart8dynamics8BodyNode16UniquePropertiesE();
  _ZN4dart8dynamics8BodyNode16UniquePropertiesE();

  void _ZN4dart8dynamics8BodyNode10PropertiesE();
  _ZN4dart8dynamics8BodyNode10PropertiesE();

  void _ZN4dart8dynamics8BodyNode18ExtendedPropertiesE();
  _ZN4dart8dynamics8BodyNode18ExtendedPropertiesE();

  void _ZN4dart8dynamics8Skeleton12ConfigFlag_tE();
  _ZN4dart8dynamics8Skeleton12ConfigFlag_tE();

  void _ZN4dart8dynamics8Skeleton13ConfigurationE();
  _ZN4dart8dynamics8Skeleton13ConfigurationE();

  void _ZN4dart8dynamics8Skeleton10PropertiesE();
  _ZN4dart8dynamics8Skeleton10PropertiesE();

  void _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE();
  _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE();

  void _ZN4dart8dynamics13MultiDofJointILm6EEE();
  _ZN4dart8dynamics13MultiDofJointILm6EEE();

  void _ZN4dart8dynamics7SupportE();
  _ZN4dart8dynamics7SupportE();

  void _ZN4dart8dynamics6detail13SupportUpdateEPNS0_7SupportE();
  _ZN4dart8dynamics6detail13SupportUpdateEPNS0_7SupportE();

  void _ZN4dart8dynamics11EndEffector9StateDataE();
  _ZN4dart8dynamics11EndEffector9StateDataE();

  void _ZN4dart8dynamics11EndEffector16UniquePropertiesE();
  _ZN4dart8dynamics11EndEffector16UniquePropertiesE();

  void _ZN4dart8dynamics11EndEffector14PropertiesDataE();
  _ZN4dart8dynamics11EndEffector14PropertiesDataE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeleton16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeleton16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeleton8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeleton8OptionalE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton11UpdateStateE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton11UpdateStateE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton16UpdatePropertiesE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton16UpdatePropertiesE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton8OptionalE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeleton8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15EulerJointAddonENS2_26EulerJointUniquePropertiesENS0_10EulerJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE8OptionalE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE11UpdateStateE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE11UpdateStateE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE16UpdatePropertiesE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE16UpdatePropertiesE();

  void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE8OptionalE();
  _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE8OptionalE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail16PlanarJointAddonENS2_27PlanarJointUniquePropertiesENS0_11PlanarJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19PrismaticJointAddonENS2_30PrismaticJointUniquePropertiesENS0_14PrismaticJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();
  _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19UniversalJointAddonENS2_30UniversalJointUniquePropertiesENS0_14UniversalJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EE16UpdatePropertiesE();

  void _ZN4dart8dynamics9MeshShape9ColorModeE();
  _ZN4dart8dynamics9MeshShape9ColorModeE();

  void _ZN4dart8dynamics10ArrowShape10PropertiesE();
  _ZN4dart8dynamics10ArrowShape10PropertiesE();

  void _ZN4dart8dynamics12createFileIOEPN6Assimp8IOSystemE();
  _ZN4dart8dynamics12createFileIOEPN6Assimp8IOSystemE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm6EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm6EEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm2EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm2EEE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm3EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm3EEE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm6EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm6EEE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniqueProperties7NumDofsE();
  _ZN4dart8dynamics6detail29MultiDofJointUniqueProperties7NumDofsE();

  void _ZN4dart8dynamics6detail18MultiDofJointAddon7NumDofsE();
  _ZN4dart8dynamics6detail18MultiDofJointAddon7NumDofsE();

  void _ZN4dart8dynamics13MultiDofJoint7NumDofsE();
  _ZN4dart8dynamics13MultiDofJoint7NumDofsE();

  void _ZN4dart8dynamics9BallJointE();
  _ZN4dart8dynamics9BallJointE();

  void _ZN4dart8dynamics9BallJoint10PropertiesE();
  _ZN4dart8dynamics9BallJoint10PropertiesE();

  void _ZN4dart8dynamics7Linkage8CriteriaE();
  _ZN4dart8dynamics7Linkage8CriteriaE();

  void _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE();
  _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE();

  void _ZN4dart8dynamics7Linkage8Criteria6TargetE();
  _ZN4dart8dynamics7Linkage8Criteria6TargetE();

  void _ZN4dart8dynamics7Linkage8Criteria8TerminalE();
  _ZN4dart8dynamics7Linkage8Criteria8TerminalE();

  void _ZN4dart8dynamics6Branch8CriteriaE();
  _ZN4dart8dynamics6Branch8CriteriaE();

  void _ZN4dart8dynamics5Chain8CriteriaE();
  _ZN4dart8dynamics5Chain8CriteriaE();

  void _ZN4dart8dynamics5Chain13IncludeBoth_tE();
  _ZN4dart8dynamics5Chain13IncludeBoth_tE();

  void _ZN4dart8dynamics10EulerJointE();
  _ZN4dart8dynamics10EulerJointE();

  void _ZN4dart8dynamics6detail9AxisOrderE();
  _ZN4dart8dynamics6detail9AxisOrderE();

  void _ZN4dart8dynamics6detail20EulerJointPropertiesE();
  _ZN4dart8dynamics6detail20EulerJointPropertiesE();

  void _ZN4dart8dynamics6detail15EulerJointAddonE();
  _ZN4dart8dynamics6detail15EulerJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics9FreeJointE();
  _ZN4dart8dynamics9FreeJointE();

  void _ZN4dart8dynamics9FreeJoint10PropertiesE();
  _ZN4dart8dynamics9FreeJoint10PropertiesE();

  void _ZN4dart8dynamics11PlanarJointE();
  _ZN4dart8dynamics11PlanarJointE();

  void _ZN4dart8dynamics6detail9PlaneTypeE();
  _ZN4dart8dynamics6detail9PlaneTypeE();

  void _ZN4dart8dynamics6detail21PlanarJointPropertiesE();
  _ZN4dart8dynamics6detail21PlanarJointPropertiesE();

  void _ZN4dart8dynamics6detail16PlanarJointAddonE();
  _ZN4dart8dynamics6detail16PlanarJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics17PointMassNotifierE();
  _ZN4dart8dynamics17PointMassNotifierE();

  void _ZN4dart8dynamics9PointMass10PropertiesE();
  _ZN4dart8dynamics9PointMass10PropertiesE();

  void _ZN4dart8dynamics6detail24SingleDofJointPropertiesE();
  _ZN4dart8dynamics6detail24SingleDofJointPropertiesE();

  void _ZN4dart8dynamics6detail19SingleDofJointAddonE();
  _ZN4dart8dynamics6detail19SingleDofJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics14PrismaticJointE();
  _ZN4dart8dynamics14PrismaticJointE();

  void _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();
  _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();

  void _ZN4dart8dynamics6detail19PrismaticJointAddonE();
  _ZN4dart8dynamics6detail19PrismaticJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics13RevoluteJointE();
  _ZN4dart8dynamics13RevoluteJointE();

  void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();
  _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();

  void _ZN4dart8dynamics6detail18RevoluteJointAddonE();
  _ZN4dart8dynamics6detail18RevoluteJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics10ScrewJointE();
  _ZN4dart8dynamics10ScrewJointE();

  void _ZN4dart8dynamics6detail20ScrewJointPropertiesE();
  _ZN4dart8dynamics6detail20ScrewJointPropertiesE();

  void _ZN4dart8dynamics6detail15ScrewJointAddonE();
  _ZN4dart8dynamics6detail15ScrewJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE();
  _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE();

  void _ZN4dart8dynamics12SoftBodyNode10PropertiesE();
  _ZN4dart8dynamics12SoftBodyNode10PropertiesE();

  void _ZN4dart8dynamics18SoftBodyNodeHelperE();
  _ZN4dart8dynamics18SoftBodyNodeHelperE();

  void _ZN4dart8dynamics18TranslationalJointE();
  _ZN4dart8dynamics18TranslationalJointE();

  void _ZN4dart8dynamics18TranslationalJoint10PropertiesE();
  _ZN4dart8dynamics18TranslationalJoint10PropertiesE();

  void _ZN4dart8dynamics14UniversalJointE();
  _ZN4dart8dynamics14UniversalJointE();

  void _ZN4dart8dynamics6detail24UniversalJointPropertiesE();
  _ZN4dart8dynamics6detail24UniversalJointPropertiesE();

  void _ZN4dart8dynamics6detail19UniversalJointAddonE();
  _ZN4dart8dynamics6detail19UniversalJointAddonE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateEPT_();

  void _ZN4dart8dynamics12ZeroDofJointE();
  _ZN4dart8dynamics12ZeroDofJointE();

  void _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();
  _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();

  void _ZN4dart8dynamics9WeldJointE();
  _ZN4dart8dynamics9WeldJointE();

  void _ZN4dart8dynamics9WeldJoint10PropertiesE();
  _ZN4dart8dynamics9WeldJoint10PropertiesE();

  void _ZN4dart11integration16IntegrableSystemE();
  _ZN4dart11integration16IntegrableSystemE();

  void _ZN4dart11integration10IntegratorE();
  _ZN4dart11integration10IntegratorE();

  void _ZN4dart11integration15EulerIntegratorE();
  _ZN4dart11integration15EulerIntegratorE();

  void _ZN4dart11integration13RK4IntegratorE();
  _ZN4dart11integration13RK4IntegratorE();

  void _ZN4dart11integration27SemiImplicitEulerIntegratorE();
  _ZN4dart11integration27SemiImplicitEulerIntegratorE();

  void _ZN4dart9lcpsolver5LemkeERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEEPS6_();
  _ZN4dart9lcpsolver5LemkeERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEEPS6_();

  void _ZN4dart9lcpsolver8validateERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEES8_();
  _ZN4dart9lcpsolver8validateERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEES8_();

  void _ZN4dart9lcpsolver12ODELCPSolverE();
  _ZN4dart9lcpsolver12ODELCPSolverE();

  void _ZN4dart8renderer14DecoBufferTypeE();
  _ZN4dart8renderer14DecoBufferTypeE();

  void _ZN4dart8renderer16DecoColorChannelE();
  _ZN4dart8renderer16DecoColorChannelE();

  void _ZN4dart8renderer12DecoDrawTypeE();
  _ZN4dart8renderer12DecoDrawTypeE();

  void _ZN4dart8renderer21OpenGLRenderInterfaceE();
  _ZN4dart8renderer21OpenGLRenderInterfaceE();

  void _ZN4dart10simulation9RecordingE();
  _ZN4dart10simulation9RecordingE();

  void _ZN4dart10simulation5WorldE();
  _ZN4dart10simulation5WorldE();

  void _ZN4dart3gui18drawStringOnScreenEffRKSsb();
  _ZN4dart3gui18drawStringOnScreenEffRKSsb();

  void _ZN4dart3gui11drawArrow3DERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_ddd();
  _ZN4dart3gui11drawArrow3DERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_ddd();

  void _ZN4dart3gui11drawArrow2DERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_d();
  _ZN4dart3gui11drawArrow2DERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_d();

  void _ZN4dart3gui15drawProgressBarEii();
  _ZN4dart3gui15drawProgressBarEii();

  void _ZN4dart3gui5Win2DE();
  _ZN4dart3gui5Win2DE();

  void _ZN4dart3gui11GraphWindowE();
  _ZN4dart3gui11GraphWindowE();

  void _ZN4dart3gui12jitter_pointE();
  _ZN4dart3gui12jitter_pointE();

  void _ZN4dart3gui6JitterE();
  _ZN4dart3gui6JitterE();

  void _ZN4dart3gui9TrackballE();
  _ZN4dart3gui9TrackballE();

  void _ZN4dart3gui5Win3DE();
  _ZN4dart3gui5Win3DE();

  void _ZN4dart3gui9SimWindowE();
  _ZN4dart3gui9SimWindowE();

  void _ZN4dart3gui13SoftSimWindowE();
  _ZN4dart3gui13SoftSimWindowE();

  void _ZN4dart8planning11PathSegmentE();
  _ZN4dart8planning11PathSegmentE();

  void _ZN4dart8planning4PathE();
  _ZN4dart8planning4PathE();

  void _ZN4dart8planning10TrajectoryE();
  _ZN4dart8planning10TrajectoryE();

  void _ZN4dart8planning23PathFollowingTrajectoryE();
  _ZN4dart8planning23PathFollowingTrajectoryE();

  void _ZN4dart8planning3RRTE();
  _ZN4dart8planning3RRTE();

  void _ZN4dart8planning3RRT10StepResultE();
  _ZN4dart8planning3RRT10StepResultE();

  void _ZN4dart8planning13PathShortenerE();
  _ZN4dart8planning13PathShortenerE();

  void _ZN4dart5utils10c3d_head_tE();
  _ZN4dart5utils10c3d_head_tE();

  void _ZN4dart5utils11c3d_param_tE();
  _ZN4dart5utils11c3d_param_tE();

  void _ZN4dart5utils13c3d_frameSI_tE();
  _ZN4dart5utils13c3d_frameSI_tE();

  void _ZN4dart5utils11c3d_frame_tE();
  _ZN4dart5utils11c3d_frame_tE();

  void _ZN4dart5utils17convertDecToFloatEPc();
  _ZN4dart5utils17convertDecToFloatEPc();

  void _ZN4dart5utils17convertFloatToDecEfPc();
  _ZN4dart5utils17convertFloatToDecEfPc();

  void _ZN4dart5utils11loadC3DFileEPKcRSt6vectorIS3_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS6_EESaIS8_EEPiSC_Pd();
  _ZN4dart5utils11loadC3DFileEPKcRSt6vectorIS3_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS6_EESaIS8_EEPiSC_Pd();

  void _ZN4dart5utils11saveC3DFileEPKcRSt6vectorIS3_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS6_EESaIS8_EEiid();
  _ZN4dart5utils11saveC3DFileEPKcRSt6vectorIS3_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS6_EESaIS8_EEiid();

  void _ZN4dart5utils26CompositeResourceRetrieverE();
  _ZN4dart5utils26CompositeResourceRetrieverE();

  void _ZN4dart5utils11FileInfoC3DE();
  _ZN4dart5utils11FileInfoC3DE();

  void _ZN4dart5utils11FileInfoDofE();
  _ZN4dart5utils11FileInfoDofE();

  void _ZN4dart5utils13FileInfoWorldE();
  _ZN4dart5utils13FileInfoWorldE();

  void _ZN4dart5utils24PackageResourceRetrieverE();
  _ZN4dart5utils24PackageResourceRetrieverE();

  void _ZN4dart5utils8toStringEb();
  _ZN4dart5utils8toStringEb();

  void _ZN4dart5utils8toStringEi();
  _ZN4dart5utils8toStringEi();

  void _ZN4dart5utils8toStringEj();
  _ZN4dart5utils8toStringEj();

  void _ZN4dart5utils8toStringEf();
  _ZN4dart5utils8toStringEf();

  void _ZN4dart5utils8toStringEd();
  _ZN4dart5utils8toStringEd();

  void _ZN4dart5utils8toStringEc();
  _ZN4dart5utils8toStringEc();

  void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE();
  _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE();

  void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart5utils8toStringERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE();
  _ZN4dart5utils8toStringERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE();

  void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();
  _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE();

  void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE();
  _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE();

  void _ZN4dart5utils8toStringERKN5Eigen9TransformIdLi3ELi1ELi0EEE();
  _ZN4dart5utils8toStringERKN5Eigen9TransformIdLi3ELi1ELi0EEE();

  void _ZN4dart5utils6toBoolERKSs();
  _ZN4dart5utils6toBoolERKSs();

  void _ZN4dart5utils5toIntERKSs();
  _ZN4dart5utils5toIntERKSs();

  void _ZN4dart5utils6toUIntERKSs();
  _ZN4dart5utils6toUIntERKSs();

  void _ZN4dart5utils7toFloatERKSs();
  _ZN4dart5utils7toFloatERKSs();

  void _ZN4dart5utils8toDoubleERKSs();
  _ZN4dart5utils8toDoubleERKSs();

  void _ZN4dart5utils6toCharERKSs();
  _ZN4dart5utils6toCharERKSs();

  void _ZN4dart5utils10toVector2dERKSs();
  _ZN4dart5utils10toVector2dERKSs();

  void _ZN4dart5utils10toVector3dERKSs();
  _ZN4dart5utils10toVector3dERKSs();

  void _ZN4dart5utils10toVector3iERKSs();
  _ZN4dart5utils10toVector3iERKSs();

  void _ZN4dart5utils10toVector6dERKSs();
  _ZN4dart5utils10toVector6dERKSs();

  void _ZN4dart5utils10toVectorXdERKSs();
  _ZN4dart5utils10toVectorXdERKSs();

  void _ZN4dart5utils12toIsometry3dERKSs();
  _ZN4dart5utils12toIsometry3dERKSs();

  void _ZN4dart5utils33toIsometry3dWithExtrinsicRotationERKSs();
  _ZN4dart5utils33toIsometry3dWithExtrinsicRotationERKSs();

  void _ZN4dart5utils14getValueStringEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils14getValueStringEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils12getValueBoolEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils12getValueBoolEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils11getValueIntEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils11getValueIntEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils12getValueUIntEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils12getValueUIntEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils13getValueFloatEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils13getValueFloatEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils14getValueDoubleEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils14getValueDoubleEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils12getValueCharEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils12getValueCharEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getValueVector2dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getValueVector2dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getValueVector3dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getValueVector3dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getValueVector3iEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getValueVector3iEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getValueVector6dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getValueVector6dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getValueVectorXdEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getValueVectorXdEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils18getValueIsometry3dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils18getValueIsometry3dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils39getValueIsometry3dWithExtrinsicRotationEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils39getValueIsometry3dWithExtrinsicRotationEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils11openXMLFileERN8tinyxml211XMLDocumentERKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE();
  _ZN4dart5utils11openXMLFileERN8tinyxml211XMLDocumentERKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE();

  void _ZN4dart5utils10hasElementEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils10hasElementEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils10getElementEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils10getElementEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils10getElementEPN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils10getElementEPN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils12hasAttributeEPKN8tinyxml210XMLElementEPKc();
  _ZN4dart5utils12hasAttributeEPKN8tinyxml210XMLElementEPKc();

  void _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKc();
  _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKc();

  void _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKcPd();
  _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKcPd();

  void _ZN4dart5utils18getAttributeStringEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils18getAttributeStringEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getAttributeBoolEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getAttributeBoolEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils15getAttributeIntEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils15getAttributeIntEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getAttributeUIntEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getAttributeUIntEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils17getAttributeFloatEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils17getAttributeFloatEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils18getAttributeDoubleEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils18getAttributeDoubleEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils16getAttributeCharEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils16getAttributeCharEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils20getAttributeVector2dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils20getAttributeVector2dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils20getAttributeVector3dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils20getAttributeVector3dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils20getAttributeVector6dEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils20getAttributeVector6dEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils20getAttributeVectorXdEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils20getAttributeVectorXdEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils10SkelParserE();
  _ZN4dart5utils10SkelParserE();

  void _ZN4dart5utils10SkelParser12SkelBodyNodeE();
  _ZN4dart5utils10SkelParser12SkelBodyNodeE();

  void _ZN4dart5utils10SkelParser9SkelJointE();
  _ZN4dart5utils10SkelParser9SkelJointE();

  void _ZN4dart5utils9VskParser7OptionsE();
  _ZN4dart5utils9VskParser7OptionsE();

  void _ZN4dart5utils9VskParser12readSkeletonERKNS_6common3UriENS1_7OptionsE();
  _ZN4dart5utils9VskParser12readSkeletonERKNS_6common3UriENS1_7OptionsE();

  void _ZN4dart5utils9SdfParserE();
  _ZN4dart5utils9SdfParserE();

  void _ZN4dart5utils9SdfParser11SDFBodyNodeE();
  _ZN4dart5utils9SdfParser11SDFBodyNodeE();

  void _ZN4dart5utils9SdfParser8SDFJointE();
  _ZN4dart5utils9SdfParser8SDFJointE();

  void _ZN4dart5utils9SdfParser10NextResultE();
  _ZN4dart5utils9SdfParser10NextResultE();

  void _ZN4dart5utils13SoftSdfParserE();
  _ZN4dart5utils13SoftSdfParserE();

  void _ZN4dart5utils10DartLoaderE();
  _ZN4dart5utils10DartLoaderE();

  void _ZN4dart5utils12urdf_parsing6EntityE();
  _ZN4dart5utils12urdf_parsing6EntityE();

  void _ZN4dart5utils12urdf_parsing5WorldE();
  _ZN4dart5utils12urdf_parsing5WorldE();

  void _ZN4dart5utils12urdf_parsing14parseWorldURDFERKSsRKNS_6common3UriE();
  _ZN4dart5utils12urdf_parsing14parseWorldURDFERKSsRKNS_6common3UriE();

  void _ZN4dart5utils10getElementEPN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils10getElementEPN8tinyxml210XMLElementERKSs();

  void _ZN4dart5utils10getElementEPKN8tinyxml210XMLElementERKSs();
  _ZN4dart5utils10getElementEPKN8tinyxml210XMLElementERKSs();

  void _ZN4dart6common8colorErrERKSsS2_ji();
  _ZN4dart6common8colorErrERKSsS2_ji();

  void _ZN4dart6common8colorMsgERKSsi();
  _ZN4dart6common8colorMsgERKSsi();

}

// main footer

