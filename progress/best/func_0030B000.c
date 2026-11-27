extern void *func_00152D28(s32);
extern void *func_002B1FC0(s32, s32, s32);
extern void func_002B2028(void *);
extern void func_0030AFC8(void *, void *, void *, s32, s32);
extern void *func_003D2910(s32);
extern void *D_0040E618;

typedef struct {
    s32 a; s32 b;
} Elem8;

typedef struct {
    Elem8 *unk0; /* 0x0 begin */
    Elem8 *unk4; /* 0x4 end */
    Elem8 *unk8; /* 0x8 cap */
} Vec;

static void copy8(Elem8 *dst, const Elem8 *src, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        dst[i].a = src[i].a;
        dst[i].b = src[i].b;
    }
}

Vec *func_0030B000(Vec *arg0, Vec *arg1) {
    s32 i;
    s32 var_18;
    if (arg1 != arg0) {
        Elem8 *first = arg1->unk0;
        Elem8 *last = arg1->unk4;
        Elem8 *cur = arg0->unk0;
        s32 other_n = ((s32)last - (s32)first) >> 3;

        if ((((s32)arg0->unk8 - (s32)cur) >> 3) >= (u32)other_n) {
            s32 cur_n = ((s32)arg0->unk4 - (s32)cur) >> 3;
            var_18 = other_n * 8;
            if ((u32)cur_n >= (u32)other_n) {
                copy8(cur, first, other_n);
            } else {
                copy8(cur, first, cur_n);
                func_0030AFC8((void *)((u8 *)first + cur_n * 8), (void *)last, (void *)arg0->unk4, 0, 0);
            }
            arg0->unk4 = (Elem8 *)((u8 *)arg0->unk0 + var_18);
        } else {
            Elem8 *mem;
            s32 sz = other_n * 8;
            var_18 = sz;
            if (other_n != 0) {
                mem = (Elem8 *)func_002B1FC0(sz, other_n, (s32)cur);
                if (mem == NULL) {
                    mem = (Elem8 *)func_003D2910(sz);
                }
            } else {
                mem = NULL;
                var_18 = 0;
            }
            func_0030AFC8((void *)first, (void *)last, (void *)mem, 0, 0);
            /* destroy + dealloc old */
            {
                Elem8 *old = arg0->unk0;
                s32 capn = ((s32)arg0->unk8 - (s32)old) >> 3;
                if (capn != 0) {
                    func_002B2028(old);
                }
            }
            arg0->unk0 = mem;
            arg0->unk8 = (Elem8 *)((u8 *)mem + var_18);
            arg0->unk4 = (Elem8 *)((u8 *)arg0->unk0 + var_18);
        }
    }
    return arg0;
}
