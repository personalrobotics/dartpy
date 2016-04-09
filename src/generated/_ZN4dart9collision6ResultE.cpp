#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision6Result10addContactERKNS0_7ContactE_docstring[] = R"CHIMERA_STRING( Add one contact
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision6Result14getNumContactsEv_docstring[] = R"CHIMERA_STRING( Return number of contacts
)CHIMERA_STRING";

constexpr char _ZN4dart9collision6Result10getContactEm_docstring[] = R"CHIMERA_STRING( Return the index-th contact
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision6Result11isCollisionEv_docstring[] = R"CHIMERA_STRING( Return binary collision result
)CHIMERA_STRING";

constexpr char _ZN4dart9collision6Result5clearEv_docstring[] = R"CHIMERA_STRING( Clear all the contacts
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision6ResultE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::Result, ::boost::noncopyable >("Result", boost::python::no_init)
.def("addContact", [](dart::collision::Result *self, const dart::collision::Contact & contact) -> void { return self->addContact(contact); }, _ZN4dart9collision6Result10addContactERKNS0_7ContactE_docstring, (::boost::python::arg("contact")))
.def("getNumContacts", [](const dart::collision::Result *self) -> std::size_t { return self->getNumContacts(); }, _ZNK4dart9collision6Result14getNumContactsEv_docstring)
.def("getContact", [](dart::collision::Result *self, std::size_t index) -> dart::collision::Contact & { return self->getContact(index); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart9collision6Result10getContactEm_docstring, (::boost::python::arg("index")))
.def("isCollision", [](const dart::collision::Result *self) -> bool { return self->isCollision(); }, _ZNK4dart9collision6Result11isCollisionEv_docstring)
.def("clear", [](dart::collision::Result *self) -> void { return self->clear(); }, _ZN4dart9collision6Result5clearEv_docstring)
;
}

/* footer */
