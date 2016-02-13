#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common5AddonE()
{
::boost::python::class_<dart::common::Addon, ::boost::noncopyable >("Addon", boost::python::no_init)
.def("cloneAddon", static_cast<std::unique_ptr<dart::common::Addon> (dart::common::Addon::*)(dart::common::AddonManager *) const>(&dart::common::Addon::cloneAddon), (::boost::python::arg("newManager")))
.def("setAddonState", static_cast<void (dart::common::Addon::*)(const dart::common::Addon::State &)>(&dart::common::Addon::setAddonState), (::boost::python::arg("otherState")))
.def("setAddonProperties", static_cast<void (dart::common::Addon::*)(const dart::common::Addon::Properties &)>(&dart::common::Addon::setAddonProperties), (::boost::python::arg("someProperties")))
.def("isOptional", static_cast<bool (dart::common::Addon::*)(dart::common::AddonManager *)>(&dart::common::Addon::isOptional), (::boost::python::arg("oldManager")))
;
}

/* footer */
