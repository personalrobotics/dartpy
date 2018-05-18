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

void _ZN4dart8dynamics19SharedLibraryIkFastE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SharedLibraryIkFast, ::boost::python::bases<dart::dynamics::IkFast > >("SharedLibraryIkFast", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * ik, const std::string & filePath, const std::vector<std::size_t> & dofMap, const std::vector<std::size_t> & freeDofMap) -> dart::dynamics::SharedLibraryIkFast * { return new dart::dynamics::SharedLibraryIkFast(ik, filePath, dofMap, freeDofMap); }, ::boost::python::default_call_policies(), (::boost::python::arg("ik"), ::boost::python::arg("filePath"), ::boost::python::arg("dofMap"), ::boost::python::arg("freeDofMap"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * ik, const std::string & filePath, const std::vector<std::size_t> & dofMap, const std::vector<std::size_t> & freeDofMap, const std::string & methodName) -> dart::dynamics::SharedLibraryIkFast * { return new dart::dynamics::SharedLibraryIkFast(ik, filePath, dofMap, freeDofMap, methodName); }, ::boost::python::default_call_policies(), (::boost::python::arg("ik"), ::boost::python::arg("filePath"), ::boost::python::arg("dofMap"), ::boost::python::arg("freeDofMap"), ::boost::python::arg("methodName"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * ik, const std::string & filePath, const std::vector<std::size_t> & dofMap, const std::vector<std::size_t> & freeDofMap, const std::string & methodName, const dart::dynamics::InverseKinematics::Analytical::Properties & properties) -> dart::dynamics::SharedLibraryIkFast * { return new dart::dynamics::SharedLibraryIkFast(ik, filePath, dofMap, freeDofMap, methodName, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("ik"), ::boost::python::arg("filePath"), ::boost::python::arg("dofMap"), ::boost::python::arg("freeDofMap"), ::boost::python::arg("methodName"), ::boost::python::arg("properties"))))
.def("clone", [](const dart::dynamics::SharedLibraryIkFast *self, dart::dynamics::InverseKinematics * newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(newIK); }, (::boost::python::arg("newIK")))
;
}

/* footer */
