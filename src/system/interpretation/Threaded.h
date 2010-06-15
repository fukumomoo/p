#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

#define THREADED(name) threaded* t_##name(threaded* pc) {
//    fwprintf(stderr, L"         : "#name"\n");
#define BREAK (threaded*)-1

/* ========================================================================= */

extern void CNT_eval_threaded();
extern void CNT_restore_env();

typedef void*(*threaded)(void* pc);

extern threaded* push_code(Array code);
extern void post_init_Threaded();
/* ======================================================================== */

extern threaded* t_push_nil(threaded* fp);
extern threaded* t_push_0(threaded* fp);
extern threaded* t_push_1(threaded* fp);
extern threaded* t_push_2(threaded* fp);
extern threaded* t_push_true(threaded* fp);
extern threaded* t_push_false(threaded* fp);
extern threaded* t_push_self(threaded* fp);

extern threaded* t_push1(threaded* fp);
extern threaded* t_push2(threaded* fp);
extern threaded* t_push3(threaded* fp);
extern threaded* t_push4(threaded* fp);
extern threaded* t_push5(threaded* fp);
extern threaded* t_pushn(threaded* fp);

extern threaded* t_push_variable(threaded* fp);
extern threaded* t_push_closure(threaded* fp);
extern threaded* t_push_class_reference(threaded* fp);
extern threaded* t_push_slot(threaded* fp);

extern threaded* t_zap(threaded* fp);
extern threaded* t_zap1(threaded* fp);
extern threaded* t_zap2(threaded* fp);
extern threaded* t_zap3(threaded* fp);
extern threaded* t_zap4(threaded* fp);
extern threaded* t_zap5(threaded* fp);

extern threaded* t_return(threaded* fp);
extern threaded* t_return_true(threaded* fp);
extern threaded* t_return_false(threaded* fp);
extern threaded* t_return_nil(threaded* fp);
extern threaded* t_return_self(threaded* fp);
extern threaded* t_return_0(threaded* fp);
extern threaded* t_return_1(threaded* fp);
extern threaded* t_return_next(threaded* fp);

extern long t_send0(long pc);
extern long t_send1(long pc);
extern long t_send2(long pc);
extern long t_send3(long pc);
extern long t_send4(long pc);
extern long t_send5(long pc);
extern long t_sendn(long pc);

extern long t_send_to_do_(long pc);
extern long t_send_ifFalse_(long pc);
extern long t_send_ifTrue_(long pc);
extern long t_send_ifTrue_ifFalse_(long pc);
extern long t_send_hash(long pc);
extern long t_send_value(long pc);

extern threaded* t_super0(threaded* fp);
extern threaded* t_super1(threaded* fp);
extern threaded* t_super2(threaded* fp);
extern threaded* t_super3(threaded* fp);
extern threaded* t_super4(threaded* fp);
extern threaded* t_super5(threaded* fp);
extern threaded* t_supern(threaded* fp);

extern threaded* t_assign(threaded* fp);
extern threaded* t_dup(threaded* fp);
extern threaded* t_send_value(threaded* fp);
extern threaded* t_restart(threaded* fp);

extern threaded* t_peek1(threaded* fp);
extern threaded* t_peek2(threaded* fp);
extern threaded* t_peek3(threaded* fp);
extern threaded* t_peek4(threaded* fp);
extern threaded* t_peek5(threaded* fp);

extern threaded* t_check1(threaded* fp);
extern threaded* t_check2(threaded* fp);
extern threaded* t_check3(threaded* fp);
extern threaded* t_check4(threaded* fp);
extern threaded* t_check5(threaded* fp);

#endif //INTERPRETATION_THREADED
