#ifndef JDATALOGGER_H
#define JDATALOGGER_H
#include "jutils/system/jscope.h"
#include "jutils/logging/jabstractlogger.h"

JSCOPE_BEGIN_TWO(jutils, logging)
template<typename T>
class jdatalogger: public jabstractlogger<T> {

public:
   jdatalogger(std::ostream &stream)
      :jabstractlogger<T>(stream) {}

   bool write(const jlognode<T> &jln) {
      this->rawstream().write((const char*)jln.data, jln.size);
      return this->rawstream().good();
   }

   bool write(const T *data, const unsigned size) {
      return write(JLN_RAW(data, T, size));
   }

   jabstractlogger<T> &operator << (const jlognode<T> &jln) {
      write(jln);
      return *this;
   }

};
JSCOPE_END_TWO

#endif