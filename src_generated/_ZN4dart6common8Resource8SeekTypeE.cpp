#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common8Resource8SeekTypeE()
{
::boost::python::enum_<dart::common::Resource::SeekType>("SeekType")
.value("SEEKTYPE_CUR", dart::common::Resource::SeekType::SEEKTYPE_CUR)
.value("SEEKTYPE_END", dart::common::Resource::SeekType::SEEKTYPE_END)
.value("SEEKTYPE_SET", dart::common::Resource::SeekType::SEEKTYPE_SET)
;
}

/* footer */
