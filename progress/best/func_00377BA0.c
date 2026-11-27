extern void func_002FBE30(void *, void *, s32, void *);
extern void func_0037BDD0(void *, void *, void *);

typedef struct { u8 *f0; u8 *f4; u8 *f8; } U16Vec;

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u16 unkC;
    /* 0x0E */ u16 unkE;
} Elem;

typedef struct {
    /* 0x00 */ Elem *start;
    /* 0x04 */ Elem *end;
    /* 0x08 */ Elem *cap;
    /* 0x0C */ U16Vec vec;
    /* 0x18 */ u8 pad[0x48];
    /* 0x60 */ s32 count;
} Arg0;

void func_00377BA0(Arg0 *arg0, s16 *arg1, s32 arg2, s32 arg3)
{
    u16 sp0;
    s32 sp4;
    s32 sp8;
    u16 spC;
    s16 sp10;
    U16Vec *vec = &arg0->vec;
    u8 *start;
    u8 *end;
    u8 *p;
    s32 idx;
    s32 n;
    s32 count;
    Elem *e;

    idx = *arg1;
    count = (s32)(vec->f4 - vec->f0) >> 1;
    if (idx >= count) {
        sp0 = 0xFFFF;
        n = (idx + 0x10) & ~0xF;
        start = vec->f0;
        end = vec->f4;
        count = (s32)(end - start) >> 1;
        if ((u32)n < (u32)count) {
            p = start + (n << 1);
            if (p < end) {
                p += 2;
                while (p < end)
                    p += 2;
            }
            vec->f4 = end - (end - p);
        } else {
            func_002FBE30(vec, end, n - count, &sp0);
        }
    }

    if (arg3 != 0) {
        ((s16 *)vec->f0)[*arg1] = -2;
        return;
    }

    {
        Elem *e0 = arg0->start;
        s32 old4 = e0->unk4;
        s32 sz;
        spC = 0xFFFF;
        sp8 = 0;
        sp4 = old4;
        sz = ((s32)((u8 *)arg0->end - (u8 *)e0)) >> 4;
        e0->unk4 = sz;
        ((Elem *)((u8 *)e0 + old4 * 16))->unk8 = sz;
        sp10 = (s16)sz;
        spC = (u16)*arg1;
        ((s16 *)vec->f0)[(u16)*arg1] = (s16)sz;

        e = arg0->end;
        if (e == arg0->cap) {
            func_0037BDD0(arg0, e, &sp0);
        } else {
            if (e != NULL) {
                e->unk0 = arg2;
                e->unk4 = sp4;
                e->unk8 = sp8;
                e->unkC = spC;
            }
            arg0->end = e + 1;
        }
        arg0->count += arg2;
    }
}
