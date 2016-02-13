#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils9VskParser12readSkeletonERKNS_6common3UriENS1_7OptionsE()
{
boost::python::def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::common::Uri &, const dart::utils::VskParser::Options)>(&dart::utils::VskParser::readSkeleton), (::boost::python::arg("fileUri"), ::boost::python::arg("options")))
;}

/* footer */
