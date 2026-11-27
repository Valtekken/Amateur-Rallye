extern s32 D_002AD408(s32);
extern s32 func_001D6F00(s32);
extern void func_002631F0(void *, s32);
extern s32 func_001D4010(void *);
extern void func_003FA310(void *, void *, s32);
extern void func_001D4040(s32 *, s32);
extern s32 func_001D76D0(s32, s32 *);
extern void func_001D77A0(s32, s32 *, s32 *);
extern s32 func_001D7730(s32, s32 *);
extern void func_001E3EC0(s32, void *, s32);
extern char D_00472300[], D_00472310[], D_00472320[], D_00472330[], D_00472340[];

typedef struct A0 { u8 pad[0x30]; s32 a30, a34, a38, a3c, a40, a44, a48, a4c, a50, a54; } A0;
typedef struct A1 { u8 pad[0x50]; void *obj; u8 pad2[0xC]; } A1;

void func_0019F530(A0 *a0, A1 *a1) {
    s32 buf[4];
    char path[0x70];
    s32 flags[4];
    s32 *p;
    void *obj;

    if (a1 == NULL) return;
    obj = a1->obj;
    if (obj == NULL) return;
    func_002631F0(obj, func_001D6F00(D_002AD408(0xC)));
    p = *(s32 **)((u8 *)obj + 0x18);
    if (p != NULL) {
        buf[0] = 0;
        func_001D4040(buf, (s32)D_00472300);
        a0->a30 = func_001D76D0((s32)p, buf);
        flags[0] = 1;
        func_001D77A0((s32)p, &a0->a30, &flags[0]);
        a0->a48 = func_001D7730((s32)p, &a0->a30);

        func_001D4040(buf, (s32)D_00472310);
        a0->a34 = func_001D76D0((s32)p, buf);
        flags[1] = 1;
        func_001D77A0((s32)p, &a0->a34, &flags[1]);
        a0->a4c = func_001D7730((s32)p, &a0->a34);

        func_001D4040(buf, (s32)D_00472320);
        a0->a38 = func_001D76D0((s32)p, buf);
        flags[2] = 1;
        func_001D77A0((s32)p, &a0->a38, &flags[2]);
        a0->a50 = func_001D7730((s32)p, &a0->a38);

        func_001D4040(buf, (s32)D_00472330);
        a0->a3c = func_001D76D0((s32)p, buf);
        flags[3] = 1;
        func_001D77A0((s32)p, &a0->a3c, &flags[3]);
        a0->a54 = func_001D7730((s32)p, &a0->a3c);
    }
    func_003FA310(path, D_00472340, func_001D4010((u8 *)a1 + 0x5C));
    func_001D4040(&a0->a40, (s32)path);
    func_001E3EC0(func_001E4280(), &a0->a40, a0->a44);
}
