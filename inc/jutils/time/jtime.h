#ifndef TIME_H
#define TIME_H
#include <ctime>
#include <string>
#include "jutils/system/jscope.h"
#include "jutils/system/jpresentable.h"

JSCOPE_BEGIN_TWO(jutils, time)
#define JTIME_DEFAULT_FORMAT  "%c"

class jtime : public system::jpresentable{
   std::time_t raw;
   std::string str;

public:
   jtime(const std::string &format = JTIME_DEFAULT_FORMAT);
   std::string current(const std::string &format = JTIME_DEFAULT_FORMAT);
   const std::string present() const;

};
JSCOPE_END_TWO

#endif