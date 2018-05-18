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

void _ZN4dart5utils11FileInfoC3DE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoC3D, ::boost::noncopyable >("FileInfoC3D", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::FileInfoC3D * { return new dart::utils::FileInfoC3D(); }, ::boost::python::default_call_policies()))
.def("getNumMarkers", [](const dart::utils::FileInfoC3D *self) -> int { return self->getNumMarkers(); })
.def("getNumFrames", [](const dart::utils::FileInfoC3D *self) -> int { return self->getNumFrames(); })
.def("getFPS", [](const dart::utils::FileInfoC3D *self) -> double { return self->getFPS(); })
.def("getDataAt", [](const dart::utils::FileInfoC3D *self, int _frame, int _idx) -> Eigen::Vector3d { return self->getDataAt(_frame, _idx); }, (::boost::python::arg("_frame"), ::boost::python::arg("_idx")))
.def("addData", [](dart::utils::FileInfoC3D *self, const std::vector<Eigen::Vector3d> & _data) -> void { return self->addData(_data); }, (::boost::python::arg("_data")))
.def("loadFile", [](dart::utils::FileInfoC3D *self, const char * _arg0_) -> bool { return self->loadFile(_arg0_); }, (::boost::python::arg("_arg0_")))
.def("saveFile", [](dart::utils::FileInfoC3D *self, const char * _arg0_, int _start, int _end) -> bool { return self->saveFile(_arg0_, _start, _end); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_start"), ::boost::python::arg("_end")))
.def("saveFile", [](dart::utils::FileInfoC3D *self, const char * _arg0_, int _start, int _end, double _sampleRate) -> bool { return self->saveFile(_arg0_, _start, _end, _sampleRate); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_start"), ::boost::python::arg("_end"), ::boost::python::arg("_sampleRate")))
;
}

/* footer */
