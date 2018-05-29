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

void _ZN4dart5utils13FileInfoWorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoWorld, ::boost::noncopyable >("FileInfoWorld", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::FileInfoWorld * { return new dart::utils::FileInfoWorld(); }, ::boost::python::default_call_policies()))
.def("loadFile", [](dart::utils::FileInfoWorld *self, const char * _fileName) -> bool { return self->loadFile(_fileName); }, (::boost::python::arg("_fileName")))
.def("saveFile", [](dart::utils::FileInfoWorld *self, const char * _fileName, dart::simulation::Recording * _record) -> bool { return self->saveFile(_fileName, _record); }, (::boost::python::arg("_fileName"), ::boost::python::arg("_record")))
.def("getRecording", [](const dart::utils::FileInfoWorld *self) -> dart::simulation::Recording * { return self->getRecording(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
;
}

/* footer */
