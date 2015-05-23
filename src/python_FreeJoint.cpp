#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_FreeJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::MultiDofJoint;
    using dart::dynamics::FreeJoint;

    scope joint_class(
        class_<FreeJoint, bases<MultiDofJoint<6> >,
               noncopyable>("FreeJoint", no_init)
    );
}

} // namespace python
} // namespace dart
