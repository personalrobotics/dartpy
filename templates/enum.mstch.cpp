{{{header}}}
{{#includes}}
#include <{{{.}}}>
{{/includes}}
{{{precontent}}}
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void {{enum.mangled_name}}()
{
::boost::python::object parent_object(::boost::python::scope(){{!
    }}{{#enum.scope}}.attr("{{name}}"){{/enum.scope}});
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<{{enum.qualified_name}}>("{{enum.name}}"){{#enum.values}}
.value("{{name}}", {{qualified_name}}){{/enum.values}}
;
}
{{{postcontent}}}
{{{footer}}}