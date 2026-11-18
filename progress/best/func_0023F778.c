typedef struct { f32 x,y,z; } Vec3;
extern void func_00244788(void);
extern void func_00244CF8(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4);
extern f32 D_004264A0;
extern void func_0024F6E0(void *dst, void *src);

void func_00244C58(s32 arg0, Vec3 *arg1, Vec3 *arg2) {
    f32 sp20, sp24, sp28;
    f32 sp30, sp34, sp38;
    s32 sp0=0, sp4=0, sp8=0;
    s32 sp10=0, sp14=0, sp18=0;
    func_00244788();
    sp20 = arg1->x;
    sp24 = arg1->y;
    sp28 = arg1->z;
    sp30 = arg2->x;
    sp34 = arg2->y;
    sp38 = arg2->z;
    func_00244CF8(arg0, (void*)&sp20, (void*)&sp30, (void*)&sp0, (void*)&sp10);
}

typedef struct { void **unk0; s32 unk4; } S_f_3FBF0;
typedef struct { f32 unk8, unk4, unkC; } S_fe_3FBF0;

s32 func_0023FBF0(Vec3 *arg0, S_f_3FBF0 *arg1) {
    void **base;
    s32 count;
    s32 i;
    base = arg1->unk0;
    count = ((s32)arg1->unk4 - (s32)base) >> 2;
    if (count <= 0) return 1;
    i = 0;
    while (i < count) {
        S_fe_3FBF0 *e = (S_fe_3FBF0 *)(*(void **)base[i] + 8);
        f32 d = e->unk8 * arg0->x + e->unk4 * arg0->y + e->unkC * arg0->z;
        s32 ret;
        if (D_004264A0 <= d) ret = 1;
        else if (d <= -D_004264A0) ret = -1;
        else ret = 0;
        if (ret == 1) return 0;
        i++;
    }
    return 1;
}

s32 func_0023F778(void *arg0) {
    u8 sp[0x30];
    void *obj;
    s32 ref;
    void *vt;
    void (*fn)(void*, s32, void*);
    func_0024F6E0(sp, *(void**)((char*)arg0+0x28));
    obj = *(void**)sp;
    if (obj == 0) return 0;
    ref = *(s32*)obj;
    ref = ref - 1;
    *(s32*)obj = ref;
    if (ref == 0) {
        vt = *(void**)((char*)obj+4);
        fn = *(void(**)(void*,s32,void*))((char*)vt+0xC);
        fn((char*)obj + *(s16*)((char*)vt+8), 3, obj);
    }
    return *(s32*)((char*)obj+0x14);
}

typedef struct { void *unk18; s32 unk1C; } S_arr_3F730;
s32 func_0023F730(S_arr_3F730 *arg0, s32 arg1) {
    s32 *v7 = (s32 *) arg0->unk18;
    s32 count = (((s32) arg0->unk1C) - ((s32) v7)) >> 2;
    s32 i = 0;
    if (count > 0) {
        s32 *p = v7;
        do {
            if (arg1 != (*p)) {
                i++;
                p++;
                if (i < count) continue;
                break;
            }
            return i;
        } while (1);
    }
    return -1;
}
