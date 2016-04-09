#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics4Node5StateE_docstring[] = R"CHIMERA_STRING( If your Node has a State class, then that State class should inherit this
 Node::State class. This allows us to safely serialize, store, and clone
 the states of arbitrary Node extensions. If your Node is stateless, then
 you do not have to worry about extending this class, because
 Node::getNodeState() will simply return a nullptr by default, which is
 taken to indicate that it is stateless.
 The distinction between the State class and the Properties class is that
 State will get stored in BodyNode::ExtendedState whereas Properties will
 get stored in BodyNode::ExtendedProperties. Typically Properties are
 values that only change rarely if ever, whereas State contains values that
 might change as often as every time step.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics4Node5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Node"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::dynamics::Node::State> > >("State", _ZN4dart8dynamics4Node5StateE_docstring, boost::python::no_init)
;
}

/* footer */
