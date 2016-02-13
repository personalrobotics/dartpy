#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common22LocalResourceRetrieverE()
{
::boost::python::class_<dart::common::LocalResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::LocalResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("LocalResourceRetriever", boost::python::no_init)
.def("exists", static_cast<bool (dart::common::LocalResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::LocalResourceRetriever::exists), (::boost::python::arg("_uri")))
.def("retrieve", static_cast<dart::common::ResourcePtr (dart::common::LocalResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::LocalResourceRetriever::retrieve), (::boost::python::arg("_uri")))
;
}

/* footer */
