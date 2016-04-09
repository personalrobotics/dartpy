#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart3gui6JitterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::Jitter, ::boost::noncopyable >("Jitter", boost::python::no_init)
.add_static_property("j2", ::boost::python::make_getter(dart::gui::Jitter::j2))
.add_static_property("j4", ::boost::python::make_getter(dart::gui::Jitter::j4))
.add_static_property("j8", ::boost::python::make_getter(dart::gui::Jitter::j8))
.add_static_property("j15", ::boost::python::make_getter(dart::gui::Jitter::j15))
.add_static_property("j24", ::boost::python::make_getter(dart::gui::Jitter::j24))
.add_static_property("j66", ::boost::python::make_getter(dart::gui::Jitter::j66))
;
}

/* footer */
