{{{header}}}
{{#includes}}
#include <{{{.}}}>
{{/includes}}
{{{precontent}}}
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void {{variable.mangled_name}}()
{

::boost::python::object parent_object(::boost::python::scope(){{!
    }}{{#function.scope}}.attr("{{name}}"){{/function.scope}}){{!
    }}.attr("{{variable.name}}") = {{variable.qualified_name}}
;}
{{{postcontent}}}
{{{footer}}}
