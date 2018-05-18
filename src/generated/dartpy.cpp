#include <vector>
#include <dartpy/pointers.h>
#include <dartpy/collections.h>
#include <dartpy/util.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>


#include <boost/python.hpp>
#include <cmath>
#include <iostream>

/* main postinclude */

BOOST_PYTHON_MODULE(dartpy)
{
::boost::python::docstring_options options(true, true, false);

boost::python::import("boost_numpy_eigen");

// std::shared_ptr implicit conversions
boost::python::implicitly_convertible<
  std::shared_ptr<dart::common::LocalResourceRetriever>,
  std::shared_ptr<dart::common::ResourceRetriever> >();

boost::python::implicitly_convertible<
  std::shared_ptr<dart::utils::PackageResourceRetriever>,
  std::shared_ptr<dart::common::ResourceRetriever> >();

// misc implicit conversions
boost::python::implicitly_convertible<
  std::string, dart::common::Uri>();

// std::vector converters
dart::python::util::vector_to_python<size_t>();
dart::python::util::collection_from_python<std::vector<size_t> >();

dart::python::util::vector_to_python<Eigen::Vector3d>();
dart::python::util::collection_from_python<
  std::vector<Eigen::Vector3d> >();

dart::python::util::vector_to_python<Eigen::Vector3i>();
dart::python::util::collection_from_python<
  std::vector<Eigen::Vector3i> >();

dart::python::util::vector_to_python<
  dart::dynamics::PointMass::Properties>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::PointMass::Properties> >();

dart::python::util::vector_to_python<dart::collision::Contact>();
dart::python::util::collection_from_python<
  std::vector<dart::collision::Contact> >();

dart::python::util::vector_to_python<dart::dynamics::SkeletonPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::SkeletonPtr> >();

dart::python::util::vector_to_python<dart::dynamics::ShapePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::ShapePtr> >();

dart::python::util::vector_to_python<
  dart::dynamics::BodyNode*, dart::dynamics::BodyNodePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::BodyNode*> >();

dart::python::util::vector_to_python<
  dart::dynamics::SoftBodyNode*, dart::dynamics::SoftBodyNodePtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::SoftBodyNode*> >();

dart::python::util::vector_to_python<
  dart::dynamics::EndEffector*, dart::dynamics::EndEffectorPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::EndEffector*> >();

dart::python::util::vector_to_python<
  dart::dynamics::DegreeOfFreedom*, dart::dynamics::DegreeOfFreedomPtr>();
dart::python::util::collection_from_python<
  std::vector<dart::dynamics::DegreeOfFreedom*> >();

  ::boost::python::scope().attr("common") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common"))));
  ::boost::python::scope().attr("common").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.detail"))));
  ::boost::python::scope().attr("math") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.math"))));
  ::boost::python::scope().attr("common").attr("signal") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.signal"))));
  ::boost::python::scope().attr("common").attr("signal").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.common.signal.detail"))));
  ::boost::python::scope().attr("math").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.math.detail"))));
  ::boost::python::scope().attr("math").attr("suffixes") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.math.suffixes"))));
  ::boost::python::scope().attr("Color") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.Color"))));
  ::boost::python::scope().attr("integration") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.integration"))));
  ::boost::python::scope().attr("collision") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.collision"))));
  ::boost::python::scope().attr("dynamics") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.dynamics"))));
  ::boost::python::scope().attr("dynamics").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.dynamics.detail"))));
  ::boost::python::scope().attr("optimizer") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.optimizer"))));
  ::boost::python::scope().attr("collision").attr("detail") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.collision.detail"))));
  ::boost::python::scope().attr("collision").attr("fcl") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.collision.fcl"))));
  ::boost::python::scope().attr("lcpsolver") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.lcpsolver"))));
  ::boost::python::scope().attr("constraint") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.constraint"))));
  ::boost::python::scope().attr("simulation") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.simulation"))));
  ::boost::python::scope().attr("planning") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.planning"))));
  ::boost::python::scope().attr("utils") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils"))));
  ::boost::python::scope().attr("utils").attr("SkelParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.SkelParser"))));
  ::boost::python::scope().attr("utils").attr("VskParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.VskParser"))));
  ::boost::python::scope().attr("utils").attr("SdfParser") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.SdfParser"))));
  ::boost::python::scope().attr("utils").attr("urdf_parsing") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.utils.urdf_parsing"))));
  ::boost::python::scope().attr("gui") = ::boost::python::object(::boost::python::handle<>(::boost::python::borrowed(::PyImport_AddModule("dartpy.gui"))));

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS3_6detail15JointPropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS3_6detail15JointPropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS3_6detail15JointPropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics12VisualAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail22VisualAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics12VisualAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail22VisualAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics12VisualAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail22VisualAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics15CollisionAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail25CollisionAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics15CollisionAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail25CollisionAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics15CollisionAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail25CollisionAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics14DynamicsAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail24DynamicsAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics14DynamicsAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail24DynamicsAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics14DynamicsAspectEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail24DynamicsAspectPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EERKNS9_INSA_10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISK_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EERKNS9_INSA_10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISK_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EERKNS9_INSA_10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISK_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEEJRKS7_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS0_13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesENS2_6detail21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISD_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEERKNS4_INS5_10PropertiesENS7_21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISI_EEDpOT0_();
  try {
    _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEERKNS4_INS5_10PropertiesENS7_21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISI_EEDpOT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRKNS0_13MakeCloneableINS0_6Aspect5StateENS2_6detail16SupportStateDataEEERKNS4_INS5_10PropertiesENS7_21SupportPropertiesDataEEEEEESt10unique_ptrIT_St14default_deleteISI_EEDpOT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common9CloneableINS0_6Aspect5StateEEE();
  try {
    _ZN4dart6common9CloneableINS0_6Aspect5StateEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common9CloneableINS0_6Aspect5StateEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common9CloneableINS0_6Aspect10PropertiesEEE();
  try {
    _ZN4dart6common9CloneableINS0_6Aspect10PropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common9CloneableINS0_6Aspect10PropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common9CloneableINS_8dynamics4Node5StateEEE();
  try {
    _ZN4dart6common9CloneableINS_8dynamics4Node5StateEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common9CloneableINS_8dynamics4Node5StateEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common9CloneableINS_8dynamics4Node10PropertiesEEE();
  try {
    _ZN4dart6common9CloneableINS_8dynamics4Node10PropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common9CloneableINS_8dynamics4Node10PropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6AspectE();
  try {
    _ZN4dart6common6AspectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6AspectE" << std::endl;
    throw;
  }

  void _ZN4dart6common6Aspect10PropertiesE();
  try {
    _ZN4dart6common6Aspect10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6Aspect10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail15JointPropertiesE();
  try {
    _ZN4dart8dynamics6detail15JointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail15JointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail15JointPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail20FixedFramePropertiesE();
  try {
    _ZN4dart8dynamics6detail20FixedFramePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail20FixedFramePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20FixedFramePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20FixedFramePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20FixedFramePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22VisualAspectPropertiesE();
  try {
    _ZN4dart8dynamics6detail22VisualAspectPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22VisualAspectPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail22VisualAspectPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail25CollisionAspectPropertiesE();
  try {
    _ZN4dart8dynamics6detail25CollisionAspectPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail25CollisionAspectPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail25CollisionAspectPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail24DynamicsAspectPropertiesE();
  try {
    _ZN4dart8dynamics6detail24DynamicsAspectPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail24DynamicsAspectPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24DynamicsAspectPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail20ShapeFramePropertiesE();
  try {
    _ZN4dart8dynamics6detail20ShapeFramePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail20ShapeFramePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20ShapeFramePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20ShapeFramePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20ShapeFramePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail20EntityNodePropertiesE();
  try {
    _ZN4dart8dynamics6detail20EntityNodePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail20EntityNodePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20EntityNodePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20EntityNodePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail20EntityNodePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7SubjectE();
  try {
    _ZN4dart6common7SubjectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7SubjectE" << std::endl;
    throw;
  }

  void _ZN4dart6common14VersionCounterE();
  try {
    _ZN4dart6common14VersionCounterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14VersionCounterE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics4NodeE();
  try {
    _ZN4dart8dynamics4NodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics4NodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics4Node5StateE();
  try {
    _ZN4dart8dynamics4Node5StateE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics4Node5StateE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_8GetStateEEE();
  try {
    _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_8GetStateEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_8GetStateEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS_8dynamics4Node5StateENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_8GetStateEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS_8dynamics4Node5StateENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_8GetStateEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS_8dynamics4Node5StateENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect5StateESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_8GetStateEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics4Node10PropertiesE();
  try {
    _ZN4dart8dynamics4Node10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics4Node10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_13GetPropertiesEEE();
  try {
    _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_13GetPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEENS1_13GetPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS_8dynamics4Node10PropertiesENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_13GetPropertiesEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS_8dynamics4Node10PropertiesENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_13GetPropertiesEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS_8dynamics4Node10PropertiesENS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteISB_EESt4lessIS8_ESaISt4pairIKS8_SE_EEENS5_13GetPropertiesEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6Aspect5StateE();
  try {
    _ZN4dart6common6Aspect5StateE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6Aspect5StateE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail16SupportStateDataE();
  try {
    _ZN4dart8dynamics6detail16SupportStateDataE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail16SupportStateDataE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail16SupportStateDataEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail21SupportPropertiesDataE();
  try {
    _ZN4dart8dynamics6detail21SupportPropertiesDataE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail21SupportPropertiesDataE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail21EndEffectorPropertiesE();
  try {
    _ZN4dart8dynamics6detail21EndEffectorPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail21EndEffectorPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21EndEffectorPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21EndEffectorPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail21EndEffectorPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail16MarkerPropertiesE();
  try {
    _ZN4dart8dynamics6detail16MarkerPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail16MarkerPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail16MarkerPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail16MarkerPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail16MarkerPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail24SkeletonAspectPropertiesE();
  try {
    _ZN4dart8dynamics6detail24SkeletonAspectPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail24SkeletonAspectPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24SkeletonAspectPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24SkeletonAspectPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24SkeletonAspectPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail13BodyNodeStateE();
  try {
    _ZN4dart8dynamics6detail13BodyNodeStateE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail13BodyNodeStateE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail13BodyNodeStateEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail13BodyNodeStateEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail13BodyNodeStateEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail24BodyNodeAspectPropertiesE();
  try {
    _ZN4dart8dynamics6detail24BodyNodeAspectPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail24BodyNodeAspectPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24BodyNodeAspectPropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24BodyNodeAspectPropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail24BodyNodeAspectPropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SO3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEE();
  try {
    _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm3EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEE();
  try {
    _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm3EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26EulerJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math8SE3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math8SE3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail27PlanarJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEE();
  try {
    _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm1EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEE();
  try {
    _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm1EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30PrismaticJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail23SoftBodyNodeUniqueStateE();
  try {
    _ZN4dart8dynamics6detail23SoftBodyNodeUniqueStateE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail23SoftBodyNodeUniqueStateE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail23SoftBodyNodeUniqueStateEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28SoftBodyNodeUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail28SoftBodyNodeUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28SoftBodyNodeUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28SoftBodyNodeUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEE();
  try {
    _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect5StateENS_8dynamics6detail17GenericJointStateINS_4math15RealVectorSpaceILm2EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEE();
  try {
    _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail28GenericJointUniquePropertiesINS_4math15RealVectorSpaceILm2EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail36TranslationalJoint2DUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail36TranslationalJoint2DUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail36TranslationalJoint2DUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail36TranslationalJoint2DUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();
  try {
    _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();
  try {
    _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13MakeCloneableINS0_6Aspect10PropertiesENS_8dynamics6detail30UniversalJointUniquePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics12VisualAspectEEEEvDpT_();
  try {
    _ZN4dart6common6detail4NoOpIJPNS_8dynamics12VisualAspectEEEEvDpT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail4NoOpIJPNS_8dynamics12VisualAspectEEEEvDpT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics15CollisionAspectEEEEvDpT_();
  try {
    _ZN4dart6common6detail4NoOpIJPNS_8dynamics15CollisionAspectEEEEvDpT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail4NoOpIJPNS_8dynamics15CollisionAspectEEEEvDpT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail4NoOpIJPNS_8dynamics14DynamicsAspectEEEEvDpT_();
  try {
    _ZN4dart6common6detail4NoOpIJPNS_8dynamics14DynamicsAspectEEEEvDpT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail4NoOpIJPNS_8dynamics14DynamicsAspectEEEEvDpT_" << std::endl;
    throw;
  }

  void _ZN4dart6common9CompositeE();
  try {
    _ZN4dart6common9CompositeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common9CompositeE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics5JointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics5JointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics5JointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10FixedFrameEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10FixedFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10FixedFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11EndEffectorEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11EndEffectorEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11EndEffectorEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics6MarkerEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics6MarkerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics6MarkerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8SkeletonEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8SkeletonEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8SkeletonEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8BodyNodeEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8BodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics8BodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10EulerJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10EulerJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10EulerJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11PlanarJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11PlanarJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics11PlanarJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14PrismaticJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14PrismaticJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14PrismaticJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics13RevoluteJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics13RevoluteJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics13RevoluteJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ScrewJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ScrewJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics10ScrewJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14UniversalJointEEE();
  try {
    _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14UniversalJointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common23CompositeTrackingAspectINS_8dynamics14UniversalJointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail15AspectWithStateINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE();
  try {
    _ZN4dart6common6detail15AspectWithStateINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail15AspectWithStateINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetAspectImplINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEELb1EEE();
  try {
    _ZN4dart6common6detail13GetAspectImplINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEELb1EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetAspectImplINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEELb1EEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetAspectImplINS_8dynamics10FixedFrameELb0EEE();
  try {
    _ZN4dart6common6detail13GetAspectImplINS_8dynamics10FixedFrameELb0EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetAspectImplINS_8dynamics10FixedFrameELb0EEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetAspectImplINS_8dynamics10ShapeFrameELb0EEE();
  try {
    _ZN4dart6common6detail13GetAspectImplINS_8dynamics10ShapeFrameELb0EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetAspectImplINS_8dynamics10ShapeFrameELb0EEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetAspectImplINS_8dynamics8BodyNodeELb0EEE();
  try {
    _ZN4dart6common6detail13GetAspectImplINS_8dynamics8BodyNodeELb0EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetAspectImplINS_8dynamics8BodyNodeELb0EEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail9GetAspectINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE();
  try {
    _ZN4dart6common6detail9GetAspectINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail9GetAspectINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail9GetAspectINS_8dynamics10FixedFrameEEE();
  try {
    _ZN4dart6common6detail9GetAspectINS_8dynamics10FixedFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail9GetAspectINS_8dynamics10FixedFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail9GetAspectINS_8dynamics10ShapeFrameEEE();
  try {
    _ZN4dart6common6detail9GetAspectINS_8dynamics10ShapeFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail9GetAspectINS_8dynamics10ShapeFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail9GetAspectINS_8dynamics8BodyNodeEEE();
  try {
    _ZN4dart6common6detail9GetAspectINS_8dynamics8BodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail9GetAspectINS_8dynamics8BodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE();
  try {
    _ZN4dart6common6detail13GetPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetPropertiesINS_8dynamics10FixedFrameEEE();
  try {
    _ZN4dart6common6detail13GetPropertiesINS_8dynamics10FixedFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetPropertiesINS_8dynamics10FixedFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetPropertiesINS_8dynamics10ShapeFrameEEE();
  try {
    _ZN4dart6common6detail13GetPropertiesINS_8dynamics10ShapeFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetPropertiesINS_8dynamics10ShapeFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail13GetPropertiesINS_8dynamics8BodyNodeEEE();
  try {
    _ZN4dart6common6detail13GetPropertiesINS_8dynamics8BodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail13GetPropertiesINS_8dynamics8BodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEEE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEEE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEEE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEE11DelegateTagE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEE11DelegateTagE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINSM_21TemplatedJacobianNodeINSM_17FixedJacobianNodeEEEEENSM_6detail20EntityNodePropertiesEEENSM_10FixedFrameENSM_10ShapeFrameEEE11DelegateTagE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEE11DelegateTagE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEE11DelegateTagE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEE11DelegateTagE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEE11DelegateTagE();
  try {
    _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEE11DelegateTagE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10ShapeFrameEEE11DelegateTagE" << std::endl;
    throw;
  }

  void _ZN4dart6common5EmptyE();
  try {
    _ZN4dart6common5EmptyE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common5EmptyE" << std::endl;
    throw;
  }

  void _ZN4dart6common8NoArgTagE();
  try {
    _ZN4dart6common8NoArgTagE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common8NoArgTagE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEE();
  try {
    _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEE();
  try {
    _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEEEE();
  try {
    _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics14DynamicsAspectEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEENS2_INS3_IJNS4_14DynamicsAspectEEEEEEEEE();
  try {
    _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEENS2_INS3_IJNS4_14DynamicsAspectEEEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectEEEEEENS2_INS3_IJNS4_14DynamicsAspectEEEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS2_14DynamicsAspectEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS2_14DynamicsAspectEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS2_14DynamicsAspectEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS3_14DynamicsAspectEEEEEE();
  try {
    _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS3_14DynamicsAspectEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics15CollisionAspectENS3_14DynamicsAspectEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEENS2_INS3_IJNS4_15CollisionAspectENS4_14DynamicsAspectEEEEEEEEE();
  try {
    _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEENS2_INS3_IJNS4_15CollisionAspectENS4_14DynamicsAspectEEEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEENS2_INS3_IJNS4_15CollisionAspectENS4_14DynamicsAspectEEEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEE();
  try {
    _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEENS3_12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEEE();
  try {
    _ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEENS3_12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEENS3_12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultSetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect5StateES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect5StateESC_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  try {
    _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics5JointENS4_6detail15JointPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS4_6detail20FixedFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ShapeFrameENS4_6detail20ShapeFramePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics6MarkerENS4_6detail16MarkerPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS4_6detail24SkeletonAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS4_6detail26EulerJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS4_6detail27PlanarJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS4_6detail30PrismaticJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS4_6detail29RevoluteJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS4_6detail26ScrewJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS4_6detail23SoftBodyNodeUniqueStateENS6_28SoftBodyNodeUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS4_6detail36TranslationalJoint2DUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  try {
    _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics5JointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail15JointPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics5JointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail15JointPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics5JointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail15JointPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail20ShapeFramePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail20ShapeFramePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail20ShapeFramePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEEEENS0_24EmbeddedPropertiesAspectIS9_NS4_6detail20EntityNodePropertiesEEESD_NS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISE_SI_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISE_SI_EESO_PKSK_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEEEENS0_24EmbeddedPropertiesAspectIS9_NS4_6detail20EntityNodePropertiesEEESD_NS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISE_SI_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISE_SI_EESO_PKSK_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEEEENS0_24EmbeddedPropertiesAspectIS9_NS4_6detail20EntityNodePropertiesEEESD_NS0_13MakeCloneableINS0_6Aspect10PropertiesESD_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISE_SI_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISE_SI_EESO_PKSK_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail21EndEffectorPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail21EndEffectorPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail21EndEffectorPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics6MarkerEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail16MarkerPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics6MarkerEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail16MarkerPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics6MarkerEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail16MarkerPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics8SkeletonEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail24SkeletonAspectPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics8SkeletonEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail24SkeletonAspectPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics8SkeletonEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail24SkeletonAspectPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail13BodyNodeStateENS9_24BodyNodeAspectPropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail13BodyNodeStateENS9_24BodyNodeAspectPropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail13BodyNodeStateENS9_24BodyNodeAspectPropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ScrewJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail26ScrewJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ScrewJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail26ScrewJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ScrewJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail26ScrewJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail36TranslationalJoint2DUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail36TranslationalJoint2DUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics20TranslationalJoint2DEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail36TranslationalJoint2DUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics14UniversalJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail30UniversalJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  try {
    _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics14UniversalJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail30UniversalJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics14UniversalJointEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail30UniversalJointUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10FixedFrameENS3_6detail20FixedFramePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common15EmbedPropertiesINS_8dynamics10FixedFrameENS2_6detail20FixedFramePropertiesEEE();
  try {
    _ZN4dart6common15EmbedPropertiesINS_8dynamics10FixedFrameENS2_6detail20FixedFramePropertiesEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common15EmbedPropertiesINS_8dynamics10FixedFrameENS2_6detail20FixedFramePropertiesEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6EntityE();
  try {
    _ZN4dart8dynamics6EntityE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6EntityE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5FrameE();
  try {
    _ZN4dart8dynamics5FrameE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5FrameE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10FixedFrameE();
  try {
    _ZN4dart8dynamics10FixedFrameE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10FixedFrameE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics10FixedFrameEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics10FixedFrameEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics10FixedFrameEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();
  try {
    _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE();
  try {
    _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();
  try {
    _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE();
  try {
    _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE();
  try {
    _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE();
  try {
    _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_6MarkerEEEE();
  try {
    _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_6MarkerEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_6MarkerEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_6MarkerEEEE();
  try {
    _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_6MarkerEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_6MarkerEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_6MarkerEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_6MarkerEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_6MarkerEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  try {
    _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  try {
    _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE();
  try {
    _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_9ShapeNodeEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_9ShapeNodeEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_9ShapeNodeEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_6MarkerEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_6MarkerEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_6MarkerEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  try {
    _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE();
  try {
    _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorENS0_6MarkerEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE();
  try {
    _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorENS2_6MarkerEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS_8dynamics7SupportEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS_8dynamics7SupportEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS_8dynamics7SupportEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS3_6detail27PlanarJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14PrismaticJointENS3_6detail30PrismaticJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics13RevoluteJointENS3_6detail29RevoluteJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10ScrewJointENS3_6detail26ScrewJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS3_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE();
  try {
    _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS3_6detail30UniversalJointUniquePropertiesEEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  try {
    _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  try {
    _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  try {
    _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common8ResourceE();
  try {
    _ZN4dart6common8ResourceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common8ResourceE" << std::endl;
    throw;
  }

  void _ZN4dart6common8Resource8SeekTypeE();
  try {
    _ZN4dart6common8Resource8SeekTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common8Resource8SeekTypeE" << std::endl;
    throw;
  }

  void _ZN4dart6common13LocalResourceE();
  try {
    _ZN4dart6common13LocalResourceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13LocalResourceE" << std::endl;
    throw;
  }

  void _ZN4dart6common12UriComponentE();
  try {
    _ZN4dart6common12UriComponentE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12UriComponentE" << std::endl;
    throw;
  }

  void _ZN4dart6common3UriE();
  try {
    _ZN4dart6common3UriE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common3UriE" << std::endl;
    throw;
  }

  void _ZN4dart6common17ResourceRetrieverE();
  try {
    _ZN4dart6common17ResourceRetrieverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common17ResourceRetrieverE" << std::endl;
    throw;
  }

  void _ZN4dart6common22LocalResourceRetrieverE();
  try {
    _ZN4dart6common22LocalResourceRetrieverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common22LocalResourceRetrieverE" << std::endl;
    throw;
  }

  void _ZN4dart6common17LockableReferenceE();
  try {
    _ZN4dart6common17LockableReferenceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common17LockableReferenceE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE();
  try {
    _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerIPNS_8dynamics8BodyNodeEEE();
  try {
    _ZN4dart6common11NameManagerIPNS_8dynamics8BodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerIPNS_8dynamics8BodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE();
  try {
    _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE();
  try {
    _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE();
  try {
    _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE();
  try {
    _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE();
  try {
    _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common8ObserverE();
  try {
    _ZN4dart6common8ObserverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common8ObserverE" << std::endl;
    throw;
  }

  void _ZN4dart6common13SharedLibraryE();
  try {
    _ZN4dart6common13SharedLibraryE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common13SharedLibraryE" << std::endl;
    throw;
  }

  void _ZN4dart6common6signal6detail18ConnectionBodyBaseE();
  try {
    _ZN4dart6common6signal6detail18ConnectionBodyBaseE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6signal6detail18ConnectionBodyBaseE" << std::endl;
    throw;
  }

  void _ZN4dart6common10ConnectionE();
  try {
    _ZN4dart6common10ConnectionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common10ConnectionE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEPKNS2_5FrameES8_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEPKNS2_5FrameES8_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityEPKNS2_5FrameES8_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESD_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESD_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESD_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS2_5ShapeEESA_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESA_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS2_5ShapeEEENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_ENS0_6signal6detail15DefaultCombinerEEE();
  try {
    _ZN4dart6common6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_ENS0_6signal6detail15DefaultCombinerEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_ENS0_6signal6detail15DefaultCombinerEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common16ScopedConnectionE();
  try {
    _ZN4dart6common16ScopedConnectionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common16ScopedConnectionE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEPKNS3_5FrameES9_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEPKNS3_5FrameES9_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEPKNS3_5FrameES9_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESE_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics6EntityEENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESF_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESF_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvSt10shared_ptrIKNS_8dynamics12MetaSkeletonEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESF_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKSt10shared_ptrINS3_5ShapeEESB_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeESt10shared_ptrIKNS3_5ShapeEEENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics8BodyNodeEENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ENS0_6signal6detail15DefaultCombinerEEEEE();
  try {
    _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ENS0_6signal6detail15DefaultCombinerEEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ENS0_6signal6detail15DefaultCombinerEEEEE" << std::endl;
    throw;
  }

  void _ZN4dart6common5TimerE();
  try {
    _ZN4dart6common5TimerE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart6common5TimerE" << std::endl;
    throw;
  }

  void _ZN4dart4math8AxisTypeE();
  try {
    _ZN4dart4math8AxisTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8AxisTypeE" << std::endl;
    throw;
  }

  void _ZN4dart4math8wrapToPiEd();
  try {
    _ZN4dart4math8wrapToPiEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8wrapToPiEd" << std::endl;
    throw;
  }

  void _ZN4dart4math18IntersectionResultE();
  try {
    _ZN4dart4math18IntersectionResultE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math18IntersectionResultE" << std::endl;
    throw;
  }

  void _ZN4dart4math11BoundingBoxE();
  try {
    _ZN4dart4math11BoundingBoxE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math11BoundingBoxE" << std::endl;
    throw;
  }

  void _ZN4dart4math15RealVectorSpaceILm1EEE();
  try {
    _ZN4dart4math15RealVectorSpaceILm1EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math15RealVectorSpaceILm1EEE" << std::endl;
    throw;
  }

  void _ZN4dart4math15RealVectorSpaceILm2EEE();
  try {
    _ZN4dart4math15RealVectorSpaceILm2EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math15RealVectorSpaceILm2EEE" << std::endl;
    throw;
  }

  void _ZN4dart4math15RealVectorSpaceILm3EEE();
  try {
    _ZN4dart4math15RealVectorSpaceILm3EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math15RealVectorSpaceILm3EEE" << std::endl;
    throw;
  }

  void _ZN4dart4math8SO3SpaceE();
  try {
    _ZN4dart4math8SO3SpaceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8SO3SpaceE" << std::endl;
    throw;
  }

  void _ZN4dart4math8SE3SpaceE();
  try {
    _ZN4dart4math8SE3SpaceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8SE3SpaceE" << std::endl;
    throw;
  }

  void _ZN4dart4math19MapsToManifoldPointE();
  try {
    _ZN4dart4math19MapsToManifoldPointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math19MapsToManifoldPointE" << std::endl;
    throw;
  }

  void _ZN4dart4math15toManifoldPointINS0_8SO3SpaceEEENT_5PointERKNS3_14EuclideanPointE();
  try {
    _ZN4dart4math15toManifoldPointINS0_8SO3SpaceEEENT_5PointERKNS3_14EuclideanPointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math15toManifoldPointINS0_8SO3SpaceEEENT_5PointERKNS3_14EuclideanPointE" << std::endl;
    throw;
  }

  void _ZN4dart4math15toManifoldPointINS0_8SE3SpaceEEENT_5PointERKNS3_14EuclideanPointE();
  try {
    _ZN4dart4math15toManifoldPointINS0_8SE3SpaceEEENT_5PointERKNS3_14EuclideanPointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math15toManifoldPointINS0_8SE3SpaceEEENT_5PointERKNS3_14EuclideanPointE" << std::endl;
    throw;
  }

  void _ZN4dart4math8toRadianIeEET_RKS2_();
  try {
    _ZN4dart4math8toRadianIeEET_RKS2_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8toRadianIeEET_RKS2_" << std::endl;
    throw;
  }

  void _ZN4dart4mathL2CRE();
  try {
    _ZN4dart4mathL2CRE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4mathL2CRE" << std::endl;
    throw;
  }

  void _ZN4dart4math5deltaEii();
  try {
    _ZN4dart4math5deltaEii();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5deltaEii" << std::endl;
    throw;
  }

  void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();
  try {
    _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE" << std::endl;
    throw;
  }

  void _ZN4dart4math4signIdEEiT_();
  try {
    _ZN4dart4math4signIdEEiT_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4signIdEEiT_" << std::endl;
    throw;
  }

  void _ZN4dart4math3sqrEd();
  try {
    _ZN4dart4math3sqrEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math3sqrEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5TsincEd();
  try {
    _ZN4dart4math5TsincEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5TsincEd" << std::endl;
    throw;
  }

  void _ZN4dart4math6isZeroEd();
  try {
    _ZN4dart4math6isZeroEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math6isZeroEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5asinhEd();
  try {
    _ZN4dart4math5asinhEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5asinhEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5acoshEd();
  try {
    _ZN4dart4math5acoshEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5acoshEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5atanhEd();
  try {
    _ZN4dart4math5atanhEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5atanhEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5asechEd();
  try {
    _ZN4dart4math5asechEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5asechEd" << std::endl;
    throw;
  }

  void _ZN4dart4math7acosechEd();
  try {
    _ZN4dart4math7acosechEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math7acosechEd" << std::endl;
    throw;
  }

  void _ZN4dart4math7acotanhEd();
  try {
    _ZN4dart4math7acotanhEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math7acotanhEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5roundEd();
  try {
    _ZN4dart4math5roundEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5roundEd" << std::endl;
    throw;
  }

  void _ZN4dart4math6round2Ed();
  try {
    _ZN4dart4math6round2Ed();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math6round2Ed" << std::endl;
    throw;
  }

  void _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi3ELi1ELi0ELi3ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  try {
    _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi3ELi1ELi0ELi3ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi3ELi1ELi0ELi3ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_" << std::endl;
    throw;
  }

  void _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi6ELi1ELi0ELi6ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  try {
    _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi6ELi1ELi0ELi6ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi6ELi1ELi0ELi6ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_" << std::endl;
    throw;
  }

  void _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi1ELi1ELi0ELi1ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  try {
    _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi1ELi1ELi0ELi1ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi1ELi1ELi0ELi1ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_" << std::endl;
    throw;
  }

  void _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi2ELi1ELi0ELi2ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  try {
    _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi2ELi1ELi0ELi2ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi2ELi1ELi0ELi2ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_" << std::endl;
    throw;
  }

  void _ZN4dart4math7isEqualEdd();
  try {
    _ZN4dart4math7isEqualEdd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math7isEqualEdd" << std::endl;
    throw;
  }

  void _ZN4dart4math5isIntEd();
  try {
    _ZN4dart4math5isIntEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5isIntEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5isNanEd();
  try {
    _ZN4dart4math5isNanEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5isNanEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  try {
    _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE" << std::endl;
    throw;
  }

  void _ZN4dart4math5isInfEd();
  try {
    _ZN4dart4math5isInfEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5isInfEd" << std::endl;
    throw;
  }

  void _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  try {
    _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE" << std::endl;
    throw;
  }

  void _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd();
  try {
    _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd" << std::endl;
    throw;
  }

  void _ZN4dart4math8seedRandEv();
  try {
    _ZN4dart4math8seedRandEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8seedRandEv" << std::endl;
    throw;
  }

  void _ZN4dart4math6randomEdd();
  try {
    _ZN4dart4math6randomEdd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math6randomEdd" << std::endl;
    throw;
  }

  void _ZN4dart4math14randomVectorXdEmdd();
  try {
    _ZN4dart4math14randomVectorXdEmdd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math14randomVectorXdEmdd" << std::endl;
    throw;
  }

  void _ZN4dart4math14randomVectorXdEmd();
  try {
    _ZN4dart4math14randomVectorXdEmd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math14randomVectorXdEmd" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli3_piEe();
  try {
    _ZN4dart4math8suffixesli3_piEe();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli3_piEe" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli3_piEy();
  try {
    _ZN4dart4math8suffixesli3_piEy();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli3_piEy" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli4_radEe();
  try {
    _ZN4dart4math8suffixesli4_radEe();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli4_radEe" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli4_radEy();
  try {
    _ZN4dart4math8suffixesli4_radEy();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli4_radEy" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli4_degEe();
  try {
    _ZN4dart4math8suffixesli4_degEe();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli4_degEe" << std::endl;
    throw;
  }

  void _ZN4dart4math8suffixesli4_degEy();
  try {
    _ZN4dart4math8suffixesli4_degEy();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart4math8suffixesli4_degEy" << std::endl;
    throw;
  }

  void _ZN4dart5Color3RedEd();
  try {
    _ZN4dart5Color3RedEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color3RedEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color3RedEv();
  try {
    _ZN4dart5Color3RedEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color3RedEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color7FuchsiaEv();
  try {
    _ZN4dart5Color7FuchsiaEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color7FuchsiaEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color7FuchsiaEd();
  try {
    _ZN4dart5Color7FuchsiaEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color7FuchsiaEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color6OrangeEd();
  try {
    _ZN4dart5Color6OrangeEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color6OrangeEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color6OrangeEv();
  try {
    _ZN4dart5Color6OrangeEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color6OrangeEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color5GreenEd();
  try {
    _ZN4dart5Color5GreenEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5GreenEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color5GreenEv();
  try {
    _ZN4dart5Color5GreenEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5GreenEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color4BlueEd();
  try {
    _ZN4dart5Color4BlueEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color4BlueEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color4BlueEv();
  try {
    _ZN4dart5Color4BlueEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color4BlueEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color5WhiteEd();
  try {
    _ZN4dart5Color5WhiteEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5WhiteEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color5WhiteEv();
  try {
    _ZN4dart5Color5WhiteEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5WhiteEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color5BlackEd();
  try {
    _ZN4dart5Color5BlackEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5BlackEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color5BlackEv();
  try {
    _ZN4dart5Color5BlackEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color5BlackEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color4GrayEd();
  try {
    _ZN4dart5Color4GrayEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color4GrayEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color4GrayEv();
  try {
    _ZN4dart5Color4GrayEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color4GrayEv" << std::endl;
    throw;
  }

  void _ZN4dart5Color6RandomEd();
  try {
    _ZN4dart5Color6RandomEd();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color6RandomEd" << std::endl;
    throw;
  }

  void _ZN4dart5Color6RandomEv();
  try {
    _ZN4dart5Color6RandomEv();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5Color6RandomEv" << std::endl;
    throw;
  }

  void _ZN4dart11integration16IntegrableSystemE();
  try {
    _ZN4dart11integration16IntegrableSystemE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart11integration16IntegrableSystemE" << std::endl;
    throw;
  }

  void _ZN4dart11integration10IntegratorE();
  try {
    _ZN4dart11integration10IntegratorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart11integration10IntegratorE" << std::endl;
    throw;
  }

  void _ZN4dart11integration15EulerIntegratorE();
  try {
    _ZN4dart11integration15EulerIntegratorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart11integration15EulerIntegratorE" << std::endl;
    throw;
  }

  void _ZN4dart11integration13RK4IntegratorE();
  try {
    _ZN4dart11integration13RK4IntegratorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart11integration13RK4IntegratorE" << std::endl;
    throw;
  }

  void _ZN4dart11integration27SemiImplicitEulerIntegratorE();
  try {
    _ZN4dart11integration27SemiImplicitEulerIntegratorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart11integration27SemiImplicitEulerIntegratorE" << std::endl;
    throw;
  }

  void _ZN4dart9collision17CollisionDetectorE();
  try {
    _ZN4dart9collision17CollisionDetectorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision17CollisionDetectorE" << std::endl;
    throw;
  }

  void _ZN4dart9collision20FCLCollisionDetectorE();
  try {
    _ZN4dart9collision20FCLCollisionDetectorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision20FCLCollisionDetectorE" << std::endl;
    throw;
  }

  void _ZN4dart9collision21DARTCollisionDetectorE();
  try {
    _ZN4dart9collision21DARTCollisionDetectorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision21DARTCollisionDetectorE" << std::endl;
    throw;
  }

  void _ZN4dart9collision15CollisionObjectE();
  try {
    _ZN4dart9collision15CollisionObjectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision15CollisionObjectE" << std::endl;
    throw;
  }

  void _ZN4dart9collision14CollisionGroupE();
  try {
    _ZN4dart9collision14CollisionGroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision14CollisionGroupE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12MetaSkeletonE();
  try {
    _ZN4dart8dynamics12MetaSkeletonE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12MetaSkeletonE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics8SkeletonE();
  try {
    _ZN4dart8dynamics8SkeletonE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics8SkeletonE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics22MutexedWeakSkeletonPtrE();
  try {
    _ZN4dart8dynamics22MutexedWeakSkeletonPtrE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics22MutexedWeakSkeletonPtrE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics23SkeletonRefCountingBaseE();
  try {
    _ZN4dart8dynamics23SkeletonRefCountingBaseE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics23SkeletonRefCountingBaseE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL13INVALID_INDEXE();
  try {
    _ZN4dart8dynamicsL13INVALID_INDEXE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL13INVALID_INDEXE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14NodeDestructorE();
  try {
    _ZN4dart8dynamics14NodeDestructorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14NodeDestructorE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10ShapeFrameE();
  try {
    _ZN4dart8dynamics10ShapeFrameE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10ShapeFrameE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10DetachableE();
  try {
    _ZN4dart8dynamics10DetachableE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10DetachableE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11SimpleFrameE();
  try {
    _ZN4dart8dynamics11SimpleFrameE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11SimpleFrameE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics19ReferentialSkeletonE();
  try {
    _ZN4dart8dynamics19ReferentialSkeletonE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics19ReferentialSkeletonE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5GroupE();
  try {
    _ZN4dart8dynamics5GroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5GroupE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7LinkageE();
  try {
    _ZN4dart8dynamics7LinkageE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7LinkageE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6BranchE();
  try {
    _ZN4dart8dynamics6BranchE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6BranchE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5ChainE();
  try {
    _ZN4dart8dynamics5ChainE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5ChainE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5ShapeE();
  try {
    _ZN4dart8dynamics5ShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5ShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9MeshShapeE();
  try {
    _ZN4dart8dynamics9MeshShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9MeshShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10ArrowShapeE();
  try {
    _ZN4dart8dynamics10ArrowShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10ArrowShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics8BoxShapeE();
  try {
    _ZN4dart8dynamics8BoxShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics8BoxShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics13CylinderShapeE();
  try {
    _ZN4dart8dynamics13CylinderShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics13CylinderShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14EllipsoidShapeE();
  try {
    _ZN4dart8dynamics14EllipsoidShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14EllipsoidShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics16LineSegmentShapeE();
  try {
    _ZN4dart8dynamics16LineSegmentShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics16LineSegmentShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10PlaneShapeE();
  try {
    _ZN4dart8dynamics10PlaneShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10PlaneShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics13SoftMeshShapeE();
  try {
    _ZN4dart8dynamics13SoftMeshShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics13SoftMeshShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12JacobianNodeE();
  try {
    _ZN4dart8dynamics12JacobianNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12JacobianNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();
  try {
    _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics8BodyNodeE();
  try {
    _ZN4dart8dynamics8BodyNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics8BodyNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12SoftBodyNodeE();
  try {
    _ZN4dart8dynamics12SoftBodyNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12SoftBodyNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5JointE();
  try {
    _ZN4dart8dynamics5JointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5JointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics15DegreeOfFreedomE();
  try {
    _ZN4dart8dynamics15DegreeOfFreedomE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics15DegreeOfFreedomE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11EndEffectorE();
  try {
    _ZN4dart8dynamics11EndEffectorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11EndEffectorE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9ShapeNodeE();
  try {
    _ZN4dart8dynamics9ShapeNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9ShapeNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematicsE();
  try {
    _ZN4dart8dynamics17InverseKinematicsE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematicsE" << std::endl;
    throw;
  }

  void _ZN4dart9collision7ContactE();
  try {
    _ZN4dart9collision7ContactE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision7ContactE" << std::endl;
    throw;
  }

  void _ZN4dart9collision15CollisionFilterE();
  try {
    _ZN4dart9collision15CollisionFilterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision15CollisionFilterE" << std::endl;
    throw;
  }

  void _ZN4dart9collision15CollisionOptionE();
  try {
    _ZN4dart9collision15CollisionOptionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision15CollisionOptionE" << std::endl;
    throw;
  }

  void _ZN4dart9collision15CollisionResultE();
  try {
    _ZN4dart9collision15CollisionResultE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision15CollisionResultE" << std::endl;
    throw;
  }

  void _ZN4dart9collision14DistanceFilterE();
  try {
    _ZN4dart9collision14DistanceFilterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision14DistanceFilterE" << std::endl;
    throw;
  }

  void _ZN4dart9collision14DistanceOptionE();
  try {
    _ZN4dart9collision14DistanceOptionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision14DistanceOptionE" << std::endl;
    throw;
  }

  void _ZN4dart9collision14DistanceResultE();
  try {
    _ZN4dart9collision14DistanceResultE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision14DistanceResultE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5Shape9ShapeTypeE();
  try {
    _ZN4dart8dynamics5Shape9ShapeTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5Shape9ShapeTypeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5Shape12DataVarianceE();
  try {
    _ZN4dart8dynamics5Shape12DataVarianceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5Shape12DataVarianceE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10WorldFrameE();
  try {
    _ZN4dart8dynamics10WorldFrameE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10WorldFrameE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7InertiaE();
  try {
    _ZN4dart8dynamics7InertiaE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7InertiaE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7Inertia5ParamE();
  try {
    _ZN4dart8dynamics7Inertia5ParamE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7Inertia5ParamE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE();
  try {
    _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL30DART_DEFAULT_RESTITUTION_COEFFE();
  try {
    _ZN4dart8dynamicsL30DART_DEFAULT_RESTITUTION_COEFFE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL30DART_DEFAULT_RESTITUTION_COEFFE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9PointMassE();
  try {
    _ZN4dart8dynamics9PointMassE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9PointMassE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6MarkerE();
  try {
    _ZN4dart8dynamics6MarkerE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6MarkerE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer7ProblemE();
  try {
    _ZN4dart9optimizer7ProblemE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer7ProblemE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer6SolverE();
  try {
    _ZN4dart9optimizer6SolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer6SolverE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer6Solver10PropertiesE();
  try {
    _ZN4dart9optimizer6Solver10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer6Solver10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer8FunctionE();
  try {
    _ZN4dart9optimizer8FunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer8FunctionE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer15ModularFunctionE();
  try {
    _ZN4dart9optimizer15ModularFunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer15ModularFunctionE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer12NullFunctionE();
  try {
    _ZN4dart9optimizer12NullFunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer12NullFunctionE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer13MultiFunctionE();
  try {
    _ZN4dart9optimizer13MultiFunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer13MultiFunctionE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL18DefaultIKToleranceE();
  try {
    _ZN4dart8dynamicsL18DefaultIKToleranceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL18DefaultIKToleranceE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL19DefaultIKErrorClampE();
  try {
    _ZN4dart8dynamicsL19DefaultIKErrorClampE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL19DefaultIKErrorClampE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL31DefaultIKGradientComponentClampE();
  try {
    _ZN4dart8dynamicsL31DefaultIKGradientComponentClampE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL31DefaultIKGradientComponentClampE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL32DefaultIKGradientComponentWeightE();
  try {
    _ZN4dart8dynamicsL32DefaultIKGradientComponentWeightE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL32DefaultIKGradientComponentWeightE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL23DefaultIKDLSCoefficientE();
  try {
    _ZN4dart8dynamicsL23DefaultIKDLSCoefficientE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL23DefaultIKDLSCoefficientE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL22DefaultIKAngularWeightE();
  try {
    _ZN4dart8dynamicsL22DefaultIKAngularWeightE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL22DefaultIKAngularWeightE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL21DefaultIKLinearWeightE();
  try {
    _ZN4dart8dynamicsL21DefaultIKLinearWeightE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL21DefaultIKLinearWeightE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics8FunctionE();
  try {
    _ZN4dart8dynamics17InverseKinematics8FunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics8FunctionE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics11ErrorMethodE();
  try {
    _ZN4dart8dynamics17InverseKinematics11ErrorMethodE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics11ErrorMethodE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE();
  try {
    _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics14GradientMethodE();
  try {
    _ZN4dart8dynamics17InverseKinematics14GradientMethodE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics14GradientMethodE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLSE();
  try {
    _ZN4dart8dynamics17InverseKinematics11JacobianDLSE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics11JacobianDLSE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE();
  try {
    _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10AnalyticalE();
  try {
    _ZN4dart8dynamics17InverseKinematics10AnalyticalE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10AnalyticalE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE();
  try {
    _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10Analytical19ExtraDofUtilizationE();
  try {
    _ZN4dart8dynamics17InverseKinematics10Analytical19ExtraDofUtilizationE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10Analytical19ExtraDofUtilizationE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE();
  try {
    _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE();
  try {
    _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14HierarchicalIKE();
  try {
    _ZN4dart8dynamics14HierarchicalIKE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14HierarchicalIKE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14HierarchicalIK8FunctionE();
  try {
    _ZN4dart8dynamics14HierarchicalIK8FunctionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14HierarchicalIK8FunctionE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11CompositeIKE();
  try {
    _ZN4dart8dynamics11CompositeIKE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11CompositeIKE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11WholeBodyIKE();
  try {
    _ZN4dart8dynamics11WholeBodyIKE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11WholeBodyIKE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail12ActuatorTypeE();
  try {
    _ZN4dart8dynamics6detail12ActuatorTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail12ActuatorTypeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detailL19DefaultActuatorTypeE();
  try {
    _ZN4dart8dynamics6detailL19DefaultActuatorTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detailL19DefaultActuatorTypeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5Joint18ExtendedPropertiesE();
  try {
    _ZN4dart8dynamics5Joint18ExtendedPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5Joint18ExtendedPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12VisualAspectE();
  try {
    _ZN4dart8dynamics12VisualAspectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12VisualAspectE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics15CollisionAspectE();
  try {
    _ZN4dart8dynamics15CollisionAspectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics15CollisionAspectE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14DynamicsAspectE();
  try {
    _ZN4dart8dynamics14DynamicsAspectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14DynamicsAspectE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17FixedJacobianNodeE();
  try {
    _ZN4dart8dynamics17FixedJacobianNodeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17FixedJacobianNodeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7SupportE();
  try {
    _ZN4dart8dynamics7SupportE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7SupportE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail16MarkerProperties14ConstraintTypeE();
  try {
    _ZN4dart8dynamics6detail16MarkerProperties14ConstraintTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail16MarkerProperties14ConstraintTypeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics8Skeleton11ConfigFlagsE();
  try {
    _ZN4dart8dynamics8Skeleton11ConfigFlagsE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics8Skeleton11ConfigFlagsE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics8Skeleton13ConfigurationE();
  try {
    _ZN4dart8dynamics8Skeleton13ConfigurationE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics8Skeleton13ConfigurationE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12GenericJointINS_4math8SO3SpaceEEE();
  try {
    _ZN4dart8dynamics12GenericJointINS_4math8SO3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12GenericJointINS_4math8SO3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEE();
  try {
    _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12GenericJointINS_4math8SE3SpaceEEE();
  try {
    _ZN4dart8dynamics12GenericJointINS_4math8SE3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12GenericJointINS_4math8SE3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEE();
  try {
    _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart9collision24CompositeCollisionFilterE();
  try {
    _ZN4dart9collision24CompositeCollisionFilterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision24CompositeCollisionFilterE" << std::endl;
    throw;
  }

  void _ZN4dart9collision23BodyNodeCollisionFilterE();
  try {
    _ZN4dart9collision23BodyNodeCollisionFilterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision23BodyNodeCollisionFilterE" << std::endl;
    throw;
  }

  void _ZN4dart9collision22BodyNodeDistanceFilterE();
  try {
    _ZN4dart9collision22BodyNodeDistanceFilterE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision22BodyNodeDistanceFilterE" << std::endl;
    throw;
  }

  void _ZN4dart9collision19DARTCollisionObjectE();
  try {
    _ZN4dart9collision19DARTCollisionObjectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision19DARTCollisionObjectE" << std::endl;
    throw;
  }

  void _ZN4dart9collision18DARTCollisionGroupE();
  try {
    _ZN4dart9collision18DARTCollisionGroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision18DARTCollisionGroupE" << std::endl;
    throw;
  }

  void _ZN4dart9collision8FCLTypesE();
  try {
    _ZN4dart9collision8FCLTypesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision8FCLTypesE" << std::endl;
    throw;
  }

  void _ZN4dart9collision18FCLCollisionObjectE();
  try {
    _ZN4dart9collision18FCLCollisionObjectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision18FCLCollisionObjectE" << std::endl;
    throw;
  }

  void _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE();
  try {
    _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE" << std::endl;
    throw;
  }

  void _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE();
  try {
    _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE" << std::endl;
    throw;
  }

  void _ZN4dart9collision17FCLCollisionGroupE();
  try {
    _ZN4dart9collision17FCLCollisionGroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision17FCLCollisionGroupE" << std::endl;
    throw;
  }

  void _ZN4dart9lcpsolver12ODELCPSolverE();
  try {
    _ZN4dart9lcpsolver12ODELCPSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9lcpsolver12ODELCPSolverE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint17BalanceConstraintE();
  try {
    _ZN4dart10constraint17BalanceConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint17BalanceConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();
  try {
    _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();
  try {
    _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint14ConstraintInfoE();
  try {
    _ZN4dart10constraint14ConstraintInfoE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint14ConstraintInfoE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint14ConstraintBaseE();
  try {
    _ZN4dart10constraint14ConstraintBaseE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint14ConstraintBaseE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint15JointConstraintE();
  try {
    _ZN4dart10constraint15JointConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint15JointConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint19BallJointConstraintE();
  try {
    _ZN4dart10constraint19BallJointConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint19BallJointConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint16ConstrainedGroupE();
  try {
    _ZN4dart10constraint16ConstrainedGroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint16ConstrainedGroupE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint17ContactConstraintE();
  try {
    _ZN4dart10constraint17ContactConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint17ContactConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint21SoftContactConstraintE();
  try {
    _ZN4dart10constraint21SoftContactConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint21SoftContactConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint20JointLimitConstraintE();
  try {
    _ZN4dart10constraint20JointLimitConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint20JointLimitConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint20ServoMotorConstraintE();
  try {
    _ZN4dart10constraint20ServoMotorConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint20ServoMotorConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint30JointCoulombFrictionConstraintE();
  try {
    _ZN4dart10constraint30JointCoulombFrictionConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint30JointCoulombFrictionConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint9LCPSolverE();
  try {
    _ZN4dart10constraint9LCPSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint9LCPSolverE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint19WeldJointConstraintE();
  try {
    _ZN4dart10constraint19WeldJointConstraintE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint19WeldJointConstraintE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint16ConstraintSolverE();
  try {
    _ZN4dart10constraint16ConstraintSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint16ConstraintSolverE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint16DantzigLCPSolverE();
  try {
    _ZN4dart10constraint16DantzigLCPSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint16DantzigLCPSolverE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint12PGSLCPSolverE();
  try {
    _ZN4dart10constraint12PGSLCPSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint12PGSLCPSolverE" << std::endl;
    throw;
  }

  void _ZN4dart10constraint9PGSOptionE();
  try {
    _ZN4dart10constraint9PGSOptionE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10constraint9PGSOptionE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer21GradientDescentSolverE();
  try {
    _ZN4dart9optimizer21GradientDescentSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer21GradientDescentSolverE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE();
  try {
    _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer21GradientDescentSolver10PropertiesE();
  try {
    _ZN4dart9optimizer21GradientDescentSolver10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer21GradientDescentSolver10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9MeshShape9ColorModeE();
  try {
    _ZN4dart8dynamics9MeshShape9ColorModeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9MeshShape9ColorModeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10ArrowShape10PropertiesE();
  try {
    _ZN4dart8dynamics10ArrowShape10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10ArrowShape10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE();
  try {
    _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SO3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SO3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SO3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm3EEEEE();
  try {
    _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm3EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm3EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SE3SpaceEEE();
  try {
    _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SE3SpaceEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math8SE3SpaceEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm1EEEEE();
  try {
    _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm1EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm1EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm2EEEEE();
  try {
    _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm2EEEEE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22GenericJointPropertiesINS_4math15RealVectorSpaceILm2EEEEE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9BallJointE();
  try {
    _ZN4dart8dynamics9BallJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9BallJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9BallJoint10PropertiesE();
  try {
    _ZN4dart8dynamics9BallJoint10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9BallJoint10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7Linkage8CriteriaE();
  try {
    _ZN4dart8dynamics7Linkage8CriteriaE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7Linkage8CriteriaE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE();
  try {
    _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7Linkage8Criteria6TargetE();
  try {
    _ZN4dart8dynamics7Linkage8Criteria6TargetE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7Linkage8Criteria6TargetE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics7Linkage8Criteria8TerminalE();
  try {
    _ZN4dart8dynamics7Linkage8Criteria8TerminalE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics7Linkage8Criteria8TerminalE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6Branch8CriteriaE();
  try {
    _ZN4dart8dynamics6Branch8CriteriaE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6Branch8CriteriaE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12CapsuleShapeE();
  try {
    _ZN4dart8dynamics12CapsuleShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12CapsuleShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5Chain8CriteriaE();
  try {
    _ZN4dart8dynamics5Chain8CriteriaE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5Chain8CriteriaE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics5Chain14IncludeBothTagE();
  try {
    _ZN4dart8dynamics5Chain14IncludeBothTagE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics5Chain14IncludeBothTagE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9ConeShapeE();
  try {
    _ZN4dart8dynamics9ConeShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9ConeShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10EulerJointE();
  try {
    _ZN4dart8dynamics10EulerJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10EulerJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail9AxisOrderE();
  try {
    _ZN4dart8dynamics6detail9AxisOrderE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail9AxisOrderE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail20EulerJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail20EulerJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail20EulerJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9FreeJointE();
  try {
    _ZN4dart8dynamics9FreeJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9FreeJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9FreeJoint10PropertiesE();
  try {
    _ZN4dart8dynamics9FreeJoint10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9FreeJoint10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6IkFastE();
  try {
    _ZN4dart8dynamics6IkFastE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6IkFastE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics26MultiSphereConvexHullShapeE();
  try {
    _ZN4dart8dynamics26MultiSphereConvexHullShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics26MultiSphereConvexHullShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11PlanarJointE();
  try {
    _ZN4dart8dynamics11PlanarJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11PlanarJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail9PlaneTypeE();
  try {
    _ZN4dart8dynamics6detail9PlaneTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail9PlaneTypeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail21PlanarJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail21PlanarJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail21PlanarJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics17PointMassNotifierE();
  try {
    _ZN4dart8dynamics17PointMassNotifierE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics17PointMassNotifierE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9PointMass5StateE();
  try {
    _ZN4dart8dynamics9PointMass5StateE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9PointMass5StateE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9PointMass10PropertiesE();
  try {
    _ZN4dart8dynamics9PointMass10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9PointMass10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14PrismaticJointE();
  try {
    _ZN4dart8dynamics14PrismaticJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14PrismaticJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail24PrismaticJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail24PrismaticJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics13RevoluteJointE();
  try {
    _ZN4dart8dynamics13RevoluteJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics13RevoluteJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail23RevoluteJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail23RevoluteJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics10ScrewJointE();
  try {
    _ZN4dart8dynamics10ScrewJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics10ScrewJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail20ScrewJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail20ScrewJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail20ScrewJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics19SharedLibraryIkFastE();
  try {
    _ZN4dart8dynamics19SharedLibraryIkFastE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics19SharedLibraryIkFastE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL29DART_DEFAULT_VERTEX_STIFFNESSE();
  try {
    _ZN4dart8dynamicsL29DART_DEFAULT_VERTEX_STIFFNESSE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL29DART_DEFAULT_VERTEX_STIFFNESSE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL26DART_DEFAULT_EDGE_STIFNESSE();
  try {
    _ZN4dart8dynamicsL26DART_DEFAULT_EDGE_STIFNESSE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL26DART_DEFAULT_EDGE_STIFNESSE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamicsL26DART_DEFAULT_DAMPING_COEFFE();
  try {
    _ZN4dart8dynamicsL26DART_DEFAULT_DAMPING_COEFFE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamicsL26DART_DEFAULT_DAMPING_COEFFE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail22SoftBodyNodePropertiesE();
  try {
    _ZN4dart8dynamics6detail22SoftBodyNodePropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail22SoftBodyNodePropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics18SoftBodyNodeHelperE();
  try {
    _ZN4dart8dynamics18SoftBodyNodeHelperE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics18SoftBodyNodeHelperE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics11SphereShapeE();
  try {
    _ZN4dart8dynamics11SphereShapeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics11SphereShapeE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics18TranslationalJointE();
  try {
    _ZN4dart8dynamics18TranslationalJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics18TranslationalJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics18TranslationalJoint10PropertiesE();
  try {
    _ZN4dart8dynamics18TranslationalJoint10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics18TranslationalJoint10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics20TranslationalJoint2DE();
  try {
    _ZN4dart8dynamics20TranslationalJoint2DE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics20TranslationalJoint2DE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail30TranslationalJoint2DPropertiesE();
  try {
    _ZN4dart8dynamics6detail30TranslationalJoint2DPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail30TranslationalJoint2DPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics14UniversalJointE();
  try {
    _ZN4dart8dynamics14UniversalJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics14UniversalJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics6detail24UniversalJointPropertiesE();
  try {
    _ZN4dart8dynamics6detail24UniversalJointPropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics6detail24UniversalJointPropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12ZeroDofJointE();
  try {
    _ZN4dart8dynamics12ZeroDofJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12ZeroDofJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();
  try {
    _ZN4dart8dynamics12ZeroDofJoint10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics12ZeroDofJoint10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9WeldJointE();
  try {
    _ZN4dart8dynamics9WeldJointE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9WeldJointE" << std::endl;
    throw;
  }

  void _ZN4dart8dynamics9WeldJoint10PropertiesE();
  try {
    _ZN4dart8dynamics9WeldJoint10PropertiesE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8dynamics9WeldJoint10PropertiesE" << std::endl;
    throw;
  }

  void _ZN4dart10simulation9RecordingE();
  try {
    _ZN4dart10simulation9RecordingE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10simulation9RecordingE" << std::endl;
    throw;
  }

  void _ZN4dart10simulation5WorldE();
  try {
    _ZN4dart10simulation5WorldE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart10simulation5WorldE" << std::endl;
    throw;
  }

  void _ZN4dart9collision20BulletCollisionGroupE();
  try {
    _ZN4dart9collision20BulletCollisionGroupE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision20BulletCollisionGroupE" << std::endl;
    throw;
  }

  void _ZN4dart9collision21BulletCollisionObjectE();
  try {
    _ZN4dart9collision21BulletCollisionObjectE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision21BulletCollisionObjectE" << std::endl;
    throw;
  }

  void _ZN4dart9collision23BulletCollisionDetectorE();
  try {
    _ZN4dart9collision23BulletCollisionDetectorE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9collision23BulletCollisionDetectorE" << std::endl;
    throw;
  }

  void _ZN4dart9optimizer11NloptSolverE();
  try {
    _ZN4dart9optimizer11NloptSolverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart9optimizer11NloptSolverE" << std::endl;
    throw;
  }

  void _ZN4dart8planning11PathSegmentE();
  try {
    _ZN4dart8planning11PathSegmentE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning11PathSegmentE" << std::endl;
    throw;
  }

  void _ZN4dart8planning4PathE();
  try {
    _ZN4dart8planning4PathE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning4PathE" << std::endl;
    throw;
  }

  void _ZN4dart8planning10TrajectoryE();
  try {
    _ZN4dart8planning10TrajectoryE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning10TrajectoryE" << std::endl;
    throw;
  }

  void _ZN4dart8planning23PathFollowingTrajectoryE();
  try {
    _ZN4dart8planning23PathFollowingTrajectoryE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning23PathFollowingTrajectoryE" << std::endl;
    throw;
  }

  void _ZN4dart8planning3RRTE();
  try {
    _ZN4dart8planning3RRTE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning3RRTE" << std::endl;
    throw;
  }

  void _ZN4dart8planning3RRT10StepResultE();
  try {
    _ZN4dart8planning3RRT10StepResultE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning3RRT10StepResultE" << std::endl;
    throw;
  }

  void _ZN4dart8planning13PathShortenerE();
  try {
    _ZN4dart8planning13PathShortenerE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart8planning13PathShortenerE" << std::endl;
    throw;
  }

  void _ZN4dart5utils10c3d_head_tE();
  try {
    _ZN4dart5utils10c3d_head_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils10c3d_head_tE" << std::endl;
    throw;
  }

  void _ZN4dart5utils11c3d_param_tE();
  try {
    _ZN4dart5utils11c3d_param_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils11c3d_param_tE" << std::endl;
    throw;
  }

  void _ZN4dart5utils13c3d_frameSI_tE();
  try {
    _ZN4dart5utils13c3d_frameSI_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils13c3d_frameSI_tE" << std::endl;
    throw;
  }

  void _ZN4dart5utils11c3d_frame_tE();
  try {
    _ZN4dart5utils11c3d_frame_tE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils11c3d_frame_tE" << std::endl;
    throw;
  }

  void _ZN4dart5utils26CompositeResourceRetrieverE();
  try {
    _ZN4dart5utils26CompositeResourceRetrieverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils26CompositeResourceRetrieverE" << std::endl;
    throw;
  }

  void _ZN4dart5utils21DartResourceRetrieverE();
  try {
    _ZN4dart5utils21DartResourceRetrieverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils21DartResourceRetrieverE" << std::endl;
    throw;
  }

  void _ZN4dart5utils11FileInfoC3DE();
  try {
    _ZN4dart5utils11FileInfoC3DE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils11FileInfoC3DE" << std::endl;
    throw;
  }

  void _ZN4dart5utils11FileInfoDofE();
  try {
    _ZN4dart5utils11FileInfoDofE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils11FileInfoDofE" << std::endl;
    throw;
  }

  void _ZN4dart5utils13FileInfoWorldE();
  try {
    _ZN4dart5utils13FileInfoWorldE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils13FileInfoWorldE" << std::endl;
    throw;
  }

  void _ZN4dart5utils24PackageResourceRetrieverE();
  try {
    _ZN4dart5utils24PackageResourceRetrieverE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils24PackageResourceRetrieverE" << std::endl;
    throw;
  }

  void _ZN4dart5utils9VskParser7OptionsE();
  try {
    _ZN4dart5utils9VskParser7OptionsE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils9VskParser7OptionsE" << std::endl;
    throw;
  }

  void _ZN4dart5utils10DartLoaderE();
  try {
    _ZN4dart5utils10DartLoaderE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils10DartLoaderE" << std::endl;
    throw;
  }

  void _ZN4dart5utils12urdf_parsing6EntityE();
  try {
    _ZN4dart5utils12urdf_parsing6EntityE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils12urdf_parsing6EntityE" << std::endl;
    throw;
  }

  void _ZN4dart5utils12urdf_parsing5WorldE();
  try {
    _ZN4dart5utils12urdf_parsing5WorldE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart5utils12urdf_parsing5WorldE" << std::endl;
    throw;
  }

  void _ZN4dart3gui14DecoBufferTypeE();
  try {
    _ZN4dart3gui14DecoBufferTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui14DecoBufferTypeE" << std::endl;
    throw;
  }

  void _ZN4dart3gui16DecoColorChannelE();
  try {
    _ZN4dart3gui16DecoColorChannelE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui16DecoColorChannelE" << std::endl;
    throw;
  }

  void _ZN4dart3gui12DecoDrawTypeE();
  try {
    _ZN4dart3gui12DecoDrawTypeE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui12DecoDrawTypeE" << std::endl;
    throw;
  }

  void _ZN4dart3gui15RenderInterfaceE();
  try {
    _ZN4dart3gui15RenderInterfaceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui15RenderInterfaceE" << std::endl;
    throw;
  }

  void _ZN4dart3gui10GlutWindowE();
  try {
    _ZN4dart3gui10GlutWindowE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui10GlutWindowE" << std::endl;
    throw;
  }

  void _ZN4dart3gui5Win2DE();
  try {
    _ZN4dart3gui5Win2DE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui5Win2DE" << std::endl;
    throw;
  }

  void _ZN4dart3gui11GraphWindowE();
  try {
    _ZN4dart3gui11GraphWindowE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui11GraphWindowE" << std::endl;
    throw;
  }

  void _ZN4dart3gui9TrackballE();
  try {
    _ZN4dart3gui9TrackballE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui9TrackballE" << std::endl;
    throw;
  }

  void _ZN4dart3gui5Win3DE();
  try {
    _ZN4dart3gui5Win3DE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui5Win3DE" << std::endl;
    throw;
  }

  void _ZN4dart3gui9SimWindowE();
  try {
    _ZN4dart3gui9SimWindowE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui9SimWindowE" << std::endl;
    throw;
  }

  void _ZN4dart3gui19MotionBlurSimWindowE();
  try {
    _ZN4dart3gui19MotionBlurSimWindowE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui19MotionBlurSimWindowE" << std::endl;
    throw;
  }

  void _ZN4dart3gui21OpenGLRenderInterfaceE();
  try {
    _ZN4dart3gui21OpenGLRenderInterfaceE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui21OpenGLRenderInterfaceE" << std::endl;
    throw;
  }

  void _ZN4dart3gui13SoftSimWindowE();
  try {
    _ZN4dart3gui13SoftSimWindowE();
  } catch(...) {
    std::cerr << "Exception in: _ZN4dart3gui13SoftSimWindowE" << std::endl;
    throw;
  }

}

// main footer

