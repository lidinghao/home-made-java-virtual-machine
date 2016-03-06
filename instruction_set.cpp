//
// Created by mandy on 2016/3/6.
//

#include "instruction_set.h"

static void instruction_set::iconst_m1(stack_frame * pFrame) {
    pFrame->operand_stack[sp].intValue = -1;

}
