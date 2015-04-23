#include <boost/python.hpp>
#include <boost/eigen_numpy.h>

void python_BodyNode();
void python_Constraint();
void python_ConstraintSolver();
void python_DartLoader();
void python_DegreeOfFreedom();
void python_Joint();
void python_SimWindow();
void python_Skeleton();
void python_World();

BOOST_PYTHON_MODULE(PROJECT_NAME)
{
    SetupEigenConverters();

    python_BodyNode();
    python_Constraint();
    python_ConstraintSolver();
    python_DartLoader();
    python_DegreeOfFreedom();
    python_Joint();
    python_SimWindow();
    python_Skeleton();
    python_World();
}
