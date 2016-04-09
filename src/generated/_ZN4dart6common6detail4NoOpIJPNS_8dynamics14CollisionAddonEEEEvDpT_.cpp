#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common6detail4NoOpIJPNS_8dynamics14CollisionAddonEEEEvDpT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("NoOp", [](dart::dynamics::CollisionAddon * _arg0_) -> void { return dart::common::detail::NoOp<dart::dynamics::CollisionAddon *>(_arg0_); }, (::boost::python::arg("_arg0_")));

}

/* footer */
