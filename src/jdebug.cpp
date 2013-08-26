#include "jutils/system/jdebug.h"
#include <sstream>


static const std::string DEBUG_OUTPUT_SEPERATOR = " : ";

JSCOPE_BEGIN_TWO(jutils, system)

jdebug::jdebug(const std::string &file, const std::string &func, const int line)
   :file(file), func(func), line(line) {}

std::ostream &operator<<(std::ostream &out, const jdebug &dbg) {
   return out << dbg.file << DEBUG_OUTPUT_SEPERATOR 
              << dbg.func << DEBUG_OUTPUT_SEPERATOR
              << dbg.line;
}

JSCOPE_END_TWO