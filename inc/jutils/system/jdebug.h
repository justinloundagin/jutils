#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <string>
#include "jutils/system/jscope.h"
#include "jutils/system/jpresentable.h"

JSCOPE_BEGIN_TWO(jutils, system)
struct jdebug{
   int line;
   std::string file, func;
   jdebug(const std::string &file = __FILE__, 
         const std::string &func = __FUNCTION__, 
         const int line = __LINE__);

   friend std::ostream &operator << (std::ostream &out, const jdebug &dbg);
}; 
JSCOPE_END_TWO
 
#endif