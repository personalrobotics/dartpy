#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common13LocalResourceE_docstring[] = R"CHIMERA_STRING( 
 It is expected that each 
 will provide a concrete /
 instantiation of the Resource class. This interface exposes an similar API
 to that of the the standard C file manipulation functions.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common13LocalResource6isGoodEv_docstring[] = R"CHIMERA_STRING( Return if the resource is open and in a valid state.
)CHIMERA_STRING";

constexpr char _ZN4dart6common13LocalResource7getSizeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common13LocalResource4tellEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common13LocalResource4seekElNS0_8Resource8SeekTypeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common13LocalResourceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LocalResource, ::boost::noncopyable, ::boost::python::bases<dart::common::Resource > >("LocalResource", _ZN4dart6common13LocalResourceE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::string & _path) -> dart::common::LocalResource * { return new dart::common::LocalResource(_path); }, ::boost::python::default_call_policies(), (::boost::python::arg("_path"))))
.def("isGood", [](const dart::common::LocalResource *self) -> bool { return self->isGood(); }, _ZNK4dart6common13LocalResource6isGoodEv_docstring)
.def("getSize", [](dart::common::LocalResource *self) -> std::size_t { return self->getSize(); }, _ZN4dart6common13LocalResource7getSizeEv_docstring)
.def("tell", [](dart::common::LocalResource *self) -> std::size_t { return self->tell(); }, _ZN4dart6common13LocalResource4tellEv_docstring)
.def("seek", [](dart::common::LocalResource *self, std::ptrdiff_t _origin, dart::common::Resource::SeekType _mode) -> bool { return self->seek(_origin, _mode); }, _ZN4dart6common13LocalResource4seekElNS0_8Resource8SeekTypeE_docstring, (::boost::python::arg("_origin"), ::boost::python::arg("_mode")))
;
}

/* footer */
