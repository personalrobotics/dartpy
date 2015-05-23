#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_MultiDofJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::MultiDofJoint;

    class_<MultiDofJoint<2>, bases<Joint>,
           noncopyable>("TwoDofJoint", no_init)
        ;

    class_<MultiDofJoint<3>, bases<Joint>,
           noncopyable>("ThreeDofJoint", no_init)
        ;

    class_<MultiDofJoint<6>, bases<Joint>,
           noncopyable>("SixDofJoint", no_init)
        ;
}

} // namespace python
} // namespace dart
