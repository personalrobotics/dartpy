{{{header}}}
{{#includes}}
#include <{{{.}}}>
{{/includes}}

#include <boost/python.hpp>
#include <cmath>

/* main postinclude */

BOOST_PYTHON_MODULE({{module.name}})
{
{{{precontent}}}
{{#module.namespaces}}
  ::boost::python::scope().attr("{{name}}") = {{!
    }}::boost::python::object(::boost::python::handle<>({{!
        }}::boost::python::borrowed(::PyImport_AddModule({{!
            }}"{{#scope}}{{name}}{{^last}}.{{/last}}{{/scope}}"))));
{{/module.namespaces}}
{{#module.bindings}}
  void {{.}}();
  {{.}}();

{{/module.bindings}}
}
{{{postcontent}}}
{{{footer}}}
