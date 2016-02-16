#include <dartpy/pointers.h>
#include <dart/dart.h>


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
