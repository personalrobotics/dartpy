{{{header}}}
{{#includes}}
#include <{{{.}}}>
{{/includes}}
{{{precontent}}}
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void {{class.mangled_name}}()
{
::boost::python::object parent_object(::boost::python::scope(){{!
    }}{{#class.scope}}{{#name}}.attr("{{name}}"){{/name}}{{/class.scope}});
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<{{{class.type}}}{{^class.is_copyable}}, {{!
        }}::boost::noncopyable{{/class.is_copyable}}{{#class.held_type}}, {{!
        }}{{{.}}}{{/class.held_type}}{{#class.bases?}}, {{!
        }}::boost::python::bases<{{!
            }}{{#class.bases}}{{{qualified_name}}}{{^last}}, {{/last}}{{/class.bases}}{{!
        }} >{{/class.bases?}} >("{{class.name}}", boost::python::no_init){{!

/* constructors */}}
{{#class.constructors}}{{!
    }}.def(::boost::python::init<{{!
        }}{{#params}}{{{type}}}{{^last}}, {{/last}}{{/params}}{{!
    }}>({{#params?}}({{#params}}::boost::python::arg("{{name}}"){{^last}}, {{/last}}{{/params}}){{/params?}}))
{{/class.constructors}}{{!

/* methods */}}
{{#class.methods}}{{!
}}{{#overloads}}{{!
    }}.def("{{name}}", []({{{class.type}}} *self {{#params}}, {{{type}}} {{name}}{{/params}}) { {{!
        }}return (self->*static_cast<{{{type}}}>(&{{{qualified_name}}}))({{!
            }}{{#params}}{{name}}{{^last}}, {{/last}}{{/params}}); }{{!
    }}{{#return_value_policy}}, ::boost::python::return_value_policy<{{{.}}} >(){{/return_value_policy}}{{!
    }}{{#params?}}, ({{#params}}::boost::python::arg("{{name}}"){{^last}}, {{/last}}{{/params}}){{/params?}})
{{/overloads}}{{!
}}{{/class.methods}}{{!

/* static methods */}}
{{#class.methods}}{{!
    }}{{#is_static}}.staticmethod("{{name}}")
    {{/is_static}}
{{/class.methods}}{{!

/* fields */}}
{{#class.fields}}{{!
    }}{{#is_assignable}}.def_readwrite{{/is_assignable}}{{!
    }}{{^is_assignable}}.def_readonly{{/is_assignable}}{{!
    }}("{{name}}", &{{{qualified_name}}})
{{/class.fields}}{{!

/* static fields */
/* TODO: Add make_setter if this property is assignable */}}
{{#class.static_fields}}{{!
    }}.add_static_property("{{name}}", {{!
    }}::boost::python::make_getter({{{qualified_name}}}))
{{/class.static_fields}}
;
}
{{{postcontent}}}
{{{footer}}}
