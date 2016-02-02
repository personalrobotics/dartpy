#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8renderer16DecoColorChannelE()
{
::boost::python::enum_<dart::renderer::DecoColorChannel>("DecoColorChannel")
.value("CC_R", dart::renderer::DecoColorChannel::CC_R)
.value("CC_G", dart::renderer::DecoColorChannel::CC_G)
.value("CC_B", dart::renderer::DecoColorChannel::CC_B)
.value("CC_A", dart::renderer::DecoColorChannel::CC_A)
.value("CC_RGB", dart::renderer::DecoColorChannel::CC_RGB)
.value("CC_RGBA", dart::renderer::DecoColorChannel::CC_RGBA)
;
}

/* footer */
