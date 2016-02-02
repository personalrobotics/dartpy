#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common10ExtensibleINS0_5Addon5StateEEE()
{
::boost::python::class_<dart::common::Extensible<dart::common::Addon::State>, ::boost::noncopyable >("_ZN4dart6common10ExtensibleINS0_5Addon5StateEEE", boost::python::no_init)
.def("clone", static_cast<std::unique_ptr<dart::common::Addon::State> (dart::common::Extensible<dart::common::Addon::State>::*)() const>(&dart::common::Extensible<dart::common::Addon::State>::clone))
.def("copy", static_cast<void (dart::common::Extensible<dart::common::Addon::State>::*)(const dart::common::Addon::State &)>(&dart::common::Extensible<dart::common::Addon::State>::copy), (::boost::python::arg("anotherExtensible")))
;
}

/* footer */
