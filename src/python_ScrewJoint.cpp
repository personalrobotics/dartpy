#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_ScrewJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::ScrewJoint;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<ScrewJoint, bases<SingleDofJoint>,
               noncopyable>("ScrewJoint", no_init)
    );

    class_<ScrewJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("axis", &ScrewJoint::UniqueProperties::mAxis)
        .def_readwrite("pitch", &ScrewJoint::UniqueProperties::mPitch)
        ;

    class_<ScrewJoint::Properties, bases<
            SingleDofJoint::Properties, ScrewJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
