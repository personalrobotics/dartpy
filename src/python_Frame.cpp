#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_Frame()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Frame;

    class_<Frame, noncopyable>("Frame", no_init)
        .add_property("relative_transform", make_function(
            &Frame::getRelativeTransform,
            return_value_policy<copy_const_reference>()))
        .add_property("world_transform", make_function(
            &Frame::getWorldTransform,
            return_value_policy<copy_const_reference>()))
        ;
}

}
}
