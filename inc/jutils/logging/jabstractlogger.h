#ifndef JABSTRACTLOGGER_H
#define JABSTRACTLOGGER_H
#include <ostream>
#include "jutils/system/jobject.h"
#include "jutils/system/jscope.h"
#include "jutils/logging/jlognode.h"
#include "jutils/system/jpresentable.h"

JSCOPE_BEGIN_TWO(jutils, logging)
template<typename T>
class jabstractlogger: public system::jobject {
   std::ostream &stream;

public:
   jabstractlogger(std::ostream &stream) 
      :system::jobject(), stream(stream) {}


   virtual bool write(const jlognode<T> &jln) = 0;
   virtual bool write(const T *data, const unsigned size) = 0;
   virtual jabstractlogger &operator << (const jlognode<T> &jln) = 0;

protected:
   std::ostream &rawstream() { 
      return stream;
   }
};
JSCOPE_END_TWO

#endif