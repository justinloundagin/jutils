#ifndef JLOGNODE_H
#define JLOGNODE_H
#include "jutils/system/jscope.h"

JSCOPE_BEGIN_TWO(jutils, logging)
template<typename T> 
struct jlognode {
   const T *data;
   int size;

   jlognode(const T *data, const int size)
      : data(data), size(size) {}
};
JSCOPE_END_TWO

#define JLN_RAW(data, type, bytes) jlognode<type>(data, bytes)
#define JLN(data, type) JLN_RAW(data, type, sizeof(type))
#define JLN_STR(str) JLN_RAW(str.c_str(), char, str.length())
#define JLN_CSTR(str) JLN_RAW(str, char, strlen(len))

#endif