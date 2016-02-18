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
    {{{prebody}}}
    ::boost::python::scope().attr("{{variable.name}}") = {{variable.qualified_name}};
    {{{postbody}}}
}
{{{postcontent}}}
{{{footer}}}
