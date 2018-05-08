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

void _ZN4dart6common6detail13GetAspectImplINS_8dynamics10FixedFrameELb0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::GetAspectImpl<dart::dynamics::FixedFrame, false>, ::boost::noncopyable >("_ZN4dart6common6detail13GetAspectImplINS_8dynamics10FixedFrameELb0EEE", boost::python::no_init)
;
}

/* footer */
