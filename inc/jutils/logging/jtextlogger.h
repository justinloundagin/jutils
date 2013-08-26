#ifndef JTEXTLOGGER_H
#define JTEXTLOGGER_H

#include <iostream>
#include <string>
#include "jutils/system/jexception.h"
#include "jutils/logging/jdatalogger.h"
#include "jutils/system/jscope.h"
#include "jutils/system/jpresentable.h"


JSCOPE_BEGIN_TWO(jutils, logging)
struct jtextlogger: public jdatalogger<char> {
  jtextlogger(std::ostream &stream);

  jabstractlogger<char> &operator << (const system::jpresentable &obj);
  jabstractlogger<char> &operator << (const std::string &str);
};
JSCOPE_END_TWO

#endif