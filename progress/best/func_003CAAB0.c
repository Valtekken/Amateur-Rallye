typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} UnkB9D0Sub;

extern unsigned char *D_0049B9D0;
extern void *func_003CA3B0(s32, s32);
s32 func_003C9D98(s32, s32, void *, s32);

s32 func_003CAAB0(s32 arg0, s32 arg1, unsigned char *arg2) {
    void *obj;
    UnkB9D0Sub *p;
    s32 i;
    unsigned char *dst;
    s32 res;
    obj = func_003CA3B0(arg0, arg1);
    if (*(unsigned char *)((char *)obj + 0x72) != 1) {
        return 0;
    }
    p = (UnkB9D0Sub *)(D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    dst = (unsigned char *)p + 0xC;
    for (i = 0; i < 6; i++) {
        dst[i] = arg2[i];
    }
    p->unk4 = 1;
    p->unk8 = 6;
    res = func_003C9D98(arg0, arg1, p, (s32)dst);
    if ((res ^ 1) != 0) {
        res = 0;
    } else {
        res = 1;
    }
    return res;
}
