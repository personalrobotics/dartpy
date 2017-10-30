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

void _ZN4dart8dynamics7LinkageE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage, ::boost::noncopyable, dart::dynamics::LinkagePtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Linkage", boost::python::no_init)
.def("isAssembled", [](const dart::dynamics::Linkage *self) -> bool { return self->isAssembled(); })
.def("reassemble", [](dart::dynamics::Linkage *self) -> void { return self->reassemble(); })
.def("satisfyCriteria", [](dart::dynamics::Linkage *self) -> void { return self->satisfyCriteria(); })
.def("create", [](const dart::dynamics::Linkage::Criteria & _criteria) -> dart::dynamics::LinkagePtr { return dart::dynamics::Linkage::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Linkage::Criteria & _criteria, const std::string & _name) -> dart::dynamics::LinkagePtr { return dart::dynamics::Linkage::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
