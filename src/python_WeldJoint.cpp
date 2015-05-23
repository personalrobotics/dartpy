#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_WeldJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::ZeroDofJoint;
    using dart::dynamics::WeldJoint;

    scope joint_class(
        class_<WeldJoint, bases<ZeroDofJoint>,
               noncopyable>("WeldJoint", no_init)
    );

}

} // namespace python
} // namespace dart
