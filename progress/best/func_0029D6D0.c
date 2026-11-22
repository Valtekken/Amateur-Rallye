typedef struct { f32 f[8]; } Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Buffer;

extern int func_00297500(void);
extern int func_002971F8(int);
extern void func_0029D940(void *, int);
extern void func_0029DA78(void *, int);
extern int func_001E4280(void);
extern void func_001D4040(void *, void *);
extern void func_001E3D10(int, void *, int);
extern char D_0047C0E0[];

typedef struct {
    char pad[0x14];
    s32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    s32 unk30;
    s32 unk34;
    char pad2[0x4];
    s32 unk3C;
    s32 unk40;
} Unk;

void func_0029D6D0(Unk *arg0) {
    int v0 = func_002971F8(func_00297500());
    if (v0 == 3) {
        if (arg0->unk34 == 0) {
            func_0029DA78(arg0, 1);
        } else {
            arg0->unk40++;
            if (arg0->unk40 >= 10) {
                func_0029DA78(arg0, arg0->unk14);
                int res = func_001E4280();
                func_001D4040(arg0, D_0047C0E0);
                func_001E3D10(res, arg0, 1);
                arg0->unk34 = 0;
                return;
            }
        }
        int res = func_001E4280();
        func_001D4040(arg0, D_0047C0E0);
        func_001E3D10(res, arg0, 1);
        arg0->unk34 = 0;
    } else if (v0 == 2 || v0 == 8 || v0 == 9) {
        if (v0 == 2) {
            if (arg0->unk34 == 0) {
                func_0029DA78(arg0, 1);
                int res = func_001E4280();
                func_001D4040(arg0, D_0047C0E0);
                func_001E3D10(res, arg0, 1);
                arg0->unk34 = 1;
            } else {
                arg0->unk40++;
                if (arg0->unk40 >= 10) {
                    func_0029DA78(arg0, arg0->unk14);
                    int res = func_001E4280();
                    func_001D4040(arg0, D_0047C0E0);
                    func_001E3D10(res, arg0, 1);
                    arg0->unk34 = 1;
                } else {
                    arg0->unk34 = arg0->unk34;
                }
            }
        } else {
            if (arg0->unk34 == 0) {
                func_0029DA78(arg0, 1);
                int res = func_001E4280();
                func_001D4040(arg0, D_0047C0E0);
                func_001E3D10(res, arg0, 1);
                arg0->unk34 = 1;
            } else {
                arg0->unk40++;
                if (arg0->unk40 >= 10) {
                    func_0029DA78(arg0, arg0->unk14);
                    int res = func_001E4280();
                    func_001D4040(arg0, D_0047C0E0);
                    func_001E3D10(res, arg0, 1);
                    arg0->unk34 = 1;
                }
            }
        }
        arg0->unk34 = 0;
    } else {
        arg0->unk34 = 0;
    }
}
