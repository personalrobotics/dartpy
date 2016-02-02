#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8renderer14DecoBufferTypeE()
{
::boost::python::enum_<dart::renderer::DecoBufferType>("DecoBufferType")
.value("BT_Front", dart::renderer::DecoBufferType::BT_Front)
.value("BT_Back", dart::renderer::DecoBufferType::BT_Back)
;
}

/* footer */
