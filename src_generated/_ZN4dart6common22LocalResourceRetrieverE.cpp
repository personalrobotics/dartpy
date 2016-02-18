#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common22LocalResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LocalResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::LocalResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("LocalResourceRetriever")
.def("exists", static_cast<bool (dart::common::LocalResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::LocalResourceRetriever::exists), (::boost::python::arg("_uri")))
.def("retrieve", static_cast<dart::common::ResourcePtr (dart::common::LocalResourceRetriever::*)(const dart::common::Uri &)>(&dart::common::LocalResourceRetriever::retrieve), (::boost::python::arg("_uri")))
;
}

/* footer */
