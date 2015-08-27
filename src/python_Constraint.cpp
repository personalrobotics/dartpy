#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/constraint/constraint.h>

namespace dart {
namespace python {

void python_Constraint()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::constraint::ConstraintBase;
    using ::dart::constraint::JointConstraint;
    using ::dart::constraint::WeldJointConstraint;

    class_<ConstraintBase, boost::noncopyable>("ConstraintBase", no_init)
        ;

    class_<JointConstraint, boost::noncopyable,
           bases<ConstraintBase> >("JointConstraint", no_init)
        ;

    class_<WeldJointConstraint, WeldJointConstraint *,
           bases<JointConstraint> >("WeldJointConstraint",
         init<BodyNode *>())
        .def(init<BodyNode *, BodyNode *>())
        ;
}

}
}
