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

/* postinclude */

void _ZN4dart6common6detail4NoOpIJPNS_8dynamics14DynamicsAspectEEEEvDpT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("NoOp", [](dart::dynamics::DynamicsAspect * _arg0_) -> void { return dart::common::detail::NoOp<dart::dynamics::DynamicsAspect *>(_arg0_); }, (::boost::python::arg("_arg0_")));

}

/* footer */
