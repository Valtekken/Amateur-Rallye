extern void *func_003D82C8(void *, void *, void *, s32);

typedef struct {
    s32 unk00;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x34];
    void *vtable;
} S;

void *func_003D8690(S *arg0, void *arg1, s64 arg2) {
    void *vt = arg0->vtable;
    s32 (*fn)(void *) = *(s32 (**)(void *))((char *)vt + 0x5C);
    s32 ret = fn(arg0);
    if (ret == -1) {
        return NULL;
    }
    if (arg1 == 0 || arg2 == 0) {
        arg0->unk00 |= 2;
        func_003D82C8(arg0, (char *)arg0 + 0x4B, (char *)arg0 + 0x4C, 0);
    } else {
        arg0->unk00 &= ~2;
        func_003D82C8(arg0, arg1, (char *)arg1 + (s32)arg2, 0);
    }
    arg0->unk18 = 0;
    arg0->unk14 = 0;
    arg0->unk10 = 0;
    arg0->unk08 = 0;
    arg0->unk04 = 0;
    arg0->unk0C = 0;
    return arg0;
}
