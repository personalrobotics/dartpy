#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision6OptionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::Option, ::boost::noncopyable >("Option", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::collision::Option * { return new dart::collision::Option(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](bool enableContact) -> dart::collision::Option * { return new dart::collision::Option(enableContact); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"))))
.def("__init__", ::boost::python::make_constructor([](bool enableContact, bool binaryCheck) -> dart::collision::Option * { return new dart::collision::Option(enableContact, binaryCheck); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"), ::boost::python::arg("binaryCheck"))))
.def("__init__", ::boost::python::make_constructor([](bool enableContact, bool binaryCheck, std::size_t maxNumContacts) -> dart::collision::Option * { return new dart::collision::Option(enableContact, binaryCheck, maxNumContacts); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"), ::boost::python::arg("binaryCheck"), ::boost::python::arg("maxNumContacts"))))
.def("__init__", ::boost::python::make_constructor([](bool enableContact, bool binaryCheck, std::size_t maxNumContacts, const std::shared_ptr<dart::collision::CollisionFilter> & collisionFilter) -> dart::collision::Option * { return new dart::collision::Option(enableContact, binaryCheck, maxNumContacts, collisionFilter); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"), ::boost::python::arg("binaryCheck"), ::boost::python::arg("maxNumContacts"), ::boost::python::arg("collisionFilter"))))
.def_readwrite("enableContact", &dart::collision::Option::enableContact)
.def_readwrite("binaryCheck", &dart::collision::Option::binaryCheck)
.def_readwrite("maxNumContacts", &dart::collision::Option::maxNumContacts)
.def_readwrite("collisionFilter", &dart::collision::Option::collisionFilter)
;
}

/* footer */
