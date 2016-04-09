#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common14VersionCounterE_docstring[] = R"CHIMERA_STRING( VersionCounter is an interface for objects that count their versions
)CHIMERA_STRING";

constexpr char _ZN4dart6common14VersionCounter16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version for this object
)CHIMERA_STRING";

constexpr char _ZNK4dart6common14VersionCounter10getVersionEv_docstring[] = R"CHIMERA_STRING( Get the version number of this object
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common14VersionCounterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::VersionCounter, ::boost::noncopyable >("VersionCounter", _ZN4dart6common14VersionCounterE_docstring, boost::python::no_init)
.def("incrementVersion", [](dart::common::VersionCounter *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart6common14VersionCounter16incrementVersionEv_docstring)
.def("getVersion", [](const dart::common::VersionCounter *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart6common14VersionCounter10getVersionEv_docstring)
;
}

/* footer */
