#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common13LocalResourceE()
{
::boost::python::class_<dart::common::LocalResource, ::boost::noncopyable, ::boost::python::bases<dart::common::Resource > >("LocalResource", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_path"))))
.def("isGood", static_cast<bool (dart::common::LocalResource::*)() const>(&dart::common::LocalResource::isGood))
.def("getSize", static_cast<std::size_t (dart::common::LocalResource::*)()>(&dart::common::LocalResource::getSize))
.def("tell", static_cast<std::size_t (dart::common::LocalResource::*)()>(&dart::common::LocalResource::tell))
.def("seek", static_cast<bool (dart::common::LocalResource::*)(std::ptrdiff_t, dart::common::Resource::SeekType)>(&dart::common::LocalResource::seek), (::boost::python::arg("_origin"), ::boost::python::arg("_mode")))
;
}

/* footer */
