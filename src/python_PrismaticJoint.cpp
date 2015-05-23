#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_PrismaticJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::PrismaticJoint;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<PrismaticJoint, bases<SingleDofJoint>,
               noncopyable>("PrismaticJoint", no_init)
    );

    class_<PrismaticJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("axis", &PrismaticJoint::UniqueProperties::mAxis)
        ;

    class_<PrismaticJoint::Properties, bases<
            SingleDofJoint::Properties, PrismaticJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
