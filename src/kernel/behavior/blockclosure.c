#include <pinocchio.h>

/* ======================================================================= */
Class BlockClosure_class;
/* ======================================================================= */

BlockClosure new_BlockClosure(JumpTarget return_target, Block code)
{
    NEW_OBJECT(BlockClosure);
    result->return_target = return_target;
    result->code          = code;
    return result;
}
