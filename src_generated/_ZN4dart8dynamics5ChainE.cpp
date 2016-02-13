#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5ChainE()
{
::boost::python::class_<dart::dynamics::Chain, ::boost::noncopyable, dart::dynamics::ChainPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Chain", boost::python::no_init)
.def("create", static_cast<dart::dynamics::ChainPtr (*)(const dart::dynamics::Chain::Criteria &, const std::string &)>(&dart::dynamics::Chain::create), (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.def("create", static_cast<dart::dynamics::ChainPtr (*)(dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, const std::string &)>(&dart::dynamics::Chain::create), (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_name")))
.def("create", static_cast<dart::dynamics::ChainPtr (*)(dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, dart::dynamics::Chain::IncludeBoth_t, const std::string &)>(&dart::dynamics::Chain::create), (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg(""), ::boost::python::arg("_name")))
.def("isStillChain", static_cast<bool (dart::dynamics::Chain::*)() const>(&dart::dynamics::Chain::isStillChain))
.staticmethod("create")
;
}

/* footer */
