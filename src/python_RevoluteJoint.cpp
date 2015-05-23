#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_RevoluteJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::RevoluteJoint;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<RevoluteJoint, bases<SingleDofJoint>,
               noncopyable>("RevoluteJoint", no_init)
    );

    class_<RevoluteJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("axis", &RevoluteJoint::UniqueProperties::mAxis)
        ;

    class_<RevoluteJoint::Properties, bases<
            SingleDofJoint::Properties, RevoluteJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
