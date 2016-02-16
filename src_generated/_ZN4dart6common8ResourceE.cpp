#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common8ResourceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Resource, ::boost::noncopyable >("Resource", boost::python::no_init)
.def("getSize", static_cast<std::size_t (dart::common::Resource::*)()>(&dart::common::Resource::getSize))
.def("tell", static_cast<std::size_t (dart::common::Resource::*)()>(&dart::common::Resource::tell))
.def("seek", static_cast<bool (dart::common::Resource::*)(std::ptrdiff_t, dart::common::Resource::SeekType)>(&dart::common::Resource::seek), (::boost::python::arg("_offset"), ::boost::python::arg("_origin")))
;
}

/* footer */
