#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_UniversalJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::UniversalJoint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<UniversalJoint, bases<MultiDofJoint<2> >,
               noncopyable>("UniversalJoint", no_init)
    );

    class_<UniversalJoint::UniqueProperties>("UniqueProperties")
        // TODO: This will need special bindings.
        .def_readwrite("axis", &UniversalJoint::UniqueProperties::mAxis)
        ;

    class_<UniversalJoint::Properties, bases<
            MultiDofJoint<2>::Properties, UniversalJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
