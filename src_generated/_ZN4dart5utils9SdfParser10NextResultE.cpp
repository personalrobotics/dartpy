#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils9SdfParser10NextResultE()
{
::boost::python::enum_<dart::utils::SdfParser::NextResult>("NextResult")
.value("VALID", dart::utils::SdfParser::NextResult::VALID)
.value("CONTINUE", dart::utils::SdfParser::NextResult::CONTINUE)
.value("BREAK", dart::utils::SdfParser::NextResult::BREAK)
.value("CREATE_FREEJOINT_ROOT", dart::utils::SdfParser::NextResult::CREATE_FREEJOINT_ROOT)
;
}

/* footer */
