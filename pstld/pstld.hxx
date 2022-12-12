#pragma once

#include <iosfwd>
#include <string>

#include <pstld/export.hxx>

namespace pstld
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  PSTLD_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
