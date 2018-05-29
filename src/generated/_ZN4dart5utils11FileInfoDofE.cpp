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

void _ZN4dart5utils11FileInfoDofE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoDof, ::boost::noncopyable >("FileInfoDof", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Skeleton * _skel) -> dart::utils::FileInfoDof * { return new dart::utils::FileInfoDof(_skel); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skel"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Skeleton * _skel, double _fps) -> dart::utils::FileInfoDof * { return new dart::utils::FileInfoDof(_skel, _fps); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skel"), ::boost::python::arg("_fps"))))
.def("loadFile", [](dart::utils::FileInfoDof *self, const char * _fileName) -> bool { return self->loadFile(_fileName); }, (::boost::python::arg("_fileName")))
.def("saveFile", [](dart::utils::FileInfoDof *self, const char * _fileName, std::size_t _start, std::size_t _end) -> bool { return self->saveFile(_fileName, _start, _end); }, (::boost::python::arg("_fileName"), ::boost::python::arg("_start"), ::boost::python::arg("_end")))
.def("saveFile", [](dart::utils::FileInfoDof *self, const char * _fileName, std::size_t _start, std::size_t _end, double _sampleRate) -> bool { return self->saveFile(_fileName, _start, _end, _sampleRate); }, (::boost::python::arg("_fileName"), ::boost::python::arg("_start"), ::boost::python::arg("_end"), ::boost::python::arg("_sampleRate")))
.def("addDof", [](dart::utils::FileInfoDof *self, const Eigen::VectorXd & _dofs) -> void { return self->addDof(_dofs); }, (::boost::python::arg("_dofs")))
.def("getDofAt", [](const dart::utils::FileInfoDof *self, std::size_t _frame, std::size_t _id) -> double { return self->getDofAt(_frame, _id); }, (::boost::python::arg("_frame"), ::boost::python::arg("_id")))
.def("getPoseAtFrame", [](const dart::utils::FileInfoDof *self, int _frame) -> Eigen::VectorXd { return self->getPoseAtFrame(_frame); }, (::boost::python::arg("_frame")))
.def("setFPS", [](dart::utils::FileInfoDof *self, double _fps) -> void { return self->setFPS(_fps); }, (::boost::python::arg("_fps")))
.def("getFPS", [](const dart::utils::FileInfoDof *self) -> double { return self->getFPS(); })
.def("getNumFrames", [](const dart::utils::FileInfoDof *self) -> int { return self->getNumFrames(); })
.def("getSkel", [](const dart::utils::FileInfoDof *self) -> dart::dynamics::Skeleton * { return self->getSkel(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
;
}

/* footer */
