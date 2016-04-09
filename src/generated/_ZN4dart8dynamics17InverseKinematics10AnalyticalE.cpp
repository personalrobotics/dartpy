#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics10AnalyticalE_docstring[] = R"CHIMERA_STRING( Analytical is a base class that should be inherited by methods that are
 made to solve the IK analytically instead of iteratively. This provides an
 extended API that is relevant to Analytical solvers but not iterative
 solvers.
 Creating an Analytical solver will have the side effect of removing the
 error clamp and error weights from your ErrorMethod. If you still want
 your error computations to be clamped and weighted, you should set it
 again after creating the Analytical solver. Clamping and weighting the
 error vector often helps iterative methods to converge smoothly, but it is
 counter-productive for analytical methods which do not typically rely on
 convergence; analytical methods can usually solve the entire error vector
 directly.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical12getSolutionsEv_docstring[] = R"CHIMERA_STRING( Get the solutions for this IK module, along with a tag indicating
 whether each solution is valid. This function will assume that you want
 to use the desired transform given by the IK module's current
 ErrorMethod.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical12getSolutionsERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Get the solutions for this IK module, along with a tag indicating
 whether each solution is valid. This function will compute the
 configurations using the given desired transform instead of using the
 IK module's current ErrorMethod.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( You should not need to override this function. Instead, you should
 override computeSolutions.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical16computeSolutionsERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Use this function to fill the entries of the mSolutions variable. Be
 sure to clear the mSolutions vector at the start, and to also return the
 mSolutions vector at the end. Note that you are not expected to evaluate
 any of the solutions for their quality. However, you should set the
 Solution::mValidity flag to OUT_OF_REACH for each solution that does not
 actually reach the desired transform, and you should call
 checkSolutionJointLimits() and the end of the function, which will set
 the LIMIT_VIOLATED flags of any configurations that are outside of the
 position limits.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10Analytical7getDofsEv_docstring[] = R"CHIMERA_STRING( Get a list of the DOFs that will be included in the entries of the
 solutions returned by getSolutions(). Ideally, this should match up with
 the DOFs being used by the InverseKinematics module, but this might not
 always be possible, so this function ensures that solutions can be
 interpreted correctly.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the configuration of the DOFs. The components of _config must
 correspond to the DOFs provided by getDofs().
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10Analytical12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the configuration of the DOFs. The components of this vector will
 correspond to the DOFs provided by getDofs().
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical22setExtraDofUtilizationENS2_21ExtraDofUtilization_tE_docstring[] = R"CHIMERA_STRING( Set how you want extra DOFs to be utilized by the IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10Analytical22getExtraDofUtilizationEv_docstring[] = R"CHIMERA_STRING( Get how extra DOFs are being utilized by the IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical24setExtraErrorLengthClampEd_docstring[] = R"CHIMERA_STRING( Set how much to clamp the error vector that gets applied to extra DOFs
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10Analytical24getExtraErrorLengthClampEv_docstring[] = R"CHIMERA_STRING( Get how much we will clamp the error vector that gets applied to extra
 DOFs
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical28setQualityComparisonFunctionERKSt8functionIFbRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES8_PKS1_EE_docstring[] = R"CHIMERA_STRING( Set the function that will be used to compare the qualities of two
 solutions. This function should return true if the first argument is a
 better solution than the second argument.
 By default, it will prefer the solution which has the smallest size for
 its largest change in joint angle. In other words, for each
 configuration that it is given, it will compare the largest change in
 joint angle for each configuration and pick the one that is smallest.
 Note that outside of this comparison function, the Solutions will be
 split between which are valid, which are out-of-reach, and which are
 in violation of joint limits. Valid solutions will always be ranked
 above invalid solutions, and joint limit violations will always be
 ranked last.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical30resetQualityComparisonFunctionEv_docstring[] = R"CHIMERA_STRING( Reset the quality comparison function to the default method.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10Analytical23getAnalyticalPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties for this Analytical class
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical15constructDofMapEv_docstring[] = R"CHIMERA_STRING( Construct a mapping from the DOFs of getDofs() to their indices within
 the Node's list of dependent DOFs. This will be called immediately after
 the Analytical is constructed; this one call is sufficient as long as
 the DOFs of Analytical::getDofs() is not changed. However, if your
 Analytical is able to change the DOFs that it operates on, then you will
 need to call this function each time the DOFs have changed.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics10AnalyticalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("Analytical", _ZN4dart8dynamics17InverseKinematics10AnalyticalE_docstring, boost::python::no_init)
.def("getSolutions", [](dart::dynamics::InverseKinematics::Analytical *self) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->getSolutions(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics10Analytical12getSolutionsEv_docstring)
.def("getSolutions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Isometry3d & _desiredTf) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->getSolutions(_desiredTf); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics10Analytical12getSolutionsERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_desiredTf")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, _ZN4dart8dynamics17InverseKinematics10Analytical15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("computeSolutions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Isometry3d & _desiredBodyTf) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->computeSolutions(_desiredBodyTf); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics10Analytical16computeSolutionsERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_desiredBodyTf")))
.def("getDofs", [](const dart::dynamics::InverseKinematics::Analytical *self) -> const std::vector<std::size_t> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics10Analytical7getDofsEv_docstring)
.def("setPositions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::VectorXd & _config) -> void { return self->setPositions(_config); }, _ZN4dart8dynamics17InverseKinematics10Analytical12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_config")))
.def("getPositions", [](const dart::dynamics::InverseKinematics::Analytical *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics17InverseKinematics10Analytical12getPositionsEv_docstring)
.def("setExtraDofUtilization", [](dart::dynamics::InverseKinematics::Analytical *self, dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t _utilization) -> void { return self->setExtraDofUtilization(_utilization); }, _ZN4dart8dynamics17InverseKinematics10Analytical22setExtraDofUtilizationENS2_21ExtraDofUtilization_tE_docstring, (::boost::python::arg("_utilization")))
.def("getExtraDofUtilization", [](const dart::dynamics::InverseKinematics::Analytical *self) -> dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t { return self->getExtraDofUtilization(); }, _ZNK4dart8dynamics17InverseKinematics10Analytical22getExtraDofUtilizationEv_docstring)
.def("setExtraErrorLengthClamp", [](dart::dynamics::InverseKinematics::Analytical *self, double _clamp) -> void { return self->setExtraErrorLengthClamp(_clamp); }, _ZN4dart8dynamics17InverseKinematics10Analytical24setExtraErrorLengthClampEd_docstring, (::boost::python::arg("_clamp")))
.def("getExtraErrorLengthClamp", [](const dart::dynamics::InverseKinematics::Analytical *self) -> double { return self->getExtraErrorLengthClamp(); }, _ZNK4dart8dynamics17InverseKinematics10Analytical24getExtraErrorLengthClampEv_docstring)
.def("setQualityComparisonFunction", [](dart::dynamics::InverseKinematics::Analytical *self, const dart::dynamics::InverseKinematics::Analytical::QualityComparison & _func) -> void { return self->setQualityComparisonFunction(_func); }, _ZN4dart8dynamics17InverseKinematics10Analytical28setQualityComparisonFunctionERKSt8functionIFbRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES8_PKS1_EE_docstring, (::boost::python::arg("_func")))
.def("resetQualityComparisonFunction", [](dart::dynamics::InverseKinematics::Analytical *self) -> void { return self->resetQualityComparisonFunction(); }, _ZN4dart8dynamics17InverseKinematics10Analytical30resetQualityComparisonFunctionEv_docstring)
.def("getAnalyticalProperties", [](const dart::dynamics::InverseKinematics::Analytical *self) -> dart::dynamics::InverseKinematics::Analytical::Properties { return self->getAnalyticalProperties(); }, _ZNK4dart8dynamics17InverseKinematics10Analytical23getAnalyticalPropertiesEv_docstring)
.def("constructDofMap", [](dart::dynamics::InverseKinematics::Analytical *self) -> void { return self->constructDofMap(); }, _ZN4dart8dynamics17InverseKinematics10Analytical15constructDofMapEv_docstring)
;
}

/* footer */
