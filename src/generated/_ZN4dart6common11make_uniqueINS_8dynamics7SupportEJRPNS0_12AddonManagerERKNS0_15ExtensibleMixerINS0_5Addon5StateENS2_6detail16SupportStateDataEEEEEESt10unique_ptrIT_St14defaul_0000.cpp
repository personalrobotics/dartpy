#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11make_uniqueINS_8dynamics7SupportEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon5StateENS2_6detail16SupportStateDataEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("make_unique", [](dart::common::AddonManager *& _arg0_, const dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData> & _arg1_) -> std::unique_ptr<dart::dynamics::Support> { return dart::common::make_unique<dart::dynamics::Support, dart::common::AddonManager *&, const dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData> &>(_arg0_, _arg1_); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")));

}

/* footer */
