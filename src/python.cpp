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

void python_Joint();
void python_FreeJoint();
void python_MultiDofJoint();
void python_RevoluteJoint();
void python_SingleDofJoint();
void python_WeldJoint();
void python_ZeroDofJoint();

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

    // Must register base classes before derived classes.
    python_Joint();
    python_MultiDofJoint();
    python_SingleDofJoint();
    python_ZeroDofJoint();
    python_FreeJoint();
    python_RevoluteJoint();
    python_WeldJoint();

    python_SimWindow();
    python_Skeleton();
    python_World();
}
