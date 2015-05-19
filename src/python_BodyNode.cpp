#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"

void python_BodyNode()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::BodyNodePtr;

    class_<BodyNode, BodyNodePtr, boost::noncopyable>("BodyNode", no_init)
        .add_property("name",
            make_function(&BodyNode::getName,
                          return_value_policy<copy_const_reference>()),
            static_cast<void (*)(BodyNode *, std::string const &)>(
                &DISCARD_METHOD_RETURN(BodyNode, BodyNode::setName))
            )
        ;
}
