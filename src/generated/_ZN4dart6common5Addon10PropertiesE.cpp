#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common5Addon10PropertiesE_docstring[] = R"CHIMERA_STRING( If your Addon has a Properties class, then it should inherit this
 Addon::Properties class. This allows us to safely serialize, store, and
 clone the properties of arbitrary Addon extensions. If your Addon has no
 properties, then you do not have to worry about extending this class,
 because Addon::getProperties() will simply return a nullptr by default,
 which is taken to indicate that it has no properties.
 The distinction between the State class and the Properties class is that
 State will get stored in AddonManager::State whereas Properties will get
 stored in AddonManager::Properties. Typically Properties are values that
 only change rarely if ever, whereas State contains values that might
 change as often as every time step.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common5Addon10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("Addon"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Addon::Properties, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::common::Addon::Properties> > >("Properties", _ZN4dart6common5Addon10PropertiesE_docstring, boost::python::no_init)
;
}

/* footer */
