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

void _ZN4dart6common9CloneableINS0_6Aspect10PropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Cloneable<dart::common::Aspect::Properties>, ::boost::noncopyable >("CloneableAspectProperties", boost::python::no_init)
.def("clone", [](const dart::common::Cloneable<dart::common::Aspect::Properties> *self) -> std::unique_ptr<dart::common::Aspect::Properties> { return self->clone(); })
.def("copy", [](dart::common::Cloneable<dart::common::Aspect::Properties> *self, const dart::common::Aspect::Properties & anotherCloneable) -> void { return self->copy(anotherCloneable); }, (::boost::python::arg("anotherCloneable")))
;
}

/* footer */
