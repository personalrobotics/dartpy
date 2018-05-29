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

void _ZN4dart8dynamics6IkFastE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::IkFast, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::Analytical > >("IkFast", boost::python::no_init)
.def("computeSolutions", [](dart::dynamics::IkFast *self, const Eigen::Isometry3d & desiredBodyTf) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->computeSolutions(desiredBodyTf); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("desiredBodyTf")))
.def("getDofs", [](const dart::dynamics::IkFast *self) -> const std::vector<std::size_t> & { return self->getDofs(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isConfigured", [](const dart::dynamics::IkFast *self) -> bool { return self->isConfigured(); })
;
}

/* footer */
