extern void *D_002AD5A8(s32 size);
extern void func_002585C0(void *arg0);
extern void func_00258638(void *dst, void *src);
extern u8 D_0047A590[];

typedef struct Obj {
    s32 unk0;
    void *unk4;
    s32 unk8;
    s32 unkC;
    u8 *unk10;
    u8 *unk14;
    u8 *unk18;
} Obj;

void *func_002587D8(Obj *arg0, Obj *arg1) {
    s32 n;
    s32 i;
    void *p;
    u8 *arr;

    arg0->unk0 = 0;
    arg0->unk4 = D_0047A590;
    n = arg1->unk8;
    arg0->unk8 = n;
    arg0->unkC = arg1->unkC;

    p = D_002AD5A8(n * 0xC + 0x10);
    arr = (u8 *)p + 0x10;
    *(s32 *)p = n;
    i = n - 1;
    if (n != 0) {
        u8 *q = arr;
        do {
            *(s32 *)(q + 0) = 0;
            i--;
            *(s32 *)(q + 4) = 0;
            *(s32 *)(q + 8) = 0;
            q += 0xC;
        } while (i != -1);
    }
    arg0->unk10 = arr;

    n = arg0->unk8;
    p = D_002AD5A8(n * 0xC + 0x10);
    arr = (u8 *)p + 0x10;
    *(s32 *)p = n;
    i = n - 1;
    if (n != 0) {
        u8 *q = arr;
        do {
            *(s32 *)(q + 0) = 0;
            i--;
            *(s32 *)(q + 4) = 0;
            *(s32 *)(q + 8) = 0;
            q += 0xC;
        } while (i != -1);
    }
    arg0->unk14 = arr;

    n = arg0->unkC;
    p = D_002AD5A8(n * 0xC + 0x10);
    arr = (u8 *)p + 0x10;
    *(s32 *)p = n;
    i = n - 1;
    if (n != 0) {
        u8 *q = arr;
        do {
            func_002585C0(q);
            i--;
            q += 0xC;
        } while (i != -1);
    }
    arg0->unk18 = arr;

    if (arg0->unk8 > 0) {
        s32 j = 0;
        s32 off = 0;
        do {
            u8 *s = arg1->unk10 + off;
            u8 *d = arg0->unk10 + off;
            *(f32 *)(d + 0) = *(f32 *)(s + 0);
            *(f32 *)(d + 4) = *(f32 *)(s + 4);
            *(f32 *)(d + 8) = *(f32 *)(s + 8);
            s = arg1->unk14 + off;
            d = arg0->unk14 + off;
            *(f32 *)(d + 0) = *(f32 *)(s + 0);
            *(f32 *)(d + 4) = *(f32 *)(s + 4);
            *(f32 *)(d + 8) = *(f32 *)(s + 8);
            j++;
            off += 0xC;
        } while (j < arg0->unk8);
    }

    if (arg0->unkC > 0) {
        s32 j = 0;
        s32 off = 0;
        do {
            func_00258638(arg0->unk18 + off, arg1->unk18 + off);
            j++;
            off += 0xC;
        } while (j < arg0->unkC);
    }

    return arg0;
}
