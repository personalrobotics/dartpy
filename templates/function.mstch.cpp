{{{header}}}
{{#includes}}
#include <{{{.}}}>
{{/includes}}
{{{precontent}}}
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void {{function.mangled_name}}()
{
::boost::python::object parent_object(::boost::python::scope(){{!
    }}{{#function.scope}}.attr("{{name}}"){{/function.scope}});
::boost::python::scope parent_scope(parent_object);

boost::python::def("{{function.name}}", {{!
    }}static_cast<{{{function.type}}}>(&{{function.qualified_name}}), {{!
    }}({{#function.params}}::boost::python::arg("{{name}}"){{^last}}, {{/last}}{{/function.params}})
;}
{{{postcontent}}}
{{{footer}}}
