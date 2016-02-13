#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE()
{
::boost::python::class_<dart::common::ExtensibleMapHolder<std::map<std::type_index, std::unique_ptr<dart::common::Addon::Properties, std::default_delete<dart::common::Addon::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Addon::Properties, std::default_delete<dart::common::Addon::Properties> > > > > > >("_ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const std::map<std::type_index, std::unique_ptr<dart::common::Addon::Properties, std::default_delete<dart::common::Addon::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Addon::Properties, std::default_delete<dart::common::Addon::Properties> > > > > &>((::boost::python::arg("otherMap"))))
;
}

/* footer */
