#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_EulerJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::EulerJoint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<EulerJoint, bases<MultiDofJoint<3> >,
               noncopyable>("EulerJoint", no_init)
    );

    enum_<EulerJoint::AxisOrder>("AxisOrder")
        .value("ZYX", EulerJoint::AO_ZYX)
        .value("XYZ", EulerJoint::AO_XYZ)
        ;

    class_<EulerJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("axis_order", &EulerJoint::UniqueProperties::mAxisOrder)
        ;

    class_<EulerJoint::Properties, bases<
            MultiDofJoint<3>::Properties, EulerJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
