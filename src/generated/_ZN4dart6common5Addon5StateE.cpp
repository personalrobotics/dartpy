#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common5Addon5StateE_docstring[] = R"CHIMERA_STRING( If your Addon has a State class, then that State class should inherit this
 Addon::State class. This allows us to safely serialize, store, and clone
 the states of arbitrary Addon extensions. If your Addon is stateless, then
 you do not have to worry about extending this class, because
 Addon::getState() will simply return a nullptr by default, which is taken
 to indicate that it is stateless.
 The distinction between the State class and the Properties class is that
 State will get stored in AddonManager::State whereas Properties will get
 stored in AddonManager::Properties. Typically Properties are values that
 only change rarely if ever, whereas State contains values that might
 change as often as every time step.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common5Addon5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("Addon"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Addon::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::common::Addon::State> > >("State", _ZN4dart6common5Addon5StateE_docstring, boost::python::no_init)
;
}

/* footer */
