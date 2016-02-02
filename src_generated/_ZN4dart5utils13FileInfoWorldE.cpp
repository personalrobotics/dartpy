#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils13FileInfoWorldE()
{
::boost::python::class_<dart::utils::FileInfoWorld, ::boost::noncopyable >("FileInfoWorld", boost::python::no_init)
.def(::boost::python::init<>())
.def("loadFile", static_cast<bool (dart::utils::FileInfoWorld::*)(const char *)>(&dart::utils::FileInfoWorld::loadFile), (::boost::python::arg("_fileName")))
.def("saveFile", static_cast<bool (dart::utils::FileInfoWorld::*)(const char *, dart::simulation::Recording *)>(&dart::utils::FileInfoWorld::saveFile), (::boost::python::arg("_fileName"), ::boost::python::arg("_record")))
;
}

/* footer */
