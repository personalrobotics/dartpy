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

void _ZN4dart6common8Resource8SeekTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("Resource"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::common::Resource::SeekType>("SeekType")
.value("SEEKTYPE_CUR", dart::common::Resource::SeekType::SEEKTYPE_CUR)
.value("SEEKTYPE_END", dart::common::Resource::SeekType::SEEKTYPE_END)
.value("SEEKTYPE_SET", dart::common::Resource::SeekType::SEEKTYPE_SET)
;
}

/* footer */
