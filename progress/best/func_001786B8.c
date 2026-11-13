extern s32 func_00151930(void *);
extern void func_00151A28(void *, s32, u32, void *, s32);
extern s32 func_003FA9B8(void *);
extern void *func_001D4010(s32);
extern void func_001D4810(s32 *, void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern s32 D_0040E658[];
extern char D_0044E838[];
extern char D_0044FD00[];
extern char D_0044FD10[];

s32 *func_001786B8(s32 *arg0, s32 arg1) {
    void *sp0_storage;
    void *buf = &sp0_storage;
    void *pool = (void *)D_0040E658;
    s32 v;
    if (((s32 *)pool)[3] != 0) {
        v = func_00151930(pool);
    } else {
        ((s32 *)pool)[2]++;
        v = (s32)pool + 0x10;
    }
    *(s32 *)buf = (s32)v;
    func_00151A28(buf, 0, 0xFFFFFFFFu, D_0044FD00, func_003FA9B8(D_0044FD00));
    {
        void *t = func_001D4010(arg1);
        s32 len2 = func_003FA9B8(t);
        void *sp0 = *(void **)buf;
        s32 field = *(s32 *)((char *)sp0 - 0x10);
        func_00151A28(buf, field, 0, t, len2);
    }
    {
        void *car = D_0044FD10;
        s32 len3 = func_003FA9B8(car);
        void *sp0 = *(void **)buf;
        s32 field = *(s32 *)((char *)sp0 - 0x10);
        func_00151A28(buf, field, 0, car, len3);
    }
    {
        void *sp0 = *(void **)buf;
        s32 f = *(s32 *)((char *)sp0 - 0x10);
        void *var5;
        if (f != 0) {
            *((char *)sp0 + f) = 0;
            var5 = sp0;
        } else {
            var5 = (void *)D_0044E838;
        }
        *arg0 = 0;
        func_001D4810(arg0, var5);
    }
    {
        void *sp0 = *(void **)buf;
        void *blk = (void *)((char *)sp0 - 0x10);
        s32 rc = *(s32 *)((char *)blk + 0x8);
        rc = rc - 1;
        *(s32 *)((char *)blk + 0x8) = rc;
        if (rc != 0) {
            return arg0;
        }
        s32 p = *(s32 *)((char *)blk + 0x4);
        p = p + 0x10;
        if (p != 0) {
            func_002B2028(blk);
        } else {
            u32 old = D_0040E618[-1];
            *(u32 *)blk = old;
            D_0040E618[-1] = (u32)blk;
        }
    }
    return arg0;
}
