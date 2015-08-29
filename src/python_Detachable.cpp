#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/renderer/RenderInterface.h>

using boost::noncopyable;
using dart::common::Subject;
using dart::dynamics::Detachable;
using dart::dynamics::Entity;
using dart::dynamics::Frame;
using dart::dynamics::ShapePtr;

namespace dart {
namespace python {

void python_Detachable()
{
    using namespace boost::python;

    using boost::noncopyable;

    class_<Detachable, bases<Entity>, noncopyable>("Detachable",
         init<Frame*, const std::string&, bool>())
        .def("setParentFrame", &Detachable::setParentFrame)
        ;
}

}
}
