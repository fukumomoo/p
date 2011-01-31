#ifndef KERNEL_OBJECT_CLASS_H
#define KERNEL_OBJECT_CLASS_H

#include <pinocchio.h>

/* ======================================================================= */

struct Behavior {
    Header              header;
    Layout              layout;
    Behavior            super;
    MethodDictionary    methods;
    Object              classfields[];
};

struct Class {
    Header              header;
    Layout              layout;
    Class               super;
    MethodDictionary    methods;
    Symbol              name;
    Object              package;
    Object              classfields[];
};

struct Metaclass {
    Header              header;
    Layout              layout;
    Behavior            super;
    MethodDictionary    methods;
    Class               instance;
    Object              classfields[];
};

extern Class Behavior_class;
extern Class Class_class;
extern Class Metaclass_class;

/* ======================================================================= */

extern Class raw_Bootstrapping_Class();
extern void init_class(Class class);
extern Class new_Bootstrapping_Class();

/* ======================================================================= */

extern void  set_super(Class child, Class superclass);
extern void  set_class(Object object, Class class);
extern Behavior get_class(Object object);

/* ======================================================================= */

#endif // KERNEL_OBJECT_CLASS_H