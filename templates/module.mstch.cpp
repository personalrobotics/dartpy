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
{{#module.bindings}}
  void {{.}}();
  {{.}}();

  {{/module.bindings}}
}
{{{postcontent}}}
{{{footer}}}
