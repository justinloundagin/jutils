#include "jutils/logging/jtextlogger.h"
#include "jutils/system/jscope.h"

JSCOPE_BEGIN_TWO(jutils, logging)
jtextlogger::jtextlogger(std::ostream &stream)
: jdatalogger<char>(stream) {}

jabstractlogger<char>& jtextlogger::operator << (const std::string &str) {
   write(JLN_STR(str));
   return *this;
}

jabstractlogger<char>& jtextlogger::operator << (const system::jpresentable &obj) {
   (*this) << obj.present();
}

JSCOPE_END_TWO