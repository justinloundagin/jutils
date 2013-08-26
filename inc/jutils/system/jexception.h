#ifndef JEXCEPTION_H
#define JEXCEPTION_H
#include <exception>
#include <string>
#include <cerrno>
#include "jutils/system/jscope.h"

JSCOPE_BEGIN_TWO(jutils, system)
struct jexception : public std::exception {
   std::string msg;

   jexception(const std::string &msg) throw()
   :std::exception(), msg(msg) {}

   jexception() throw()
   :std::exception(), msg(strerror(errno)) {}

   ~jexception() throw() {}

 //  const char* what() const throw { return msg.c_str(); }
};
JSCOPE_END_TWO

#endif

