#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_ZeroDofJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::ZeroDofJoint;

    scope joint_class(
        class_<ZeroDofJoint, bases<Joint>,
               noncopyable>("ZeroDofJoint", no_init)
    );

    class_<ZeroDofJoint::Properties, bases<Joint::Properties> >("Properties")
        ;
}

} // namespace python
} // namespace dart
