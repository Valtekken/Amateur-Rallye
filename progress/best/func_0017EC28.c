extern void ***func_001D6E40(void);
extern void func_003FA310(char *, const char *, s32);
extern void func_001D4040(char *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern char D_0044F088[];
extern char D_0044F0A0[];
typedef struct { s16 pad[0x3C]; s16 off; s16 pad2; s32 (*fn)(void *, s32, void *); } VT;
typedef struct { s32 pad[5]; s32 unk14; } Obj;
static inline void put(char *dst, const char *src) { func_001D4040(dst, src); }

void func_0017EC28(Obj *arg0) {
    char sp[0x60];
    s32 i;
    void **obj = *func_001D6E40();
    void *vt = *obj;
    s16 off = *(s16 *)((char *)vt + 0x78);
    s32 (*fn)(void *, s32, void *) = *(s32 (**)(void *, s32, void *))((char *)vt + 0x7C);
    if (fn((char *)obj + off, 0x39, obj) == 0) return;
    if (arg0->unk14 <= 0) return;
    i = 0;
    do {
        func_003FA310(sp, D_0044F0A0, i);
        put(sp + 0x40, sp);
        func_001E3D10(func_001E4280(), sp + 0x40, 1);
        func_001E33C8(func_001E4280(), sp + 0x40, 0);
        func_003FA310(sp, D_0044F088, i);
        i++;
        put(sp + 0x50, sp);
        func_001E3EC0(func_001E4280(), sp + 0x50, 3);
    } while (i < arg0->unk14);
}
