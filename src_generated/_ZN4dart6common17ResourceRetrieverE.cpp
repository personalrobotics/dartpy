#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common17ResourceRetrieverE()
{
::boost::python::class_<dart::common::ResourceRetriever, std::shared_ptr<dart::common::ResourceRetriever>, ::boost::noncopyable >("ResourceRetriever", boost::python::no_init)
.def("exists", static_cast<bool (dart::common::ResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::ResourceRetriever::exists), (::boost::python::arg("_uri")))
.def("retrieve", static_cast<dart::common::ResourcePtr (dart::common::ResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::ResourceRetriever::retrieve), (::boost::python::arg("_uri")))
;
}

/* footer */
