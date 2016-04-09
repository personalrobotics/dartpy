#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10DetachableE_docstring[] = R"CHIMERA_STRING( The Detachable class is a special case of the Entity base class. Detachable
 allows the Entity's reference Frame to be changed arbitrarily by the user.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10Detachable14setParentFrameEPNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Allows the user to change the parent Frame of this Entity
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10DetachableE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Detachable, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("Detachable", _ZN4dart8dynamics10DetachableE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name, bool _quiet) -> dart::dynamics::Detachable * { return new dart::dynamics::Detachable(_refFrame, _name, _quiet); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_quiet"))))
.def("setParentFrame", [](dart::dynamics::Detachable *self, dart::dynamics::Frame * _newParentFrame) -> void { return self->setParentFrame(_newParentFrame); }, _ZN4dart8dynamics10Detachable14setParentFrameEPNS0_5FrameE_docstring, (::boost::python::arg("_newParentFrame")))
;
}

/* footer */
