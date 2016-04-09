#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common8ResourceE_docstring[] = R"CHIMERA_STRING( 
 It is expected that each 
 will provide a concrete /
 instantiation of the Resource class. This interface exposes an similar API
 to that of the the standard C file manipulation functions.
)CHIMERA_STRING";

constexpr char _ZN4dart6common8Resource7getSizeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common8Resource4tellEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common8Resource4seekElNS1_8SeekTypeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common8ResourceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Resource, ::boost::noncopyable >("Resource", _ZN4dart6common8ResourceE_docstring, boost::python::no_init)
.def("getSize", [](dart::common::Resource *self) -> std::size_t { return self->getSize(); }, _ZN4dart6common8Resource7getSizeEv_docstring)
.def("tell", [](dart::common::Resource *self) -> std::size_t { return self->tell(); }, _ZN4dart6common8Resource4tellEv_docstring)
.def("seek", [](dart::common::Resource *self, std::ptrdiff_t _offset, dart::common::Resource::SeekType _origin) -> bool { return self->seek(_offset, _origin); }, _ZN4dart6common8Resource4seekElNS1_8SeekTypeE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_origin")))
;
}

/* footer */
