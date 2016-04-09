#include <vector>
#include <dartpy/pointers.h>
#include <dartpy/collections.h>
#include <dartpy/util.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* main postinclude */

BOOST_PYTHON_MODULE(dartpy)
{
::boost::python::docstring_options options(true, true, false);

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

  ::boost::python::scope().attr("collision") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.collision"))));
  ::boost::python::scope().attr("dynamics") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.dynamics"))));
  ::boost::python::scope().attr("common") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common"))));
  ::boost::python::scope().attr("common").attr("signal") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.signal"))));
  ::boost::python::scope().attr("common").attr("signal").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.signal.detail"))));
  ::boost::python::scope().attr("math") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.math"))));
  ::boost::python::scope().attr("common").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.detail"))));
  ::boost::python::scope().attr("dynamics").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.dynamics.detail"))));
  ::boost::python::scope().attr("Color") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.Color"))));
  ::boost::python::scope().attr("optimizer") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.optimizer"))));
  ::boost::python::scope().attr("constraint") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.constraint"))));
  ::boost::python::scope().attr("integration") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.integration"))));
  ::boost::python::scope().attr("lcpsolver") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.lcpsolver"))));
  ::boost::python::scope().attr("renderer") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.renderer"))));
  ::boost::python::scope().attr("simulation") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.simulation"))));
  ::boost::python::scope().attr("gui") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.gui"))));
  ::boost::python::scope().attr("planning") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.planning"))));
  ::boost::python::scope().attr("utils") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils"))));
  ::boost::python::scope().attr("utils").attr("SkelParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.SkelParser"))));
  ::boost::python::scope().attr("utils").attr("VskParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.VskParser"))));
  ::boost::python::scope().attr("utils").attr("SdfParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.SdfParser"))));
  ::boost::python::scope().attr("utils").attr("urdf_parsing") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.urdf_parsing"))));

  void _ZN4dart9collision17CollisionDetectorE();
  _ZN4dart9collision17CollisionDetectorE();

  void _ZN4dart9collision20FCLCollisionDetectorE();
  _ZN4dart9collision20FCLCollisionDetectorE();

  void _ZN4dart9collision21DARTCollisionDetectorE();
  _ZN4dart9collision21DARTCollisionDetectorE();

  void _ZN4dart9collision23BulletCollisionDetectorE();
  _ZN4dart9collision23BulletCollisionDetectorE();

  void _ZN4dart9collision15CollisionObjectE();
  _ZN4dart9collision15CollisionObjectE();

  void _ZN4dart9collision14CollisionGroupE();
  _ZN4dart9collision14CollisionGroupE();

  void _ZN4dart6common14VersionCounterE();
  _ZN4dart6common14VersionCounterE();

  void _ZN4dart6common12AddonManagerE();
  _ZN4dart6common12AddonManagerE();

  void _ZN4dart6common7SubjectE();
  _ZN4dart6common7SubjectE();

  void _ZN4dart8dynamics12MetaSkeletonE();
  _ZN4dart8dynamics12MetaSkeletonE();

  void _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();
  _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();

  void _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();
  _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE();
  _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE();

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE();
  _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE();

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE();
  _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE();

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE();
  _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE();

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE();
  _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE();

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorEEEEEE();
  _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorEEEEEE();

  void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();
  _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();

  void _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();
  _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE();
  _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE();

  void _ZN4dart8dynamics8SkeletonE();
  _ZN4dart8dynamics8SkeletonE();

  void _ZN4dart8dynamics22MutexedWeakSkeletonPtrE();
  _ZN4dart8dynamics22MutexedWeakSkeletonPtrE();

  void _ZN4dart8dynamics23SkeletonRefCountingBaseE();
  _ZN4dart8dynamics23SkeletonRefCountingBaseE();

  void _ZN4dart8dynamicsL13INVALID_INDEXE();
  _ZN4dart8dynamicsL13INVALID_INDEXE();

  void _ZN4dart8dynamics14NodeDestructorE();
  _ZN4dart8dynamics14NodeDestructorE();

  void _ZN4dart8dynamics6EntityE();
  _ZN4dart8dynamics6EntityE();

  void _ZN4dart8dynamics5FrameE();
  _ZN4dart8dynamics5FrameE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEE();

  void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEE();
  _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEE();

  void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEE();
  _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics13DynamicsAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics13DynamicsAddonEEEE();

  void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics13DynamicsAddonEEEEEE();
  _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics13DynamicsAddonEEEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEENS2_INS3_IJNS4_13DynamicsAddonEEEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEENS2_INS3_IJNS4_13DynamicsAddonEEEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS2_13DynamicsAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS2_13DynamicsAddonEEEE();

  void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS3_13DynamicsAddonEEEEEE();
  _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS3_13DynamicsAddonEEEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEENS2_INS3_IJNS4_14CollisionAddonENS4_13DynamicsAddonEEEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEENS2_INS3_IJNS4_14CollisionAddonENS4_13DynamicsAddonEEEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics11VisualAddonENS2_14CollisionAddonENS2_13DynamicsAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics11VisualAddonENS2_14CollisionAddonENS2_13DynamicsAddonEEEE();

  void _ZN4dart8dynamics10ShapeFrameE();
  _ZN4dart8dynamics10ShapeFrameE();

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

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_9ShapeNodeEEEEEE();
  _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_9ShapeNodeEEEEEE();

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE();
  _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE();

  void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();
  _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE();

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE();
  _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE();

  void _ZN4dart8dynamics4NodeE();
  _ZN4dart8dynamics4NodeE();

  void _ZN4dart8dynamics12JacobianNodeE();
  _ZN4dart8dynamics12JacobianNodeE();

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();
  _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();

  void _ZN4dart8dynamics8BodyNodeE();
  _ZN4dart8dynamics8BodyNodeE();

  void _ZN4dart8dynamics12SoftBodyNodeE();
  _ZN4dart8dynamics12SoftBodyNodeE();

  void _ZN4dart8dynamics5JointE();
  _ZN4dart8dynamics5JointE();

  void _ZN4dart8dynamics15DegreeOfFreedomE();
  _ZN4dart8dynamics15DegreeOfFreedomE();

  void _ZN4dart8dynamics10FixedFrameE();
  _ZN4dart8dynamics10FixedFrameE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics7SupportEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics7SupportEEEE();

  void _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE();
  _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE();

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE();
  _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE();

  void _ZN4dart8dynamics11EndEffectorE();
  _ZN4dart8dynamics11EndEffectorE();

  void _ZN4dart8dynamics13AccessoryNodeINS0_9ShapeNodeEEE();
  _ZN4dart8dynamics13AccessoryNodeINS0_9ShapeNodeEEE();

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_9ShapeNodeEEE();
  _ZN4dart8dynamics21TemplatedJacobianNodeINS0_9ShapeNodeEEE();

  void _ZN4dart8dynamics9ShapeNodeE();
  _ZN4dart8dynamics9ShapeNodeE();

  void _ZN4dart8dynamics17InverseKinematicsE();
  _ZN4dart8dynamics17InverseKinematicsE();

  void _ZN4dart9collision7ContactE();
  _ZN4dart9collision7ContactE();

  void _ZN4dart9collision6ResultE();
  _ZN4dart9collision6ResultE();

  void _ZN4dart9collision15CollisionFilterE();
  _ZN4dart9collision15CollisionFilterE();

  void _ZN4dart9collision23BodyNodeCollisionFilterE();
  _ZN4dart9collision23BodyNodeCollisionFilterE();

  void _ZN4dart9collision6OptionE();
  _ZN4dart9collision6OptionE();

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

  void _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS8_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics9ShapeNodeERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics9ShapeNodeERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();

  void _ZN4dart6common6SignalIFvPKNS_8dynamics9ShapeNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  _ZN4dart6common6SignalIFvPKNS_8dynamics9ShapeNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();

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

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS9_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKSsS9_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics9ShapeNodeERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics9ShapeNodeERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics9ShapeNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics9ShapeNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE();
  _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE();

  void _ZN4dart4math8AxisTypeE();
  _ZN4dart4math8AxisTypeE();

  void _ZN4dart4math8wrapToPiEd();
  _ZN4dart4math8wrapToPiEd();

  void _ZN4dart4math14Intersection_tE();
  _ZN4dart4math14Intersection_tE();

  void _ZN4dart4math11BoundingBoxE();
  _ZN4dart4math11BoundingBoxE();

  void _ZN4dart6common8ObserverE();
  _ZN4dart6common8ObserverE();

  void _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE();
  _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE();

  void _ZN4dart6common10ExtensibleINS_8dynamics4Node10PropertiesEEE();
  _ZN4dart6common10ExtensibleINS_8dynamics4Node10PropertiesEEE();

  void _ZN4dart6common10ExtensibleINS0_5Addon5StateEEE();
  _ZN4dart6common10ExtensibleINS0_5Addon5StateEEE();

  void _ZN4dart6common10ExtensibleINS0_5Addon10PropertiesEEE();
  _ZN4dart6common10ExtensibleINS0_5Addon10PropertiesEEE();

  void _ZN4dart6common5AddonE();
  _ZN4dart6common5AddonE();

  void _ZN4dart6common5Addon10PropertiesE();
  _ZN4dart6common5Addon10PropertiesE();

  void _ZN4dart8dynamics6detail21VisualAddonPropertiesE();
  _ZN4dart8dynamics6detail21VisualAddonPropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21VisualAddonPropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21VisualAddonPropertiesEEE();

  void _ZN4dart8dynamics6detail24CollisionAddonPropertiesE();
  _ZN4dart8dynamics6detail24CollisionAddonPropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail24CollisionAddonPropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail24CollisionAddonPropertiesEEE();

  void _ZN4dart8dynamics6detail23DynamicsAddonPropertiesE();
  _ZN4dart8dynamics6detail23DynamicsAddonPropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail23DynamicsAddonPropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail23DynamicsAddonPropertiesEEE();

  void _ZN4dart6common5Addon5StateE();
  _ZN4dart6common5Addon5StateE();

  void _ZN4dart8dynamics6detail16SupportStateDataE();
  _ZN4dart8dynamics6detail16SupportStateDataE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE();

  void _ZN4dart8dynamics6detail21SupportPropertiesDataE();
  _ZN4dart8dynamics6detail21SupportPropertiesDataE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();

  void _ZN4dart8dynamics6detail30SingleDofJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30SingleDofJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();
  _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();
  _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();
  _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();
  _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();
  _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm3EEEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm3EEEEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm2EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm2EEE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm2EEEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm2EEEEE();

  void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm6EEE();
  _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm6EEE();

  void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE();
  _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE();

  void _ZN4dart6common11make_uniqueINS_8dynamics11VisualAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail21VisualAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics11VisualAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail21VisualAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21VisualAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21VisualAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics14CollisionAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail24CollisionAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics14CollisionAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail24CollisionAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail24CollisionAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail24CollisionAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics13DynamicsAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail23DynamicsAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics13DynamicsAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail23DynamicsAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail23DynamicsAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail23DynamicsAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30SingleDofJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail19SingleDofJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30SingleDofJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail19SingleDofJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30SingleDofJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail16PlanarJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_27PlanarJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail16PlanarJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_27PlanarJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail19PrismaticJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30PrismaticJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail19PrismaticJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30PrismaticJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail19UniversalJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30UniversalJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail19UniversalJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_30UniversalJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail18RevoluteJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_29RevoluteJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail18RevoluteJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_29RevoluteJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail15EulerJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_26EulerJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail15EulerJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_26EulerJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();

  void _ZN4dart6common11make_uniqueINS_8dynamics6detail15ScrewJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_26ScrewJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  _ZN4dart6common11make_uniqueINS_8dynamics6detail15ScrewJointAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS3_26ScrewJointUniquePropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();

  void _ZN4dart8dynamics4Node5StateE();
  _ZN4dart8dynamics4Node5StateE();

  void _ZN4dart8dynamics4Node10PropertiesE();
  _ZN4dart8dynamics4Node10PropertiesE();

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics11VisualAddonEEEEvDpT_();
  _ZN4dart6common6detail4NoOpIJPNS_8dynamics11VisualAddonEEEEvDpT_();

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics14CollisionAddonEEEEvDpT_();
  _ZN4dart6common6detail4NoOpIJPNS_8dynamics14CollisionAddonEEEEvDpT_();

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics13DynamicsAddonEEEEvDpT_();
  _ZN4dart6common6detail4NoOpIJPNS_8dynamics13DynamicsAddonEEEEvDpT_();

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics6detail19SingleDofJointAddonEEEEvDpT_();
  _ZN4dart6common6detail4NoOpIJPNS_8dynamics6detail19SingleDofJointAddonEEEEvDpT_();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11EndEffectorEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11EndEffectorEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14SingleDofJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14SingleDofJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11PlanarJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11PlanarJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14PrismaticJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14PrismaticJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14UniversalJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14UniversalJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13RevoluteJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13RevoluteJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10EulerJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10EulerJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10ScrewJointEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics10ScrewJointEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm2EEEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm2EEEEE();

  void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm6EEEEE();
  _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm6EEEEE();

  void _ZN4dart8dynamics5Shape9ShapeTypeE();
  _ZN4dart8dynamics5Shape9ShapeTypeE();

  void _ZN4dart8dynamics5Shape12DataVarianceE();
  _ZN4dart8dynamics5Shape12DataVarianceE();

  void _ZN4dart8dynamics6Entity10PropertiesE();
  _ZN4dart8dynamics6Entity10PropertiesE();

  void _ZN4dart8dynamics10WorldFrameE();
  _ZN4dart8dynamics10WorldFrameE();

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

  void _ZN4dart6common5EmptyE();
  _ZN4dart6common5EmptyE();

  void _ZN4dart6common7NoArg_tE();
  _ZN4dart6common7NoArg_tE();

  void _ZN4dart8dynamics7InertiaE();
  _ZN4dart8dynamics7InertiaE();

  void _ZN4dart8dynamics7Inertia5ParamE();
  _ZN4dart8dynamics7Inertia5ParamE();

  void _ZN4dart4mathL2CRE();
  _ZN4dart4mathL2CRE();

  void _ZN4dart4math5deltaEii();
  _ZN4dart4math5deltaEii();

  void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();
  _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();

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

  void _ZN4dart8dynamics6MarkerE();
  _ZN4dart8dynamics6MarkerE();

  void _ZN4dart8dynamics6Marker14ConstraintTypeE();
  _ZN4dart8dynamics6Marker14ConstraintTypeE();

  void _ZN4dart8dynamics6Marker10PropertiesE();
  _ZN4dart8dynamics6Marker10PropertiesE();

  void _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE();
  _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE();

  void _ZN4dart8dynamicsL30DART_DEFAULT_RESTITUTION_COEFFE();
  _ZN4dart8dynamicsL30DART_DEFAULT_RESTITUTION_COEFFE();

  void _ZN4dart8dynamics6detail24BodyNodeUniquePropertiesE();
  _ZN4dart8dynamics6detail24BodyNodeUniquePropertiesE();

  void _ZN4dart8dynamics6detail18BodyNodePropertiesE();
  _ZN4dart8dynamics6detail18BodyNodePropertiesE();

  void _ZN4dart8dynamics6detail26BodyNodeExtendedPropertiesE();
  _ZN4dart8dynamics6detail26BodyNodeExtendedPropertiesE();

  void _ZN4dart8dynamics9PointMassE();
  _ZN4dart8dynamics9PointMassE();

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

  void _ZN4dart8dynamics5Joint12ActuatorTypeE();
  _ZN4dart8dynamics5Joint12ActuatorTypeE();

  void _ZN4dart8dynamics5Joint10PropertiesE();
  _ZN4dart8dynamics5Joint10PropertiesE();

  void _ZN4dart8dynamics5Joint18ExtendedPropertiesE();
  _ZN4dart8dynamics5Joint18ExtendedPropertiesE();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_16PlanarJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19PrismaticJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19PrismaticJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19UniversalJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_19UniversalJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_18RevoluteJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_18RevoluteJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15EulerJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15EulerJointAddonEEEvPT_();

  void _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15ScrewJointAddonEEEvPT_();
  _ZN4dart8dynamics6detail19JointPropertyUpdateINS1_15ScrewJointAddonEEEvPT_();

  void _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE();
  _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_11VisualAddonENS4_6detail21VisualAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_11VisualAddonENS4_6detail21VisualAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_14CollisionAddonENS4_6detail24CollisionAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_14CollisionAddonENS4_6detail24CollisionAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_13DynamicsAddonENS4_6detail23DynamicsAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ShapeFrameEEENS4_13DynamicsAddonENS4_6detail23DynamicsAddonPropertiesES5_XadL_ZNS1_4NoOpIJPS7_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS1_14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS5_7SupportENS5_6detail16SupportStateDataES6_XadL_ZNS9_13SupportUpdateEPS8_EEEES8_NS9_21SupportPropertiesDataES6_XadL_ZNS9_13SupportUpdateESB_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS1_14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS5_7SupportENS5_6detail16SupportStateDataES6_XadL_ZNS9_13SupportUpdateEPS8_EEEES8_NS9_21SupportPropertiesDataES6_XadL_ZNS9_13SupportUpdateESB_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14SingleDofJointEEENS4_6detail19SingleDofJointAddonENS7_30SingleDofJointUniquePropertiesES5_XadL_ZNS1_4NoOpIJPS8_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14SingleDofJointEEENS4_6detail19SingleDofJointAddonENS7_30SingleDofJointUniquePropertiesES5_XadL_ZNS1_4NoOpIJPS8_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics11PlanarJointEEENS4_6detail16PlanarJointAddonENS7_27PlanarJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics11PlanarJointEEENS4_6detail16PlanarJointAddonENS7_27PlanarJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14PrismaticJointEEENS4_6detail19PrismaticJointAddonENS7_30PrismaticJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14PrismaticJointEEENS4_6detail19PrismaticJointAddonENS7_30PrismaticJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14UniversalJointEEENS4_6detail19UniversalJointAddonENS7_30UniversalJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics14UniversalJointEEENS4_6detail19UniversalJointAddonENS7_30UniversalJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13RevoluteJointEEENS4_6detail18RevoluteJointAddonENS7_29RevoluteJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13RevoluteJointEEENS4_6detail18RevoluteJointAddonENS7_29RevoluteJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10EulerJointEEENS4_6detail15EulerJointAddonENS7_26EulerJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10EulerJointEEENS4_6detail15EulerJointAddonENS7_26EulerJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ScrewJointEEENS4_6detail15ScrewJointAddonENS7_26ScrewJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics10ScrewJointEEENS4_6detail15ScrewJointAddonENS7_26ScrewJointUniquePropertiesES5_XadL_ZNS7_19JointPropertyUpdateIS8_EEvPT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm2EEEEENS4_6detail18MultiDofJointAddonILm2EEENS8_29MultiDofJointUniquePropertiesILm2EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm2EEEEENS4_6detail18MultiDofJointAddonILm2EEENS8_29MultiDofJointUniquePropertiesILm2EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();

  void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm6EEEEENS4_6detail18MultiDofJointAddonILm6EEENS8_29MultiDofJointUniquePropertiesILm6EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();
  _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm6EEEEENS4_6detail18MultiDofJointAddonILm6EEENS8_29MultiDofJointUniquePropertiesILm6EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE();

  void _ZN4dart6common36AddonWithStateAndVersionedPropertiesINS_8dynamics7SupportENS2_6detail16SupportStateDataENS4_21SupportPropertiesDataENS2_11EndEffectorEXadL_ZNS4_13SupportUpdateEPS3_EEXadL_ZNS4_13SupportUpdateES8_EEEE();
  _ZN4dart6common36AddonWithStateAndVersionedPropertiesINS_8dynamics7SupportENS2_6detail16SupportStateDataENS4_21SupportPropertiesDataENS2_11EndEffectorEXadL_ZNS4_13SupportUpdateEPS3_EEXadL_ZNS4_13SupportUpdateES8_EEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19SingleDofJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19SingleDofJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19SingleDofJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19SingleDofJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics5JointENS0_13RequiresAddonIJNS2_6detail19SingleDofJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics5JointENS0_13RequiresAddonIJNS2_6detail19SingleDofJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE();

  void _ZN4dart8dynamics13MultiDofJointILm3EEE();
  _ZN4dart8dynamics13MultiDofJointILm3EEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail16PlanarJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail16PlanarJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail16PlanarJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail16PlanarJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_13RequiresAddonIJNS2_6detail16PlanarJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_13RequiresAddonIJNS2_6detail16PlanarJointAddonEEEEEEE();

  void _ZN4dart8dynamics14SingleDofJointE();
  _ZN4dart8dynamics14SingleDofJointE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19PrismaticJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19PrismaticJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19PrismaticJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19PrismaticJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail19PrismaticJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail19PrismaticJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm2EEEEEE();

  void _ZN4dart8dynamics13MultiDofJointILm2EEE();
  _ZN4dart8dynamics13MultiDofJointILm2EEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19UniversalJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail19UniversalJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19UniversalJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail19UniversalJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_13RequiresAddonIJNS2_6detail19UniversalJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_13RequiresAddonIJNS2_6detail19UniversalJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18RevoluteJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18RevoluteJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18RevoluteJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18RevoluteJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail18RevoluteJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail18RevoluteJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail15EulerJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail15EulerJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail15EulerJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail15EulerJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_13RequiresAddonIJNS2_6detail15EulerJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_13RequiresAddonIJNS2_6detail15EulerJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail15ScrewJointAddonEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail15ScrewJointAddonEEEE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail15ScrewJointAddonEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail15ScrewJointAddonEEEE();

  void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail15ScrewJointAddonEEEEEEE();
  _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail15ScrewJointAddonEEEEEEE();

  void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();
  _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();

  void _ZN4dart8dynamics11VisualAddonE();
  _ZN4dart8dynamics11VisualAddonE();

  void _ZN4dart8dynamics14CollisionAddonE();
  _ZN4dart8dynamics14CollisionAddonE();

  void _ZN4dart8dynamics13DynamicsAddonE();
  _ZN4dart8dynamics13DynamicsAddonE();

  void _ZN4dart8dynamics10ShapeFrame16UniquePropertiesE();
  _ZN4dart8dynamics10ShapeFrame16UniquePropertiesE();

  void _ZN4dart8dynamics10ShapeFrame10PropertiesE();
  _ZN4dart8dynamics10ShapeFrame10PropertiesE();

  void _ZN4dart8dynamics9ShapeNode16UniquePropertiesE();
  _ZN4dart8dynamics9ShapeNode16UniquePropertiesE();

  void _ZN4dart8dynamics9ShapeNode10PropertiesE();
  _ZN4dart8dynamics9ShapeNode10PropertiesE();

  void _ZN4dart8dynamics7SupportE();
  _ZN4dart8dynamics7SupportE();

  void _ZN4dart8dynamics11EndEffector9StateDataE();
  _ZN4dart8dynamics11EndEffector9StateDataE();

  void _ZN4dart8dynamics11EndEffector16UniquePropertiesE();
  _ZN4dart8dynamics11EndEffector16UniquePropertiesE();

  void _ZN4dart8dynamics11EndEffector14PropertiesDataE();
  _ZN4dart8dynamics11EndEffector14PropertiesDataE();

  void _ZN4dart8dynamics8Skeleton12ConfigFlag_tE();
  _ZN4dart8dynamics8Skeleton12ConfigFlag_tE();

  void _ZN4dart8dynamics8Skeleton13ConfigurationE();
  _ZN4dart8dynamics8Skeleton13ConfigurationE();

  void _ZN4dart8dynamics8Skeleton10PropertiesE();
  _ZN4dart8dynamics8Skeleton10PropertiesE();

  void _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE();
  _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE();

  void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();
  _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm6EEEEEE();

  void _ZN4dart8dynamics13MultiDofJointILm6EEE();
  _ZN4dart8dynamics13MultiDofJointILm6EEE();

  void _ZN4dart9collision19DARTCollisionObjectE();
  _ZN4dart9collision19DARTCollisionObjectE();

  void _ZN4dart9collision18DARTCollisionGroupE();
  _ZN4dart9collision18DARTCollisionGroupE();

  void _ZN4dart9collision18FCLCollisionObjectE();
  _ZN4dart9collision18FCLCollisionObjectE();

  void _ZN4dart9collision18FCLCollisionObject8UserDataE();
  _ZN4dart9collision18FCLCollisionObject8UserDataE();

  void _ZN4dart9collision8FCLTypesE();
  _ZN4dart9collision8FCLTypesE();

  void _ZN4dart9collision17FCLCollisionGroupE();
  _ZN4dart9collision17FCLCollisionGroupE();

  void _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE();
  _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE();

  void _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE();
  _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE();

  void _ZN4dart9collision20BulletCollisionGroupE();
  _ZN4dart9collision20BulletCollisionGroupE();

  void _ZN4dart9collision21BulletCollisionObjectE();
  _ZN4dart9collision21BulletCollisionObjectE();

  void _ZN4dart9collision21BulletCollisionObject8UserDataE();
  _ZN4dart9collision21BulletCollisionObject8UserDataE();

  void _ZN4dart6common5TimerE();
  _ZN4dart6common5TimerE();

  void _ZN4dart6common12UriComponentE();
  _ZN4dart6common12UriComponentE();

  void _ZN4dart6common3UriE();
  _ZN4dart6common3UriE();

  void _ZN4dart6common8ResourceE();
  _ZN4dart6common8ResourceE();

  void _ZN4dart6common8Resource8SeekTypeE();
  _ZN4dart6common8Resource8SeekTypeE();

  void _ZN4dart6common17ResourceRetrieverE();
  _ZN4dart6common17ResourceRetrieverE();

  void _ZN4dart6common22LocalResourceRetrieverE();
  _ZN4dart6common22LocalResourceRetrieverE();

  void _ZN4dart6common13LocalResourceE();
  _ZN4dart6common13LocalResourceE();

  void _ZN4dart10constraint16ConstrainedGroupE();
  _ZN4dart10constraint16ConstrainedGroupE();

  void _ZN4dart10constraint9LCPSolverE();
  _ZN4dart10constraint9LCPSolverE();

  void _ZN4dart10constraint14ConstraintBaseE();
  _ZN4dart10constraint14ConstraintBaseE();

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

  void _ZN4dart10constraint15JointConstraintE();
  _ZN4dart10constraint15JointConstraintE();

  void _ZN4dart10constraint19BallJointConstraintE();
  _ZN4dart10constraint19BallJointConstraintE();

  void _ZN4dart10constraint19WeldJointConstraintE();
  _ZN4dart10constraint19WeldJointConstraintE();

  void _ZN4dart10constraint17BalanceConstraintE();
  _ZN4dart10constraint17BalanceConstraintE();

  void _ZN4dart10constraint14ConstraintInfoE();
  _ZN4dart10constraint14ConstraintInfoE();

  void _ZN4dart10constraint16ConstraintSolverE();
  _ZN4dart10constraint16ConstraintSolverE();

  void _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();
  _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();

  void _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();
  _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();

  void _ZN4dart10constraint16DantzigLCPSolverE();
  _ZN4dart10constraint16DantzigLCPSolverE();

  void _ZN4dart10constraint12PGSLCPSolverE();
  _ZN4dart10constraint12PGSLCPSolverE();

  void _ZN4dart10constraint9PGSOptionE();
  _ZN4dart10constraint9PGSOptionE();

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

  void _ZN4dart8dynamics12ZeroDofJointE();
  _ZN4dart8dynamics12ZeroDofJointE();

  void _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();
  _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();

  void _ZN4dart8dynamics9WeldJointE();
  _ZN4dart8dynamics9WeldJointE();

  void _ZN4dart8dynamics9WeldJoint10PropertiesE();
  _ZN4dart8dynamics9WeldJoint10PropertiesE();

  void _ZN4dart8dynamics17PointMassNotifierE();
  _ZN4dart8dynamics17PointMassNotifierE();

  void _ZN4dart8dynamics9PointMass10PropertiesE();
  _ZN4dart8dynamics9PointMass10PropertiesE();

  void _ZN4dart8dynamics6detail24SingleDofJointPropertiesE();
  _ZN4dart8dynamics6detail24SingleDofJointPropertiesE();

  void _ZN4dart8dynamics6detail19SingleDofJointAddonE();
  _ZN4dart8dynamics6detail19SingleDofJointAddonE();

  void _ZN4dart8dynamics5Chain8CriteriaE();
  _ZN4dart8dynamics5Chain8CriteriaE();

  void _ZN4dart8dynamics5Chain13IncludeBoth_tE();
  _ZN4dart8dynamics5Chain13IncludeBoth_tE();

  void _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE();
  _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm3EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm3EEE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm6EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm6EEE();

  void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE();
  _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE();

  void _ZN4dart8dynamics6detail18MultiDofJointAddonILm3EEE();
  _ZN4dart8dynamics6detail18MultiDofJointAddonILm3EEE();

  void _ZN4dart8dynamics6detail18MultiDofJointAddonILm6EEE();
  _ZN4dart8dynamics6detail18MultiDofJointAddonILm6EEE();

  void _ZN4dart8dynamics6detail18MultiDofJointAddonILm2EEE();
  _ZN4dart8dynamics6detail18MultiDofJointAddonILm2EEE();

  void _ZN4dart8dynamics11PlanarJointE();
  _ZN4dart8dynamics11PlanarJointE();

  void _ZN4dart8dynamics6detail9PlaneTypeE();
  _ZN4dart8dynamics6detail9PlaneTypeE();

  void _ZN4dart8dynamics6detail21PlanarJointPropertiesE();
  _ZN4dart8dynamics6detail21PlanarJointPropertiesE();

  void _ZN4dart8dynamics6detail16PlanarJointAddonE();
  _ZN4dart8dynamics6detail16PlanarJointAddonE();

  void _ZN4dart8dynamics9MeshShape9ColorModeE();
  _ZN4dart8dynamics9MeshShape9ColorModeE();

  void _ZN4dart8dynamics18TranslationalJointE();
  _ZN4dart8dynamics18TranslationalJointE();

  void _ZN4dart8dynamics18TranslationalJoint10PropertiesE();
  _ZN4dart8dynamics18TranslationalJoint10PropertiesE();

  void _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE();
  _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE();

  void _ZN4dart8dynamics12SoftBodyNode10PropertiesE();
  _ZN4dart8dynamics12SoftBodyNode10PropertiesE();

  void _ZN4dart8dynamics18SoftBodyNodeHelperE();
  _ZN4dart8dynamics18SoftBodyNodeHelperE();

  void _ZN4dart8dynamics10ArrowShape10PropertiesE();
  _ZN4dart8dynamics10ArrowShape10PropertiesE();

  void _ZN4dart8dynamics9FreeJointE();
  _ZN4dart8dynamics9FreeJointE();

  void _ZN4dart8dynamics9FreeJoint10PropertiesE();
  _ZN4dart8dynamics9FreeJoint10PropertiesE();

  void _ZN4dart8dynamics14PrismaticJointE();
  _ZN4dart8dynamics14PrismaticJointE();

  void _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();
  _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();

  void _ZN4dart8dynamics6detail19PrismaticJointAddonE();
  _ZN4dart8dynamics6detail19PrismaticJointAddonE();

  void _ZN4dart8dynamics14UniversalJointE();
  _ZN4dart8dynamics14UniversalJointE();

  void _ZN4dart8dynamics6detail24UniversalJointPropertiesE();
  _ZN4dart8dynamics6detail24UniversalJointPropertiesE();

  void _ZN4dart8dynamics6detail19UniversalJointAddonE();
  _ZN4dart8dynamics6detail19UniversalJointAddonE();

  void _ZN4dart8dynamics13RevoluteJointE();
  _ZN4dart8dynamics13RevoluteJointE();

  void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();
  _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();

  void _ZN4dart8dynamics6detail18RevoluteJointAddonE();
  _ZN4dart8dynamics6detail18RevoluteJointAddonE();

  void _ZN4dart8dynamics10EulerJointE();
  _ZN4dart8dynamics10EulerJointE();

  void _ZN4dart8dynamics6detail9AxisOrderE();
  _ZN4dart8dynamics6detail9AxisOrderE();

  void _ZN4dart8dynamics6detail20EulerJointPropertiesE();
  _ZN4dart8dynamics6detail20EulerJointPropertiesE();

  void _ZN4dart8dynamics6detail15EulerJointAddonE();
  _ZN4dart8dynamics6detail15EulerJointAddonE();

  void _ZN4dart8dynamics10ScrewJointE();
  _ZN4dart8dynamics10ScrewJointE();

  void _ZN4dart8dynamics6detail20ScrewJointPropertiesE();
  _ZN4dart8dynamics6detail20ScrewJointPropertiesE();

  void _ZN4dart8dynamics6detail15ScrewJointAddonE();
  _ZN4dart8dynamics6detail15ScrewJointAddonE();

  void _ZN4dart8dynamics9BallJointE();
  _ZN4dart8dynamics9BallJointE();

  void _ZN4dart8dynamics9BallJoint10PropertiesE();
  _ZN4dart8dynamics9BallJoint10PropertiesE();

  void _ZN4dart11integration16IntegrableSystemE();
  _ZN4dart11integration16IntegrableSystemE();

  void _ZN4dart11integration10IntegratorE();
  _ZN4dart11integration10IntegratorE();

  void _ZN4dart11integration27SemiImplicitEulerIntegratorE();
  _ZN4dart11integration27SemiImplicitEulerIntegratorE();

  void _ZN4dart11integration13RK4IntegratorE();
  _ZN4dart11integration13RK4IntegratorE();

  void _ZN4dart11integration15EulerIntegratorE();
  _ZN4dart11integration15EulerIntegratorE();

  void _ZN4dart9lcpsolver12ODELCPSolverE();
  _ZN4dart9lcpsolver12ODELCPSolverE();

  void _ZN4dart8renderer14DecoBufferTypeE();
  _ZN4dart8renderer14DecoBufferTypeE();

  void _ZN4dart8renderer16DecoColorChannelE();
  _ZN4dart8renderer16DecoColorChannelE();

  void _ZN4dart8renderer12DecoDrawTypeE();
  _ZN4dart8renderer12DecoDrawTypeE();

  void _ZN4dart8renderer15RenderInterfaceE();
  _ZN4dart8renderer15RenderInterfaceE();

  void _ZN4dart8renderer21OpenGLRenderInterfaceE();
  _ZN4dart8renderer21OpenGLRenderInterfaceE();

  void _ZN4dart10simulation9RecordingE();
  _ZN4dart10simulation9RecordingE();

  void _ZN4dart10simulation5WorldE();
  _ZN4dart10simulation5WorldE();

  void _ZN4dart3gui10GlutWindowE();
  _ZN4dart3gui10GlutWindowE();

  void _ZN4dart3gui9TrackballE();
  _ZN4dart3gui9TrackballE();

  void _ZN4dart3gui5Win3DE();
  _ZN4dart3gui5Win3DE();

  void _ZN4dart3gui5Win2DE();
  _ZN4dart3gui5Win2DE();

  void _ZN4dart3gui11GraphWindowE();
  _ZN4dart3gui11GraphWindowE();

  void _ZN4dart3gui9SimWindowE();
  _ZN4dart3gui9SimWindowE();

  void _ZN4dart3gui13SoftSimWindowE();
  _ZN4dart3gui13SoftSimWindowE();

  void _ZN4dart3gui12jitter_pointE();
  _ZN4dart3gui12jitter_pointE();

  void _ZN4dart3gui6JitterE();
  _ZN4dart3gui6JitterE();

  void _ZN4dart8planning3RRTE();
  _ZN4dart8planning3RRTE();

  void _ZN4dart8planning3RRT10StepResultE();
  _ZN4dart8planning3RRT10StepResultE();

  void _ZN4dart8planning11PathSegmentE();
  _ZN4dart8planning11PathSegmentE();

  void _ZN4dart8planning4PathE();
  _ZN4dart8planning4PathE();

  void _ZN4dart8planning13PathShortenerE();
  _ZN4dart8planning13PathShortenerE();

  void _ZN4dart8planning10TrajectoryE();
  _ZN4dart8planning10TrajectoryE();

  void _ZN4dart8planning23PathFollowingTrajectoryE();
  _ZN4dart8planning23PathFollowingTrajectoryE();

  void _ZN4dart5utils24PackageResourceRetrieverE();
  _ZN4dart5utils24PackageResourceRetrieverE();

  void _ZN4dart5utils10c3d_head_tE();
  _ZN4dart5utils10c3d_head_tE();

  void _ZN4dart5utils11c3d_param_tE();
  _ZN4dart5utils11c3d_param_tE();

  void _ZN4dart5utils13c3d_frameSI_tE();
  _ZN4dart5utils13c3d_frameSI_tE();

  void _ZN4dart5utils11c3d_frame_tE();
  _ZN4dart5utils11c3d_frame_tE();

  void _ZN4dart5utils11FileInfoC3DE();
  _ZN4dart5utils11FileInfoC3DE();

  void _ZN4dart5utils26CompositeResourceRetrieverE();
  _ZN4dart5utils26CompositeResourceRetrieverE();

  void _ZN4dart5utils13FileInfoWorldE();
  _ZN4dart5utils13FileInfoWorldE();

  void _ZN4dart5utils9VskParser7OptionsE();
  _ZN4dart5utils9VskParser7OptionsE();

  void _ZN4dart5utils11FileInfoDofE();
  _ZN4dart5utils11FileInfoDofE();

  void _ZN4dart5utils12urdf_parsing6EntityE();
  _ZN4dart5utils12urdf_parsing6EntityE();

  void _ZN4dart5utils12urdf_parsing5WorldE();
  _ZN4dart5utils12urdf_parsing5WorldE();

  void _ZN4dart5utils10DartLoaderE();
  _ZN4dart5utils10DartLoaderE();

}

// main footer

