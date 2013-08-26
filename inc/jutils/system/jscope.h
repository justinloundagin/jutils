#ifndef JSCOPE_H
#define JSCOPE_H

#define JSCOPE_BEGIN(jspace) namespace jspace {
#define JSCOPE_BEGIN_TWO(jspace, jspace_inner) \
   JSCOPE_BEGIN(jspace) JSCOPE_BEGIN(jspace_inner)
#define JSCOPE_BEGIN_THREE(jspace, ...) \
   JSCOPE_BEGIN(jspace) JSCOPE_BEGIN_TWO(__VA_ARGS__)
#define JSCOPE_BEGIN_FOUR(jspace, ...) \
   JSCOPE_BEGIN(jspace) JSCOPE_BEGIN_THREE(__VA__ARGS__)

#define JSCOPE_END }
#define JSCOPE_END_TWO JSCOPE_END }
#define JSCOPE_END_THREE JSCOPE_END_TWO }
#define JSCOPE_END_FOUR JSCOPE_END_THREE }

#endif