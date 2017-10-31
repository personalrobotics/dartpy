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

void _ZN4dart8planning3RRT10StepResultE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning").attr("RRT"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::planning::RRT::StepResult>("")
.value("STEP_COLLISION", dart::planning::RRT::StepResult::STEP_COLLISION)
.value("STEP_REACHED", dart::planning::RRT::StepResult::STEP_REACHED)
.value("STEP_PROGRESS", dart::planning::RRT::StepResult::STEP_PROGRESS)
;
}

/* footer */
