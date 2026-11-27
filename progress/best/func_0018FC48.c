extern void func_00151A28(void *, s32, s32, void *, s32);
extern void func_001539A0(void *, void *, s32, void *, s32, s32);
extern s32 func_003FA9B8(void *);
extern void func_002B2028(void *);
extern char D_0040E658[];
extern char D_004712A8[];
extern s32 D_0040E618[];

void *func_0018FC48(void *arg0, s32 arg1, void *arg2) {
    void *sp[4];
    void *p;
    void *obj;

    if (*(s32 *)(D_0040E658 + 0xC) != 0) {
        p = (void *)func_00151930(D_0040E658);
    } else {
        *(s32 *)(D_0040E658 + 8) = *(s32 *)(D_0040E658 + 8) + 1;
        p = D_0040E658 + 0x10;
    }
    sp[0] = p;

    func_00151A28(sp, 0, -1, D_004712A8, func_003FA9B8(D_004712A8));
    func_001539A0(sp, *(void **)((char *)sp[0] - 0x10), 0, arg2, 0, -1);

    obj = sp[0];
    p = (char *)obj - 0x10;
    if (*(s32 *)((char *)p + 0xC) == 0) {
        *(s32 *)((char *)p + 8) = *(s32 *)((char *)p + 8) + 1;
    } else {
        p = (void *)func_00151930(p);
    }
    *(void **)arg0 = p;

    {
        void *q = (char *)sp[0] - 0x10;
        s32 rc = *(s32 *)((char *)q + 8) - 1;
        *(s32 *)((char *)q + 8) = rc;
        if (rc == 0) {
            if (*(s32 *)((char *)q + 4) + 0x10 != 0) {
                func_002B2028(q);
            } else {
                *(s32 *)((char *)sp[0] - 0x10) = D_0040E618[-1];
                D_0040E618[-1] = (s32)q;
            }
        }
    }

    return arg0;
}
