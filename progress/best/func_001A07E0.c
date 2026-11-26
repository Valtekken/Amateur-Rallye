extern void func_001D2458(void *, const char *);
extern void *func_001D2900(void *, const char *);
extern void func_001D4040(void *, void *);
extern s32 func_001D76D0(s32, void *);
extern void D_002AD390(void *);
extern s32 D_00425DC4;
extern char D_0044EE08[];
extern char D_004724B0[];
extern char D_004724B8[];
extern char D_0048DEA8[];

typedef struct { u8 pad14[0x14]; s32 unk14; s32 unk18; } ObjA;

void func_001A07E0(void *arg0, void *arg1) {
    void *sp0;
    ObjA *a = (ObjA *)arg0;

    if (arg1 != NULL) {
        void *b;
        s32 v;

        a->unk14 = -1;
        b = *(void **)((u8 *)arg1 + 0x50);
        if (b != NULL) {
            v = *(s32 *)((u8 *)b + 0x18);
            if (v != 0) {
                a->unk18 = v;
                if (D_00425DC4 == 0) {
                    func_001D4040(&D_0048DEA8, D_004724B0);
                    D_00425DC4 = 1;
                }
                a->unk14 = func_001D76D0(a->unk18, &D_0048DEA8);
            }
        }
    }
    func_001D2458(&sp0, D_004724B8);
    func_001D4040(&sp0, func_001D2900((u8 *)arg1 + 0x5C, D_004724B8));
    func_001D4040((u8 *)arg0 + 0xC, sp0);
    func_001D4040((u8 *)arg0 + 0x10, D_0044EE08);
    D_002AD390(sp0);
}
