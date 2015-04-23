#include <vector>
#include <boost/python.hpp>
#include <dart/constraint/constraint.h>
#include "util.h"

void python_ConstraintSolver()
{
    using namespace ::boost::python;
    using ::dart::constraint::ConstraintSolver;
    using ::dart::python::util::collection_from_python;

    collection_from_python<std::vector<ConstraintSolver *> >();

    class_<ConstraintSolver, ConstraintSolver *,
           boost::noncopyable>("ConstraintSolver", no_init)
        //.add_property("num_constraint", &ConstraintSolver::getNumConstraints)
        .def("add_skeleton", &ConstraintSolver::addSkeleton)
        .def("add_skeletons", &ConstraintSolver::addSkeletons)
        .def("remove_skeleton", &ConstraintSolver::removeSkeleton)
        .def("remove_skeletons", &ConstraintSolver::removeSkeletons)
        .def("add_constraint", &ConstraintSolver::addConstraint)
        .def("remove_constraint", &ConstraintSolver::removeConstraint)
        .def("remove_all_constraints", &ConstraintSolver::removeAllConstraints)
        ;
}
