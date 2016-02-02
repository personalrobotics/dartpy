#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common5TimerE()
{
::boost::python::class_<dart::common::Timer >("Timer", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_name"))))
.def("start", static_cast<void (dart::common::Timer::*)()>(&dart::common::Timer::start))
.def("isStarted", static_cast<bool (dart::common::Timer::*)() const>(&dart::common::Timer::isStarted))
.def("stop", static_cast<void (dart::common::Timer::*)()>(&dart::common::Timer::stop))
.def("getElapsedTime", static_cast<double (dart::common::Timer::*)()>(&dart::common::Timer::getElapsedTime))
.def("getLastElapsedTime", static_cast<double (dart::common::Timer::*)() const>(&dart::common::Timer::getLastElapsedTime))
.def("getTotalElapsedTime", static_cast<double (dart::common::Timer::*)() const>(&dart::common::Timer::getTotalElapsedTime))
.def("print", static_cast<void (dart::common::Timer::*)()>(&dart::common::Timer::print))
.def("getWallTime", static_cast<double (*)()>(&dart::common::Timer::getWallTime))
.staticmethod("getWallTime")
;
}

/* footer */
