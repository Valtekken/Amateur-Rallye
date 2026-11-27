typedef struct { u64 w[94]; } Frame;
extern void *(*D_00426AC4)(void);
extern void func_002AD758(void);
extern void *func_002AFB50(void *, void *, u32, void **);
extern void *func_002ADFC0(void *, u32, Frame *, void **);
extern int __builtin_setjmp(void *);

void func_002AE4D0(u32 arg0) {
    Frame out, scratch;
    void *sp = __builtin_frame_address(0);
    u32 arg = arg0;
    void *state = D_00426AC4();
    Frame *scratchp = &scratch;
    void **slot = &sp;
    void *jb[64];
    if (__builtin_setjmp(jb)) { }

    if (*(u32 *)((char *)state + 8) == 0) func_002AD758();
    *(u32 *)((char *)state + 0xC) = arg;
label1:
    sp = func_002AFB50(&&label1, sp, arg, &sp);
    if (sp == 0) func_002AD758();
    *(void **)sp = (char *)__builtin_frame_address(0) + 0x700;
    scratch = *(Frame *)sp;
    *(void **)((char *)__builtin_frame_address(0) + 0x690) = &&label2;
label2:
    ((void (*)(void))func_002ADFC0(state, (u32)__builtin_return_address(0) - 1, scratchp, slot))();
}
