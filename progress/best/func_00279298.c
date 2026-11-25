typedef struct { s32 f0; s32 f4; s16 f8; s16 fA; void *fC; s16 f10; s16 f12; void *f14; } Vt;
typedef struct { Vt *vt; void *f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; void *f1C; void *f20; void *f24; } Obj;
extern char D_0047A908[];
extern char D_0047A930[];
extern u8 D_0040E618[];
extern void func_003F9698(void *, void *);
extern void func_00234958(void *, s32);
extern void D_002AD530(void *);
extern void func_002B2028(void *);

void func_00279298(Obj *this) {
    Vt *vt;
    void *block;
    s32 sp[15];
    s32 n1, n2, n3;
    void **slot;

    func_003F9698(D_0047A908, D_0047A930);
    vt = this->vt;
    ((void (*)(void *))vt->fC)((u8 *)this + vt->f8);
    ((void (*)(void *))vt->f14)((u8 *)this + vt->f10);

    if (this->f1C != this->f20) {
        u8 *endp = (u8 *)this->f20;
        block = *(void **)(endp - 4);
        while (this->f1C != this->f20) {
            u8 *b;
            u32 count;
            u8 *q;
            endp = (u8 *)this->f20 - 4;
            this->f20 = endp;
            if (block == 0) break;
            b = (u8 *)block;
            count = *(u32 *)(b - 0x10);
            q = b + count * 0x28;
            if (b != q) {
                q -= 0x28;
                do {
                    func_00234958(q, 0);
                    q -= 0x28;
                } while (b != q);
            }
            D_002AD530(b - 0x10);
            block = *(void **)(endp - 4);
        }
    }

    sp[0] = (s32)this->f4;
    sp[1] = this->f8;
    sp[2] = this->fC;
    sp[8] = (s32)this->f10;
    sp[9] = this->f14;
    sp[10] = this->f18;
    sp[12] = (s32)this->f1C;
    sp[13] = (s32)this->f20;
    sp[14] = (s32)this->f24;
    n1 = (sp[14] - sp[12]) >> 2;

    this->f24 = 0;
    this->f4 = 0;
    this->f8 = 0;
    this->fC = 0;
    this->f10 = 0;
    this->f14 = 0;
    this->f18 = 0;
    this->f1C = 0;
    this->f20 = 0;

    if (n1 != 0) {
        if ((u32)(n1 * 4) != 0) func_002B2028((void *)sp[12]);
        else { slot = (void **)(D_0040E618 - 4); *(void **)sp[12] = *slot; *slot = (void *)sp[12]; }
    }
    n2 = (sp[10] - sp[8]) >> 2;
    if (n2 != 0) {
        if ((u32)(n2 * 4) != 0) func_002B2028((void *)sp[8]);
        else { slot = (void **)(D_0040E618 - 4); *(void **)sp[8] = *slot; *slot = (void *)sp[8]; }
    }
    n3 = (sp[2] - sp[0]) >> 2;
    if (n3 != 0) {
        if ((u32)(n3 * 4) != 0) func_002B2028((void *)sp[0]);
        else { slot = (void **)(D_0040E618 - 4); *(void **)sp[0] = *slot; *slot = (void *)sp[0]; }
    }
}
