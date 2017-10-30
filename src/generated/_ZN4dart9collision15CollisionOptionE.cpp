#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision15CollisionOptionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionOption >("CollisionOption", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::collision::CollisionOption * { return new dart::collision::CollisionOption(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](bool enableContact) -> dart::collision::CollisionOption * { return new dart::collision::CollisionOption(enableContact); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"))))
.def("__init__", ::boost::python::make_constructor([](bool enableContact, std::size_t maxNumContacts) -> dart::collision::CollisionOption * { return new dart::collision::CollisionOption(enableContact, maxNumContacts); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"), ::boost::python::arg("maxNumContacts"))))
.def("__init__", ::boost::python::make_constructor([](bool enableContact, std::size_t maxNumContacts, const std::shared_ptr<dart::collision::CollisionFilter> & collisionFilter) -> dart::collision::CollisionOption * { return new dart::collision::CollisionOption(enableContact, maxNumContacts, collisionFilter); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableContact"), ::boost::python::arg("maxNumContacts"), ::boost::python::arg("collisionFilter"))))
.def_readwrite("enableContact", &dart::collision::CollisionOption::enableContact)
.def_readwrite("maxNumContacts", &dart::collision::CollisionOption::maxNumContacts)
.def_readwrite("collisionFilter", &dart::collision::CollisionOption::collisionFilter)
;
}

/* footer */
