#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils9VskParser12readSkeletonERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEENS1_7OptionsE()
{
boost::python::def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &, const dart::utils::VskParser::Options)>(&dart::utils::VskParser::readSkeleton), (::boost::python::arg("fileUri"), ::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("options")))
;}

/* footer */
