#include <kernel/object/object.h>

/* ======================================================================= */
Class True_class;
Class False_class;
Class UndefinedObject_class;
Object true;
Object false;
Object nil;
/* ======================================================================= */


Behavior classof(Object instance)
{
    return instance->header;
}
