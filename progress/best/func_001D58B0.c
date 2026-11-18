extern s32 func_002C5160(s32, s32, s32, s32);
s32 func_003978C8(s32 a, s32 b, s32 c, s32 d) {
    return func_002C5160(a, b, c, d);
}

void func_001D6310(void *arg0, s32 arg2, s32 arg3) {
    void **v = (void **)arg0;
    void *vt = *v;
    s16 off1 = *(s16 *)((char *)vt + 0x60);
    void (*fn1)(char *) = *(void (*)(char *))((char *)vt + 0x64);
    fn1((char *)arg0 + off1);
    s16 off2 = *(s16 *)((char *)vt + 0x70);
    void (*fn2)(char *, s32, s32) = *(void (*)(char *, s32, s32))((char *)vt + 0x74);
    fn2((char *)arg0 + off2, arg2, arg3);
}

void func_001D6378(void *arg0, s16 arg1, s16 arg2, s32 arg3) {
    struct { s16 a; s16 b; s32 c; } sp_struct;
    sp_struct.a = arg1;
    sp_struct.b = arg2;
    sp_struct.c = arg3;
    void **v = (void **)arg0;
    void *vt = *v;
    s16 off = *(s16 *)((char *)vt + 0x70);
    void (*fn)(char *, void *, s32) = *(void (*)(char *, void *, s32))((char *)vt + 0x74);
    fn((char *)arg0 + off, &sp_struct, 8);
}

extern s32 func_003CD828(void *, s32);
extern void func_002AE2F0(void *);
extern u32 D_0047D9A8[];
extern u32 D_00488DF8[];

void *func_003D26F8(void *arg0, s32 *arg1) {
    void **obj = (void **)arg0;
    s32 *p = arg1;
    s32 val = *p;
    *obj = (void *)D_00488DF8;
    return arg0;
}

extern s32 func_001D56C0(s32);
void func_001D58B0(s32 arg0) {
    void **head = (void **)(arg0 + 12);
    void *start = *head;
    if (start != (void *)head) {
        void *curr = start;
        do {
            func_001D56C0((s32)curr);
            curr = *(void **)((char *)curr + 4);
        } while (curr != (void *)head);
    }
}
