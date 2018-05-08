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

void _ZN4dart6common9CloneableINS0_6Aspect5StateEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Cloneable<dart::common::Aspect::State>, ::boost::noncopyable >("CloneableAspectState", boost::python::no_init)
.def("clone", [](const dart::common::Cloneable<dart::common::Aspect::State> *self) -> std::unique_ptr<dart::common::Aspect::State> { return self->clone(); })
.def("copy", [](dart::common::Cloneable<dart::common::Aspect::State> *self, const dart::common::Aspect::State & anotherCloneable) -> void { return self->copy(anotherCloneable); }, (::boost::python::arg("anotherCloneable")))
;
}

/* footer */
