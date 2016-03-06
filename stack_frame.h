//
// Created by mandy on 2016/3/6.
//

#ifndef UNTITLED_STACK_FRAME_H
#define UNTITLED_STACK_FRAME_H

#include "types.h"
union variable
{
    u1 charValue;
    u2 shortValue;
    u4 intValue;
    long longValue;
    void*  refValue; //should be javaObj * refvalue
};
struct jvm_stack{
     stack_frame * head;
     stack_frame * current;
     u4 size;
};
class stack_frame {
public:
    variable *local_vars;
    variable *operand_stack;
    u4 *method;
    u1 *return_addr;
    u4 offset;
    u2 max_stack;
    u2 max_locals;
    struct stack_frame *prev;
    stack_frame(u2 max_op_stack, u2 max_local_vars)() {
        operand_stack = new variable[max_op_stack];
        local_vars = new variable[max_local_vars];
    }


};


#endif //UNTITLED_STACK_FRAME_H
