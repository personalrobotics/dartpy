#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE()
{
::boost::python::class_<dart::common::ExtensibleMapHolder<std::map<std::type_index, std::unique_ptr<dart::common::Addon::State, std::default_delete<dart::common::Addon::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Addon::State, std::default_delete<dart::common::Addon::State> > > > > > >("_ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS6_EESt4lessIS3_ESaISt4pairIKS3_S9_EEEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const std::map<std::type_index, std::unique_ptr<dart::common::Addon::State, std::default_delete<dart::common::Addon::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Addon::State, std::default_delete<dart::common::Addon::State> > > > > &>((::boost::python::arg("otherMap"))))
;
}

/* footer */
