//
// Created by mandy on 2016/3/6.
//

#ifndef UNTITLED_INSTRUCTION_SET_H
#define UNTITLED_INSTRUCTION_SET_H


#include "stack_frame.h"

class instruction_set {
public:
    void nop();
    void aconst_null();

    static  void iconst_m1(stack_frame* pFrame );
    static  void iconst_0(stack_frame* pFrame );
    static  void iconst_1(stack_frame* pFrame );
    static  void iconst_2(stack_frame* pFrame );
    static  void iconst_5(stack_frame* pFrame );


};


#endif //UNTITLED_INSTRUCTION_SET_H
