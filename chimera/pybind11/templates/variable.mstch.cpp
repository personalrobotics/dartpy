{{header}}
{{#includes}}
#include <{{.}}>
{{/includes}}
{{#sources}}
#include <{{.}}>
{{/sources}}
{{precontent}}
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
{{postinclude}}

void {{variable.mangled_name}}(::pybind11::module& m)
{
    auto sm = m{{!
        }}{{#variable.scope}}{{#name}}.attr("{{name}}"){{/name}}{{/variable.scope}};

    sm.attr("{{variable.name}}") = {{variable.qualified_name}};
}

{{postcontent}}
{{footer}}