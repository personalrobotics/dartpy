#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8renderer16DecoColorChannelE()
{
::boost::python::object parent_object(::boost::python::scope().attr("renderer"));
::boost::python::scope parent_scope(parent_object);

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
