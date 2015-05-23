#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_BallJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::BallJoint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<BallJoint, bases<MultiDofJoint<3> >,
               noncopyable>("BallJoint", no_init)
    );

    class_<BallJoint::Properties, bases<
            MultiDofJoint<3>::Properties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
