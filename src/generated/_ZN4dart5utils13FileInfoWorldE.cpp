#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils13FileInfoWorldE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils13FileInfoWorld8loadFileEPKc_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils13FileInfoWorld8saveFileEPKcPNS_10simulation9RecordingE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils13FileInfoWorld12getRecordingEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils13FileInfoWorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoWorld, ::boost::noncopyable >("FileInfoWorld", _ZN4dart5utils13FileInfoWorldE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::FileInfoWorld * { return new dart::utils::FileInfoWorld(); }, ::boost::python::default_call_policies()))
.def("loadFile", [](dart::utils::FileInfoWorld *self, const char * _fileName) -> bool { return self->loadFile(_fileName); }, _ZN4dart5utils13FileInfoWorld8loadFileEPKc_docstring, (::boost::python::arg("_fileName")))
.def("saveFile", [](dart::utils::FileInfoWorld *self, const char * _fileName, dart::simulation::Recording * _record) -> bool { return self->saveFile(_fileName, _record); }, _ZN4dart5utils13FileInfoWorld8saveFileEPKcPNS_10simulation9RecordingE_docstring, (::boost::python::arg("_fileName"), ::boost::python::arg("_record")))
.def("getRecording", [](const dart::utils::FileInfoWorld *self) -> dart::simulation::Recording * { return self->getRecording(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZNK4dart5utils13FileInfoWorld12getRecordingEv_docstring)
;
}

/* footer */
