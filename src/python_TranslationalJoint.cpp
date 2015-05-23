#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_TranslationalJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::TranslationalJoint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<TranslationalJoint, bases<MultiDofJoint<3> >,
               noncopyable>("TranslationalJoint", no_init)
    );

    class_<TranslationalJoint::Properties, bases<
            MultiDofJoint<3>::Properties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
