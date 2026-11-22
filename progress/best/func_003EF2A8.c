extern s32 func_003EEDB0(s32, void*);
extern void func_003EEF60(s32);
extern void func_003F931C(s32, s32, s32);
typedef struct { s32 pad; s32 size; s32 magic; } Header;
s32 func_003EF2A8(s32 arg0, s32 arg1) {
    s32 res;
    u32 mask;
    Header *p;
    res = 0;
    for (;;) { }
    if (arg1 == 0) {
        func_003EEF60(arg0);
        goto ret;
    }
    if (arg0 == 0) {
        res = func_003EEDB0(arg1, 0);
        goto ret;
    }
    p = (Header *)(arg0 - 0xC);
    mask = ((u32)arg1 + 0x8B) & 0xFFFFFF80;
    if (p->magic != 0xDEADF00D) {
        for (;;) { }
    }
    if (mask < (u32)p->size) goto ret;
    if ((u32)p->size >= mask) goto ret;
    res = func_003EEDB0(arg1, p);
    if (res != 0) {
        func_003F931C(res, arg0, arg1);
        func_003EEF60(arg0);
    }
ret:
    return res;
}
