#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui16DecoColorChannelE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::gui::DecoColorChannel>("DecoColorChannel")
.value("CC_R", dart::gui::DecoColorChannel::CC_R)
.value("CC_G", dart::gui::DecoColorChannel::CC_G)
.value("CC_B", dart::gui::DecoColorChannel::CC_B)
.value("CC_A", dart::gui::DecoColorChannel::CC_A)
.value("CC_RGB", dart::gui::DecoColorChannel::CC_RGB)
.value("CC_RGBA", dart::gui::DecoColorChannel::CC_RGBA)
;
}

/* footer */
