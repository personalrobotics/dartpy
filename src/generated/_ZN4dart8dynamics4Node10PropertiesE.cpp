#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics4Node10PropertiesE_docstring[] = R"CHIMERA_STRING( If your Node has a Properties class, then that Properties class should
 inherit this Node::Properties class. This allows us to safely serialize,
 store, and clone the properties of arbitrary Node extensions. If your
 Node has no properties, then you do not have to worry about extending
 this class, because Node::getNodeProperties() will simply return a nullptr
 by default, which is taken to indicate that it has no properties.
 The distinction between the State class and the Properties class is that
 State will get stored in BodyNode::ExtendedState whereas Properties will
 get stored in BodyNode::ExtendedProperties. Typically Properties are
 values that only change rarely if ever, whereas State contains values that
 might change as often as every time step.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics4Node10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Node"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node::Properties, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::dynamics::Node::Properties> > >("Properties", _ZN4dart8dynamics4Node10PropertiesE_docstring, boost::python::no_init)
;
}

/* footer */
