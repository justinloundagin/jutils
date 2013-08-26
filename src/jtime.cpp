#include "jutils/time/jtime.h"
#include <iostream>

#define TIME_BUFFER_SIZE 256

JSCOPE_BEGIN_TWO(jutils, time)
jtime::jtime(const std::string &format) {
   format.empty() ? current() : current(format);
}


std::string jtime::current(const std::string &format) {
   char buffer[TIME_BUFFER_SIZE];
   raw = std::time(NULL);
   std::strftime(buffer, TIME_BUFFER_SIZE, format.c_str(), std::localtime(&raw));
   return str = std::string(buffer);
}

const std::string jtime::present() const {
   return str;
}

JSCOPE_END_TWO
