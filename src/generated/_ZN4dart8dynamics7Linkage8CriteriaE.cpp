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

void _ZN4dart8dynamics7Linkage8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria >("Criteria", boost::python::no_init)
.def("satisfy", [](const dart::dynamics::Linkage::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); })
.def_readwrite("mStart", &dart::dynamics::Linkage::Criteria::mStart)
.def_readwrite("mTargets", &dart::dynamics::Linkage::Criteria::mTargets)
.def_readwrite("mTerminals", &dart::dynamics::Linkage::Criteria::mTerminals)
;
}

/* footer */
