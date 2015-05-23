#include <boost/python.hpp>
#include <boost/eigen_numpy.h>

namespace dart {
namespace python {

void python_BodyNode();
void python_CollisionDetector();
void python_Constraint();
void python_ConstraintSolver();
void python_DartLoader();
void python_DegreeOfFreedom();

void python_Joint(); // base class
void python_MultiDofJoint(); // base class
void python_SingleDofJoint(); // base class
void python_ZeroDofJoint(); // base class
void python_BallJoint();
void python_EulerJoint();
void python_FreeJoint();
void python_PlanarJoint();
void python_PrismaticJoint();
void python_RevoluteJoint();
void python_ScrewJoint();
void python_TranslationalJoint();
void python_UniversalJoint();
void python_WeldJoint();

void python_SimWindow();
void python_Skeleton();
void python_World();

} // namespace python
} // namespace dart

BOOST_PYTHON_MODULE(PROJECT_NAME)
{
    using namespace dart::python;

    SetupEigenConverters();

    python_BodyNode();
    python_CollisionDetector();
    python_Constraint();
    python_ConstraintSolver();
    python_DartLoader();
    python_DegreeOfFreedom();

    python_Joint(); // base class
    python_MultiDofJoint(); // base class
    python_SingleDofJoint(); // base class
    python_ZeroDofJoint(); // base class
    python_BallJoint();
    python_EulerJoint();
    python_FreeJoint();
    python_PlanarJoint();
    python_PrismaticJoint();
    python_RevoluteJoint();
    python_ScrewJoint();
    python_TranslationalJoint();
    python_UniversalJoint();
    python_WeldJoint();

    python_SimWindow();
    python_Skeleton();
    python_World();
}
