#ifndef JPRESENTABLE_H
#define JPRESENTABLE_H
#include "jutils/system/jscope.h"
#include "jutils/system/jobject.h"

JSCOPE_BEGIN_TWO(jutils, system)
struct jpresentable : public jobject {
   virtual const std::string present() const = 0;
};
JSCOPE_END_TWO

#endif